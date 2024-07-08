		#Grafica en 3d
		#Enhanced, es para usar subindices o superindices, símbolos.
		#Antes de comenzar, colocar/limpiar nuestro espacio. Reset elimina la información en el buffer.
		#--------------------Empieza la línea de código----------------
reset

set terminal pngcairo font "Times New Roman,12" enhanced color size 900,600

set output "Grafica_multiplot.png"

set multiplot title "Graficas :D"
	#------------Primer grafica  (inf-izq)-----------------
set origin 0,0    #Ubicación del panel
set size 0.5,0.5  #Tamaño de la gráfica ene el pánel.
set pm3d
		#set view map 		#Density plot, ver la gráfica desde arrriba

		#Panal de huevos.
set xlabel "eje x"  offset 0,-0.5 #Nombres de los ejes, alejamos el eje x
set ylabel "eje y"
set xrange[-10:10]
set yrange[-10:10]
		#Funciones
f(x,y)=cos(x)*sin(y)
set isosample 500    #Número de líneas a pintar en la gráfica.
set ztics 0.5  		#Cada cuanto pinto los números en mi eje.
set cbtics 0.5 		#color box, también tiene rango y escala.
		#Espacio de las letras de los números del eje z
		#Lo anterior organiza la vista.
		#isosample es una grilla, cantidad de línea, 50 líneas por variable inde.
unset surface     
splot f(x,y) t" "  #Pinte la función, con título vacío

		#Pareja pm3d, para pintarlo, aparecen colores y la escala.
		#Unset surface, para quitar la malla
		#x al cuadrado
#-------------Segunda gráfica(inf-der) -------------
reset
set origin 0.5,0
set size 0.5,0.5  #Tamaño de la gráfica ene el pánel.
set pm3d
set view map 		#Density plot, ver la gráfica desde arrriba

		#Panal de huevos.
set xlabel "eje x"  #Nombres de los ejes, alejamos el eje x
set label "Hola" at -4,5 front
set ylabel "eje y"
set xrange[-10:10]
set yrange[-10:10]
		#Funciones
f(x,y)=cos(x)*sin(y)
set isosample 500    #Número de líneas a pintar en la gráfica.
set ztics 0.5  		#Cada cuanto pinto los números en mi eje.
set cbtics 0.5 		#color box, también tiene rango y escala.
		#Espacio de las letras de los números del eje z
		#Lo anterior organiza la vista.
		#isosample es una grilla, cantidad de línea, 50 líneas por variable inde.
unset surface     
splot f(x,y) t" "  #Pinte la función, con título vacío

		#Pareja pm3d, para pintarlo, aparecen colores y la escala.
		#Unset surface, para quitar la malla
		#x al cuadrado
reset
#-------------Tercera gráfica(sup-izq) -------------
set origin 0,0.5
set size 0.5,0.5  
set pm3d at bs
#set view map 		
set xlabel "eje x"  
set ylabel "eje y"
set xrange[-10:10]
set yrange[-10:10]
f(x,y)=cos(x)*sin(y)
set isosample 500    
set ztics 0.5  		
set cbtics 0.5 		
unset surface     
splot f(x,y) t" "  
reset
#-------------Cuarta gráfica(sup-der) -------------
set origin 0.5,0.5
set size 0.5,0.5  
set isosample 100
set xlabel "eje x"
set xtics ("{/Symbol p}" pi,"{/Symbol -p}" -pi)
set ylabel "eje y"
set hidden3d
set ztics 0.5
unset key
splot f(x,y) t" "  



unset multiplot
unset output
