#Esto es un comentario en GNUPlot
#Tenemos que decirle que tipo de grafica vamos a realizar (png,jpg, etc), set significa use
set terminal pngcairo #El tipo de gráfico
set output "grafica_16Nov.png" #Nobmre de la gráfica

#Instrucciones de la gráfica
set xlabel "Eje horizontal"
set ylabel "Eje vertical"

#para pintar se usa el comando plot
plot cos(x)


unset output   #Cerrar archivo
