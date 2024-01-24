#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbours(grid, r, s):
    """Returns the number of water neighbours a cell has in a grid."""

    num = 0

    if r <= 0 or not grid[r - 1][s]:
        num += 1
    if s <= 0 or not grid[r][s - 1]:
        num += 1
    if s >= len(grid[r]) - 1 or not grid[r][s + 1]:
        num += 1
    if r >= len(grid) - 1 or not grid[r + 1][s]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for r in range(len(grid)):
        for s in range(len(grid[r])):
            if grid[r][s]:
                perimeter += num_water_neighbours(grid, r, s)

    return perimeter
