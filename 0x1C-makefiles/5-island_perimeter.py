#!/usr/bin/python3
"""5. Island Perimeter"""


def count_sides(grid, i, j):
    """Counts the sides of a portion of the island.
    If the near square isn't land, counts more one side for the main square
    Args:
        grid: the map of a island
        i: vertical axis
        j: horizontal axis"""
    sides = 0
    di = {'0': (i - 1, j), '1': (i + 1, j), '2': (i, j - 1), '3': (i, j + 1)}
    for i in range(4):
        x, y = di[str(i)]
        try:
            if grid[x][y] == 0:
                sides += 1
        except IndexError:
            sides += 1
    return sides


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
    Args:
    grid: the map of a island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += count_sides(grid, i, j)
    return perimeter
