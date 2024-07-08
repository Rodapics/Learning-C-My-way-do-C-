set terminal pngcairo transparent enhanced color
set output "funcion_trozos.dat"

set xlabel "Variable x"
set ylabel "Variable y"


plot "funcion_trozos.dat"

unset output