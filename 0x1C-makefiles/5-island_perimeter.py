#!/usr/bin/python3

"""Island Perimeter"""


def island_perimeter(grid):
    """Return the perimeter of combined islands in a grid"""
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                sum = 4
                if grid[i-1][j] == 1:
                    sum -= 1
                if grid[i+1][j] == 1:
                    sum -= 1
                if grid[i][j-1] == 1:
                    sum -= 1
                if grid[i][j+1] == 1:
                    sum -= 1
                perimeter += sum
    return (perimeter)
