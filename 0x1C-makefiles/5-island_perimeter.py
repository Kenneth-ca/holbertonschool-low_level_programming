#!/usr/bin/python3
"""File that prints a grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described"""

    perimeter = 0
    for i in range(len(grid)):
        only = 0
        for j in range(len(grid[i])):
            clear = 0
            perimeter += 4
            if (grid[i][j] == 1):
                only = 1
                try:
                    if (grid[i + 1][j] == 1):
                        perimeter -= 1
                        clear += 1
                        only += 1
                except:
                    return 0
                try:
                    if (grid[i - 1][j] == 1):
                        perimeter -= 1
                        clear += 1
                        only += 1
                except:
                    return 0
                try:
                    if (grid[i][j + 1] == 1):
                        perimeter -= 1
                        clear += 1
                        only += 1
                except:
                    return 0
                try:
                    if (grid[i][j - 1] == 1):
                        perimeter -= 1
                        clear += 1
                        only += 1
                except:
                    return 0
            if (clear == 0):
                perimeter -= 4
        if (only == 1):
            return 4
    return perimeter
