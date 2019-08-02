#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    N = int(input())

    gmailName = []

    for N_itr in range(N):
        firstNameEmailID = input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]

        gmail = re.search('@gmail\.com', emailID, re.IGNORECASE)

        if gmail:
            gmailName.append(firstName)

    gmailName.sort()

    print("\n".join(gmailName))
