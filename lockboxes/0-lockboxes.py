#!/usr/bin/python3
'''
primero creamos el arreglo y lo ponemos en True
luego recorro los boxes
recorro cada box y guardo los box abiertos en el retorno

'''


def canUnlockAll(boxes):

    res = [];

    for i in range(len(boxes)):
        res.append(False)

    res[0] = True;

    for x in range(len(boxes)):
        for y in boxes[x]:
            if res[x] is True:
                res[y] = True;

            if y > x :
                res[y] = True

    return all(res)

