#!/usr/bin/python3
"""
island perimeter
"""

def island_perimeter(grid):
    """
    return 0 if not grid
    start by assumming grid has full perimeter
    remove shared edges
    """

    if not grid or not grid[0]:
        return 0

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
