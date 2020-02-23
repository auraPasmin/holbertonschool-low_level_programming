#!/usr/bin/python3
"""island_perimeter"""


def island_perimeter(grid):
	par = 0
	numrows = len(grid)
	numcols = len(grid[0])
	y = -1
	for row in grid:
	    y += 1
	    x = -1
	    for element in row:
	        x += 1
	        if element == 1:
	            if x == 0 or grid[y][x - 1] != 1:
	                par += 1
	            if x == numcols - 1 or grid[y][x + 1] != 1:
	                par += 1
	            if y == 0 or grid[y - 1][x] != 1:
	                par += 1
	            if y == numrows - 1 or grid[y + 1][x] != 1:
	                par += 1
	return (par)
