#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    borders = 0
    perimeter = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                perimeter += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    borders += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    borders += 1
    return perimeter * 4 - borders * 2
