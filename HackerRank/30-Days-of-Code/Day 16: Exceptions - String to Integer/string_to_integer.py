#!/bin/python3

import sys

S = input().strip()

try:
    string_to_integer = int(S)
    print(string_to_integer)
except ValueError:
    print("Bad String")
