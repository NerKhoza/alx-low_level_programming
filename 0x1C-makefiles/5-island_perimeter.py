#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Parameters:
    - grid (List[List[int]]): A rectangular grid where 0 represents water and 1 represents land.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid dimensions (width and height) don’t exceed 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """

    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with assuming a cell has all four sides

                # Check adjacent cells and subtract for each land neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
