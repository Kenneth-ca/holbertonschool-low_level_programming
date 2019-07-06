#!/usr/bin/python3
"""File that prints a grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                try:
                    if (grid[i + 1][j] is None):
                        perimeter += 1
                    else:
                        if (grid[i + 1][j] == 0):
                            perimeter += 1
                except:
                    pass
                try:
                    if (grid[i - 1][j] is None):
                        perimeter += 1
                    else:
                        if (grid[i - 1][j] == 0):
                            perimeter += 1
                except:
                    pass
                try:
                    if (grid[i][j + 1] is None):
                        perimeter += 1
                    else:
                        if (grid[i][j + 1] == 0):
                            perimeter += 1
                except:
                    pass
                try:
                    if (grid[i][j - 1] is None):
                        perimeter += 1
                    else:
                        if (grid[i][j - 1] == 0):
                            perimeter += 1
                except:
                    pass
    return perimeter
