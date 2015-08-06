
clear
reset
set key
# Make the x axis labels easier to read.
set size 1,1
set xtics rotate out
set grid ytics lc rgb "#bbbbbb" lw 1 lt 0
set grid xtics lc rgb "#bbbbbb" lw 1 lt 0
# set arrow from graph 0,first 0 to graph 1,first 0 nohead lc rgb "#000000" front

set style data histogram
# Give the bars a plain fill pattern, and draw a solid line around them.
set style fill solid border
set yrange [0.1:]

set linetype 1 lc rgb 'black'
set linetype 2 lc rgb '#999999'

set xlabel "Benchmark"
set ylabel "# of Checkpoints"
set title full_title

set logscale y

# set label "46.16%" at 4.5,31 # RodiniaBackprop
# set label "61.10%" at 14.0,31 # RodiniaNw
# set label "34.71%" at 16.5,31 # RodiniaNw_refactored

set style histogram cluster gap 1
plot 'data' using 2:xticlabels(1) title columnheader, \
     'data' using 3:xticlabels(1) title columnheader
# plot for [COL=2:4] 'data' using COL:xticlabels(1) title columnheader

set term png size 1280,960 enhanced font 'Verdana,14'
set output output_file
replot
set term x11

