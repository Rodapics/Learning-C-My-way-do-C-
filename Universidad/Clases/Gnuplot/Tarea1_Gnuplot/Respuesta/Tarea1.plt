set terminal pngcairo transparent enhanced color size 900,600

set output "Grafica_Tarea1_1.png"

set multiplot title "Multiplot" layout 1,3


set xlabel "Eje x"
set ylabel "Eje y"
set xrange[-10:10]
set yrange[-0.4:1]
unset key
plot x title "A"

reset

set xlabel "Eje x"
set ylabel "Eje y"
set xrange[-3:3]
set yrange[-1:1]
unset key
plot sin(x)
reset

set xlabel "Eje x"
set ylabel "Eje y"
set xrange[-pi:pi]
set yrange[-1:1]
unset key
plot sin(x)
reset
unset multiplot

unset output
