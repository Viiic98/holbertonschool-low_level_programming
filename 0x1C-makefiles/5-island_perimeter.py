#!/usr/bin/python3
""" Island parameter """


def island_perimeter(grid):
    n = 0
    for i in range(len(grid)):
        j = 0
        for j in range(len(grid[i])):
            l = 0
            if grid[i][j]:
                if j + 1 < len(grid[i]):
                    if grid[i][j + 1] == 0:
                        l += 1
                if i - 1 >= 0:
                    if grid[i - 1][j] == 0:
                        l += 1
                if i + 1 < len(grid):
                    if grid[i + 1][j] == 0:
                        l += 1
                if j - 1 >= 0:
                    if grid[i][j - 1] == 0:
                        l += 1
                if l == 4:
                    return 4
                else:
                    n += l
    return n
