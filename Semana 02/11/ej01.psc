Algoritmo sin_titulo
	Escribir "Ingrese nombre: "
	Leer articulo
	Escribir "Ingrese el precio unitario: "
	Leer precio_unitario
	Escribir "Cantidad vendida: "
	Leer cantidad
	precio_total = precio_unitario * cantidad
	Escribir "Valor a pagar: $", precio_total
	Escribir "Abona con: "
	Leer abonaCon
	vuelto = abonaCon - precio_total
	Si vuelto >= 0 Entonces
		Escribir "Vuelto :", vuelto
	SiNo
		Escribir "Falta plata"
	FinSi
FinAlgoritmo
