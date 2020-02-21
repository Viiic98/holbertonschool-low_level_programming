#!/usr/bin/python3
""" Island parameter """


def island_perimeter(grid):
    n = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                n += 1
                if j + 1 < len(grid[i]):
                    if grid[i][j + 1]:
                        continue
                    elif i + 1 < len(grid):
                        if grid[i + 1][j]:
                            break
                        else:
                            if n > 1:
                                return (n * 2) + 2
                            else:
                                return 4
    if n > 1:
        return (n * 2) + 2
    else:
        return 4
