Algoritmo sin_titulo
	Escribir "Ingrese nombre del articulo:"
	Leer nombre
	Escribir "Ingrese cantidad:"
	Leer cantidad
	Escribir "Ingrese precio:"
	Leer precio
	total = cantidad * precio
	Escribir "Articulo: ", nombre
	Escribir "Total a pagar: $", total
	Escribir "Ingrese valor pagado: $"
	Leer abonaCon
	vuelto = abonaCon - total
	Si vuelto >= 0 Entonces
		Escribir "Su vuelto es: $", vuelto
	SiNo
		Escribir "Falta $", (vuelto * (-1))
	FinSi
FinAlgoritmo
