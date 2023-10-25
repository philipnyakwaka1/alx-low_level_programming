#!/usr/bin/python3
"""Module to calculate perimeter"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.
    """
    perimeter = 0

    for row in range(0, len(grid)):
        for col in range(0, len(grid[0])):
            if grid[row][col] == 1:
                perimeter = perimeter + 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter = perimeter - 2
                elif col > 0 and grid[row][col - 1] == 1:
                    perimeter = perimeter - 2

    return perimeter
