set terminal pngcairo transparent enhanced color size 900,600

set output "grafica3.png"

set multiplot layout 2,3 title "Multiplot"

set polar
set xlabel "Eje x"
set ylabel "Eje y"
set trange[0:12*pi]
set size square
unset key
f1(t)=2*t
set samples 300
plot f1(t)

reset

set polar
set xlabel "Eje x"
set ylabel "Eje y"
set trange[0:10*pi]
set size square
unset key
f1(t)=cos(2*t)
set samples 300
plot f1(t)
reset


set polar
set xlabel "Eje x"
set ylabel "Eje y"
set trange[0:2*pi]
set size square
unset key
f2(t)= 3*sqrt(14)/4*(3/5*cos(2*t)**3)-cos(4*t)
set samples 300
plot f2(t)
reset

set polar
set xlabel "Eje x"
set ylabel "Eje y"
set trange[0:10*pi]
set size square
unset key
f1(t)=2*t
set samples 300
plot f1(t)
reset

set polar
set xlabel "Eje x"
set ylabel "Eje y"
set trange[0:10*pi]
set size square
unset key
f1(t)=t
set samples 300
plot f1(t)
reset

set polar
set xlabel "Eje x"
set ylabel "Eje y"
set trange[0:10*pi]
set size square
unset key
f1(t)=t/2
set samples 300
plot f1(t)
reset
unset multiplot

unset output
