set terminal pngcairo transparent enhanced color
set output "funcion_trozos.png"

set xlabel "Variable x"
set ylabel "Variable y"

set yrange[-10:10]
set key

plot "funcion_trozos.dat" w lp pt 6 t "función a trozos"

unset output