#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    
    Args:
        grid (list): list of integers where:
            0 : represents water zone
            1 : represents land zone 
    Return: perimeter of the island 
    """
    perimeter = 0
    row = len(grid)
    col = len(grid[0])
    
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if i == 0 or grid[r - 1][j] == 0:
                    perimeter += 1
                if i == row - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == col - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
  