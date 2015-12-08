#!/usr/bin/env python3

'''
Un alumno desea saber cuál será su calificación final en la materia de
Cálculo. Dicha calificación se compone de los siguientes porcentajes:

 60% del promedio de sus dos calificaciones parciales.
 30% de la calificación del examen final. 
 10% de la calificación de un trabajo práctico.

Ingresar las 2 notas de parciales, la del examen final y la del trabajo
práctico. Calcular e imprimir la calificación final de Cálculo.
Validar que cada nota ingresada pueda ser de 0 a 100
'''

def porcentaje(porciento, numero):
	return porciento * numero / 100.0

def promedio(lista):
	return sum(lista) / len(lista)

def ingresar(mensaje):
	numero = -1
	while numero == -1:
		dato = input(mensaje)
		if dato.isdigit() and 0 <= int(dato) <= 100:
			numero = int(dato)
	return numero

def main():
	P1 = ingresar("Parcial 1:")
	P2 = ingresar("Parcial 2:")
	EF = ingresar("Examen Final:")
	TP = ingresar("Trabajo Practico:")

	parciales = [P1, P2]

	calificacion = porcentaje(60, promedio(parciales)) + porcentaje(30, EF) + porcentaje(10, TP)

	print("Calificacion:", calificacion)

if __name__ == '__main__':
	main()
