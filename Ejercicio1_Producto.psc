Algoritmo BuscarProducto
	Definir productos Como Cadena
	Definir precios Como Entero
	Definir buscar, nombre Como Cadena
	Definir i Como Entero
	Dimensionar productos(5)
	Dimensionar precios(5)
	productos[1] <- 'Pan'
	productos[2] <- 'Vino'
	productos[3] <- 'Queso'
	productos[4] <- 'Carne'
	productos[5] <- 'Huevos'
	precios[1] <- 1
	precios[2] <- 8
	precios[3] <- 4
	precios[4] <- 6
	precios[5] <- 5
	Escribir 'Ingrese el nombre del producto: '
	Leer buscar
	nombre <- ''
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Si productos[i]=buscar Entonces
			nombre <- productos[i]
			Escribir 'El precio es: ', precios[i]
		FinSi
	FinPara
	Si nombre<>buscar Entonces
		Escribir 'Producto no encontrado.'
	FinSi
FinAlgoritmo
