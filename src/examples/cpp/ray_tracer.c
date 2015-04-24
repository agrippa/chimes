#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

#ifdef __CHIMES_SUPPORT
#include "checkpoint.h"
#endif

typedef struct _sphere {
    double cx, cy, cz;
    double radius;
    double clR, clG, clB;
} sphere;

typedef struct _rgb {
    double r, g, b;
} rgb;

typedef struct _config {
    double px, py, pz;
    double lx, ly, lz;
    double dx, dy, dz;
    double svx, svy, svz;
    int nx, ny;
    sphere *spheres;
    int nspheres;
    int nt;
} config;

void init(sphere *s, double cx, double cy, double cz, double radius, double clR,
        double clG, double clB) {
    assert(s);

    s->cx = cx;
    s->cy = cy;
    s->cz = cz;

    s->radius = radius;

    s->clR = clR;
    s->clG = clG;
    s->clB = clB;
}

double get_coord(double i1, double i2, double w1, double w2, double p) {
    return ((p - i1) / (i2 - i1)) * (w2 - w1) + w1;
}

double modv(double vx, double vy, double vz) {
    return sqrt(vx * vx + vy * vy + vz * vz);
}

void move(sphere *self, double vx, double vy, double vz) {
    self->cx += vx;
    self->cy += vy;
    self->cz += vz;
}

void move_to(sphere *self, double vx, double vy, double vz) {
    self->cx = vx;
    self->cy = vy;
    self->cz = vz;
}

void rot_x(sphere *self, double angle) {
    double y = self->cy * cos(angle) - self->cz * sin(angle);
    double z = self->cy * sin(angle) + self->cz * cos(angle);
    self->cy = y;
    self->cz = z;
}

void rot_y(sphere *self, double angle) {
  double x = self->cx * cos(angle) - self->cz * sin(angle);
  double z = self->cx * sin(angle) + self->cz * cos(angle);
  self->cx = x;
  self->cz = z;
}

double get_sphere_intersec(double cx, double cy, double cz, double radius,
        double px, double py, double pz, double vx, double vy, double vz) {
    double A = (vx * vx + vy * vy + vz * vz);
    double B = 2.0 * (px * vx + py * vy + pz * vz - vx * cx - vy *
        cy - vz * cz);
    double C = px * px - 2 * px * cx + cx * cx + py * py - 2 * py *
      cy + cy * cy + pz * pz - 2 * pz * cz + cz * cz -
      radius * radius;
    double D = B * B - 4 * A * C;
    double t = -1.0;
    if (D >= 0)
    {
      double t1 = (-B - sqrt(D)) / (2.0 * A);
      double t2 = (-B + sqrt(D)) / (2.0 * A);
      if (t1 > t2) t = t1; else t = t2;
    }
    return t;
}

double get_cos_angle_v1v2(double v1x, double v1y, double v1z, double v2x,
        double v2y, double v2z) {
    double a = modv(v1x, v1y, v1z);
    double b = modv(v2x, v2y, v2z);
    return (v1x * v2x + v1y * v2y + v1z * v2z) / (a * b);
}

void usage(char **argv) {
    fprintf(stderr, "usage: %s [-x nx] [-y ny] [-s sx,sy,sz,r,clr,clg,clb] "
        "[-p px,py,pz]\n", argv[0]);
    exit(1);
}

void parse_three_doubles(char *def, double *a, double *b, double *c) {
    char *first_comma = strchr(def, ',');
    assert(first_comma);
    char *second_comma = strchr(first_comma + 1, ',');
    assert(second_comma);

    *first_comma = '\0';
    *second_comma = '\0';

    *a = atof(def);
    *b = atof(first_comma + 1);
    *c = atof(second_comma + 1);
}

void parse_config(int argc, char **argv, config *conf) {
    int c;
    opterr = 0;

    conf->nx = 200; // default
    conf->ny = 200; // default
    conf->px = 0.0;
    conf->py = 0.0;
    conf->pz = 0.0;
    conf->svx = 1.0;
    conf->svy = 1.0;
    conf->svz = 1.0;
    conf->nt = 1000;
    conf->spheres = NULL;
    conf->nspheres = 0;

    while ((c = getopt(argc, argv, "s:x:y:p:l:d:v:t:h")) != -1) {
        switch (c) {
            case 'x':
                conf->nx = atoi(optarg);
                break;
            case 'y':
                conf->ny = atoi(optarg);
                break;
            case 't':
                conf->nt = atoi(optarg);
                break;
            case 'v':
                parse_three_doubles(optarg, &conf->svx, &conf->svy, &conf->svz);
                break;
            case 'p':
                parse_three_doubles(optarg, &conf->px, &conf->py, &conf->pz);
                break;
            case 'l':
                parse_three_doubles(optarg, &conf->lx, &conf->ly, &conf->lz);
                break;
            case 'd':
                parse_three_doubles(optarg, &conf->dx, &conf->dy, &conf->dz);
                break;
            case 's': {
                char *sphere_def = optarg;

                char *first_comma = strchr(sphere_def, ',');
                assert(first_comma);
                char *second_comma = strchr(first_comma + 1, ',');
                assert(second_comma);
                char *third_comma = strchr(second_comma + 1, ',');
                assert(third_comma);
                char *fourth_comma = strchr(third_comma + 1, ',');
                assert(fourth_comma);
                char *fifth_comma = strchr(fourth_comma + 1, ',');
                assert(fifth_comma);
                char *sixth_comma = strchr(fifth_comma + 1, ',');
                assert(sixth_comma);

                *first_comma = '\0';
                *second_comma = '\0';
                *third_comma = '\0';
                *fourth_comma = '\0';
                *fifth_comma = '\0';
                *sixth_comma = '\0';

                conf->spheres = (sphere *)realloc(conf->spheres,
                    (conf->nspheres + 1) * sizeof(sphere));
                init(conf->spheres + conf->nspheres, atof(sphere_def),
                    atof(first_comma + 1), atof(second_comma + 1),
                    atof(third_comma + 1), atof(fourth_comma + 1),
                    atof(fifth_comma + 1), atof(sixth_comma + 1));
                conf->nspheres += 1;

                break;
            }
        case '?':
            fprintf(stderr, "Missing argument to option %c\n", optopt);
        case 'h':
        default:
            usage(argv);
        }
    }
}

int main(int argc, char **argv) {
    config conf;
    parse_config(argc, argv, &conf);
    rgb *screen = (rgb *)malloc(sizeof(rgb) * conf.nx * conf.ny);

    double f_max = 200.0;
    for (int t = 0; t < conf.nt; t++) {
      int i;

#pragma omp parallel for
      for (i = 0; i < conf.nx * conf.ny; i++) {
        double x = get_coord(0.0, conf.nx, -f_max, f_max, i / conf.ny);
        double y = get_coord(0.0, conf.ny, -f_max, f_max, i % conf.ny);
        double t = 1.0E10;
        double vx = x - conf.px;
        double vy = y - conf.py;
        double vz = -conf.pz;

        double mod_v = modv(vx, vy, vz);
        vx = vx / mod_v;
        vy = vy / mod_v;
        vz = vz / mod_v;

        bool bShadow = false;
        sphere *spherehit = NULL;
        for (int k = 0; k < conf.nspheres; k++) {
          sphere *sphn = conf.spheres + k;
          double taux = get_sphere_intersec(sphn->cx, sphn->cy, sphn->cz,
              sphn->radius, conf.px, conf.py, conf.pz, vx, vy, vz);
          if (taux < 0) continue;
          if (taux > 0 && taux < t) {
            t = taux;
            spherehit = sphn;
          }
        }

        rgb color; color.r = 0.03; color.g = 0.06; color.b = 0.03;
        if (spherehit != NULL) {
          double itx = conf.px + t * vx;
          double ity = conf.py + t * vy;
          double itz = conf.pz + t * vz;
          // shadow
          double tauxla = get_sphere_intersec(spherehit->cx, spherehit->cy,
              spherehit->cz, spherehit->radius, conf.lx, conf.ly, conf.lz,
              itx - conf.lx, ity - conf.ly, itz - conf.lz);

          for (int k = 0; k < conf.nspheres; k++) {
            sphere *sphnb = conf.spheres + k;
            if (sphnb != spherehit) {
              double tauxlb = get_sphere_intersec(sphnb->cx,
                  sphnb->cy, sphnb->cz, sphnb->radius, conf.lx,
                  conf.ly, conf.lz, itx - conf.lx, ity - conf.ly, itz -
                  conf.lz);
              if (tauxlb > 0 && tauxla < tauxlb) {
                bShadow = true;
                break;
              }
            }
          }
          double cost = get_cos_angle_v1v2(conf.dx, conf.dy, conf.dz, itx -
              spherehit->cx, ity - spherehit->cy, itz -
              spherehit->cz);
          if (cost < 0) cost = 0;
          double fact = 1.0;
          if (bShadow == true) fact = 0.5; else fact = 1.0;
          color.r = spherehit->clR * cost * fact;
          color.g = spherehit->clG * cost * fact;
          color.b = spherehit->clB * cost * fact;
        }

        screen[i].r = color.r;
        screen[i].g = color.g;
        screen[i].b = color.b;
      }

      for (int i = 0; i < conf.nspheres; i++) {
          move(conf.spheres + i, conf.svx, conf.svy, conf.svz);
      }

#ifdef __CHIMES_SUPPORT
        checkpoint();
#endif

      printf("%d/%d\n", (t + 1), conf.nt);
    }

    free(screen);
    return (0);
}
