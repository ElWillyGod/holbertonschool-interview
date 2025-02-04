#!/usr/bin/python3
'''
primero creamos el arreglo y lo ponemos en True
luego recorro los boxes
recorro cada box y guardo los box abiertos en el retorno

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
