set terminal pngcairo transparent enhanced color font "Times, 18"
set output "derivada.png"
set xlabel "x"


plot "solucionEDO.dat" index 0 using 1:2 w l lw 3 lc 7 t 
unset output
