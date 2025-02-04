#!/usr/bin/python3
'''
primero creamos el arreglo y lo ponemos en True
luego recorro los boxes
recorro cada box y guardo los box abiertos en el retorno

'''


def canUnlockAll(boxes):

    if len(boxes) == 0:
        return False

    keys = [0]
    for key in keys:
        for new_key in boxes[key]:
            if new_key not in keys:
                keys.append(new_key)

    if len(keys) == len(boxes):
        return True
    return False

