#!/usr/bin/python3
/* eslint-disable no-tabs, indent */
"""
0-rain
"""

def rain(walls):

    """
    Args:
        walls (list): list of non-negative integers representing the height of walls

    Returns:
        int: the amount of rainwater trapped
    """

    a = len(walls)
    total = 0

    for i in range(1, a - 1):
        
        left = walls[i]

        for j in range(i):
            left = max (left, walls[j])
        right = walls[i]

        for k in range(i + 1, a):
            right = max (right, walls[k])

        total += min(left, right) - walls[i]

    return total
/* eslint-enable no-tabs, indent */
