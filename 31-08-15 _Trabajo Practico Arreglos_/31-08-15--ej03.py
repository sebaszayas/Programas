#!/usr/bin/env python3

'''
Leer una serie de números enteros positivos. Imprimir los números que conforman
la secuencia de números pares contiguos más larga.

Si existen dos secuencias de la misma longitud tener en cuenta aquella donde la
suma de los elementos de la serie sea la mayor (se sabe que la suma siempre es
diferente).
'''

serie = [ 13, 9, 4, 1, 22, 34, 12, 55, 31, 6, 98, 7, 64, 14, 24, 11, 44 ]

secuencias = []


def espar(numero):

    '''Retorna verdadero si el resto del número dividido por 2 da 0.'''

    return numero % 2 == 0 # Si da cero, el número es par.


def main():

    '''Función principal.'''

    secuencia = []
    secuencia_pares = False # Bandera, indica si hay secuencia de pares.

    while serie:
        numero = serie.pop(0) # Extrae primer elemento de la lista.
        if espar(numero):
            if secuencia_pares:
                secuencia.append(numero)
            else:
                if len(secuencia) > 1:
                    secuencias.append(secuencia)
                secuencia = [numero]
                secuencia_pares = True
        else:
            secuencia_pares = False

    for secuencia in secuencias:
        print(secuencia, '=', sum(secuencia))

    # Ordena la lista por longitud, de mayor a menor.
    secuencias.sort(key=len, reverse=True)

    if secuencias:
        maslarga = len(secuencias[0])
        if len(secuencias) > 1 and len(secuencias[1]) == maslarga:
            if sum(secuencias[1]) > sum(secuencias[0]):
                print(secuencias[1])
            else:
                print(secuencias[0])
        else:
            print(secuencias[0])


if __name__ == '__main__':

    main()
