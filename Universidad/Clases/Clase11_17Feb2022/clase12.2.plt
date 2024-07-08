set terminal pngcairo transparent enhanced color font "Times, 18"
set output "derivada.png"
set xlabel "x"


plot "derivada.dat" index 0 using 1:2 w l lw 3 lc 7 t "f(x) = x^2", "" i 0 using 1:3 w l lw 3 lc 3 t "f'(x)", "" i 1 u 1:3 w l lw 3 lc 2 t "f''(x)"

unset output
