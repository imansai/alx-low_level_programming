#!/usr/bin/python3
"""Defines function to measure the perimeter of an island."""


def island_perimeter(grid):
    """Return the island's perimeter.

    The grid uses 0 for water and 1 for land.

    Args:
        grid (list): List of lists of integers representing the island.
    Returns:
        Island's perimeter as defined in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
