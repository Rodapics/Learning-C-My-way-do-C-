set terminal pngcairo transparent enhanced color font "Times, 18"
set output "derivada2.png"
set xlabel "x"


plot "derivada2.dat" using 1:2 w l lw 3 lc 7 t "f(x) = x^2", "" using 1:3 w l lw 3 lc 3 t "f'(x)", "" u 1:4 w l lw 3 lc 2 t "f''(x)"

unset output
