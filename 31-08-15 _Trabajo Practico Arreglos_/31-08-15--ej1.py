#!/usr/bin/env python3

'''
Encontrar los cinco elementos de mayor valor de un vector de 100 elementos
diferentes.

Cada elemento debe leerse desde el teclado debiéndose controlar que no se
introduzca un elemento cuyo valor ya exista dentro del arreglo.

Además debe imprimir en qué posición fueron leídos estos cinco elementos.
'''

limite = 10 # Cantidad límite de elementos, para probar antes de poner 100.


def ingresar(mensaje):

    '''Retorna un número entero introducido por teclado.'''

    numero = -1 # Para que ingrese al ciclo "while".

    while numero == -1:

        dato = input(mensaje)

        if dato.isdigit():
            numero = int(dato)

    return numero


def main():

    '''Función principal.'''

    vector = {} # Diccionario { valor: posicion }

    for posicion in range(limite):

        while True:

            valor = ingresar("Valor {0}: ".format(posicion+1))

            if valor not in vector.keys():
                vector[valor] = posicion+1 # Agrega un elemento al diccionario.
                break # Sale del ciclo "while".

    valores = list(vector.keys()) # Genera una lista con valores del vector.
    valores.sort(reverse=True) # Ordena los valores, de mayor a menor.

    print("\nLos 5 mayores:\n")

    for valor in valores[:5]: # Recorre los primeros 5 elementos de la lista.
        print("Val: {0}, Pos: {1}".format(valor, vector[valor]))


if __name__ == '__main__':

    main()
