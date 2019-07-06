#!/usr/bin/python3
"""File that prints a grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            clear = 0
            perimeter += 4
            if (grid[i][j] == 1):
                if (grid[i + 1][j] == 1):
                    perimeter -= 1
                    clear += 1
                if (grid[i - 1][j] == 1):
                    perimeter -= 1
                    clear += 1
                if (grid[i][j + 1] == 1):
                    perimeter -= 1
                    clear += 1
                if (grid[i][j - 1] == 1):
                    perimeter -= 1
                    clear += 1
            if (clear == 0):
                perimeter -= 4
    return perimeter