set terminal pngcairo font "times,26" enhanced color size 900,600
set output "Grafica26Nov.png"
set xrange[-5:5]
set yrange[0:1.2]
set xlabel "x"
set ylabel "P(X)"
set key top right #Posición por defecto
#----- Las funciones a pintar----
#x,y,z son los nombres de las variables independientes para cartesianas.
#r,t son los nombres de las variables independientes para polares.
P1(x)=exp(-x**2)
P2(x)=exp(-(0.7*x)**2)
plot P1(x) w lp ps 2 pt 7 lc 4 t "P_1(X)", P2(x) w l lw 4 t "P_2(X)"

#w lp pinte con puntos y lineas, ps points size 2, points type.
#lc line color
#lw ancho de la línea.
# 1 morado, 2 verde, 3 azul clarito, 4 naranja.
#Con una coma, ponemos otra grafica.
#x al cuadrado, plot es decir haga
#Vamos a realizarle bastante cosas a la guassiana.
#Set terminal es importante.
#Toda la información va antes de la instrucción plot.
#Todas las instrucciones que queremos darle a GNUPLOT, las colocaremos siempre en un archivo aparte.
#Eso es un script.
#Enhanced, es para usar subindices o superindices, símbolos.
#t título
#_ Genera un guión al piso.
#Espacio entre el x (nombre de x) y los numeros que se encuentran en el eje x. Igual con el eje y. Igual que el key.
unset output
