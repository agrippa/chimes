#include "OMPTree.h"
#include <clang/AST/ASTContext.h>
#include <sstream>

extern std::string stmtToString(const clang::Stmt *S,
        clang::ASTContext *Context);

bool OMPTree::isBetween(clang::SourceLocation check,
        clang::SourceLocation start, clang::SourceLocation end) {
    return SM->isBeforeInTranslationUnit(start, check) &&
        SM->isBeforeInTranslationUnit(check, end);
}

OMPRegion *OMPTree::find_parent_helper(OMPRegion *region, OMPRegion *curr) {
    clang::SourceLocation region_start = region->get_start();
    clang::SourceLocation region_end = region->get_end();

    clang::SourceLocation curr_start = curr->get_start();
    clang::SourceLocation curr_end = curr->get_end();

    if (isBetween(region_start, curr_start, curr_end) &&
            isBetween(region_end, curr_start, curr_end)) {
        return curr;
    }

    if (curr->get_parent() == NULL) {
        return NULL;
    } else {
        return find_parent_helper(region, curr->get_parent());
    }
}

OMPRegion *OMPTree::find_parent(OMPRegion *region) {
    for (std::vector<OMPRegion *>::iterator i = leaves.begin(),
            e = leaves.end(); i != e; i++) {
        OMPRegion *leaf = *i;
        OMPRegion *parent = find_parent_helper(region, leaf);
        if (parent != NULL) return parent;
    }

    return NULL;
}

void OMPTree::add_region(OMPRegion *region) {
    OMPRegion *parent = find_parent(region);

    region->set_parent(parent);

    if (parent == NULL) {
        roots.push_back(region);
        leaves.push_back(region);
    } else {
        parent->add_child(region);

        std::vector<OMPRegion *>::iterator found = leaves.begin();
        while (found != leaves.end()) {
            OMPRegion *curr = *found;
            if (curr == parent) break;
            found++;
        }

        if (found != leaves.end()) leaves.erase(found);

        leaves.push_back(region);
    }
}

OMPRegion *OMPTree::find_containing_region(const clang::Stmt *d) {
    std::vector<OMPRegion *> todo;
    clang::SourceLocation loc = d->getLocStart();

    for (std::vector<OMPRegion *>::iterator i = leaves.begin(),
            e = leaves.end(); i != e; i++) {
        todo.push_back(*i);
    }

    while (todo.size() > 0) {
        std::vector<OMPRegion *>::iterator front = todo.begin();
        OMPRegion *region = *front;
        todo.erase(front);

        if (isBetween(loc, region->get_start(), region->get_end())) {
            return region;
        }

        if (region->get_parent() != NULL) todo.push_back(region->get_parent());
    }
    return NULL;
}

OMPRegion *OMPTree::find_region_for_line(int line) {
    std::vector<OMPRegion *> todo;

    for (std::vector<OMPRegion *>::iterator i = leaves.begin(),
            e = leaves.end(); i != e; i++) {
        todo.push_back(*i);
    }

    while (todo.size() > 0) {
        std::vector<OMPRegion *>::iterator front = todo.begin();
        OMPRegion *region = *front;
        todo.erase(front);

        if (region->get_line() == line) {
            return region;
        }

        if (region->get_parent() != NULL) todo.push_back(region->get_parent());
    }
    return NULL;
}

bool OMPTree::add_function_call(const clang::CallExpr *call, int lbl) {
    OMPRegion *region = find_containing_region(call);

    if (region != NULL && !region->resumable()) {
        return false;
    }

    if (calls_in_regions.find(region) == calls_in_regions.end()) {
        calls_in_regions[region] = new std::vector<ContainedFunctionCall>();
    }
    calls_in_regions[region]->push_back(ContainedFunctionCall(call, lbl));
    return true;
}

std::string OMPTree::str() {
    std::stringstream ss;

    ss << "roots = [ ";
    for (std::vector<OMPRegion *>::iterator i = roots.begin(), e = roots.end();
            i != e; i++) {
        OMPRegion *region = *i;
        ss << region_str(region) << " ";
    }
    ss << "]\n";

    ss << "leaves = [ ";
    for (std::vector<OMPRegion *>::iterator i = leaves.begin(),
            e = leaves.end(); i != e; i++) {
        OMPRegion *region = *i;
        ss << region_str(region) << " ";
    }
    ss << "]\n";

    return ss.str();
}

std::string OMPTree::region_str(OMPRegion *region) {
    std::stringstream ss;
    int calls_in_region = 0;
    if (calls_in_regions.find(region) != calls_in_regions.end()) {
        calls_in_region = calls_in_regions[region]->size();
    }

    ss << "{lbl=" << region->get_lbl() << ", " << calls_in_region <<
        " calls, children=[";
    for (std::vector<OMPRegion *>::iterator i = region->get_children().begin(),
            e = region->get_children().end(); i != e; i++) {
        ss << " " << (*i)->get_lbl();
    }
    ss << " ]}";

    return ss.str();
}
