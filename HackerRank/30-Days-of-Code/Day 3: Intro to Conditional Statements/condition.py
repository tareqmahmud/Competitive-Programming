#!/bin/python3

import math
import os
import random
import re
import sys

"""
    If N is odd, print Weird
    If N is even and in the inclusive range of 2 to 5, print Not Weird
    If N is even and in the inclusive range of 6 to 20, print Weird
    If N is even and greater than , print Not Weird
"""

if __name__ == '__main__':
    N = int(input())

    if N % 2 != 0 or (N % 2 == 0 and 6 <= N <= 20):
        print("Weird")
    elif (N % 2 == 0 and 2 <= N <= 5) or N > 20:
        print("Not Weird")
