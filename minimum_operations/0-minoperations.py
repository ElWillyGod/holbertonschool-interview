#!/usr/bin/python3

"""
Minimum Operations

"""


def minOperations(n):
    """
    Function that calculates the fewest number of operations needed
    """

    if n <= 1:
        return 0

    for i in range(2, n + 1):
        if n % i == 0:
            return i + minOperations(n // i)
