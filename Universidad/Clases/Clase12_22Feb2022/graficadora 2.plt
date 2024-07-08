set terminal pngcairo transparent enhanced color font "Times New Roman, 18"
set output "grafica2.png"
set xlabel "x"


plot "solucionEDO.dat" u 1:2 w lp lw 3 lc 7 t "Euler" , "solucionEDO-RK2.dat" u 1:2 w lp lw 3 lc 3 t "Runge Kutta"
unset output
