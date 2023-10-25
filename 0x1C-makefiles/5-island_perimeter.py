#!/usr/bin/python3
"""Module to calculate perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.
    """
    perimeter = 0
    row = 0

    while row < len(grid):
        col = 0
        while col < len(grid[0]):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2
            col += 1
        row += 1

    return perimeter
