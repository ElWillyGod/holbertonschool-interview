#!/usr/bin/python3
'''
vamos agregando las llaves que vamos encontrando en una lista
y si al final la longitud de la lista es igual a la longitud de las cajas entonces regresamos True
tener en cuenta que las llaves pueden ser mayores a la longitud de las cajas
'''


def canUnlockAll(boxes):

    if len(boxes) == 0:
        return False

    results = [0]
    for res in results:
        for box in boxes[res]:
            if box < len(boxes) and box not in results:
                results.append(box)

    if len(results) == len(boxes):
        return True
    return False
