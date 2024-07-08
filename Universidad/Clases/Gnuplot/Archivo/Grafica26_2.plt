#Grafica en 3d
#Todas las instrucciones que queremos darle a GNUPLOT, las colocaremos siempre en un archivo aparte.
#Eso es un script.
#Enhanced, es para usar subindices o superindices, símbolos.
#Antes de comenzar, colocar/limpiar nuestro espacio. Reset elimina la información en el buffer.
#--------------------Empieza la línea de código----------------
reset

set terminal pngcairo font "Times,26" enhanced color size 900,600

set output "Grafica26_2Nov_3D.png"
set pm3d
set view map
#forma de vista de mapa

#Panal de huevos.
set xlabel "eje x"
set ylabel "eje y"
set xrange[-10:10]
set yrange[-10:10]

f(x,y)=cos(x)*sin(y)
set isosample 500
set ztics 0.5
set cbtics 0.5
#Espacio de las letras de los números del eje z
#Lo anterior organiza la vista.
#isosample es una grilla, cantidad de línea, 50 líneas por variable inde.
unset surface
splot f(x,y) t" "

#Pareja pm3d, para pintarlo, aparecen colores y la escala.
#Unset surface, para quitar la malla
#x al cuadrado
unset output
