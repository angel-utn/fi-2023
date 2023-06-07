Algoritmo sin_titulo
	montoRecaudacion = 0
	maximaDonacion = 0
	cantDonaciones = 0
	Mientras montoRecaudacion < 550000 Hacer
		Escribir "Monto $: "
		Leer montoDonacion
		montoRecaudacion = montoRecaudacion + montoDonacion
		cantDonaciones = cantDonaciones + 1
		Si montoDonacion > maximaDonacion Entonces
			maximaDonacion = montoDonacion
		FinSi
	FinMientras
	Escribir "A)", montoRecaudacion
	Escribir "B)", cantDonaciones
	Escribir "C)", maximaDonacion
FinAlgoritmo
