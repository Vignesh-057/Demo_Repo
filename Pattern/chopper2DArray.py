def compute_terrorists_killed(num_choppers):
    grid = [[0] * 8 for _ in range(8)]  # Create an 8x8 grid to represent the houses
    terrorists_killed = 0

    # Input the coordinates of each helicopter
    for i in range(num_choppers):
        x, y = map(int, input("Enter the coordinates to land the chopper [x,y = 1-8] #" + str(i+1) + " (x,y): ").split(","))
        grid[x-1][y-1] = 1  # Mark the position of the helicopter on the grid

    # Count the number of terrorists killed
    for i in range(8):
        row_killed = 0
        col_killed = 0
        for j in range(8):
            if grid[i][j] == 1:
                row_killed = 1
            if grid[j][i] == 1:
                col_killed = 1
        terrorists_killed += row_killed + col_killed

    return terrorists_killed

num_choppers = int(input("How many choppers to land? "))
terrorists_killed = compute_terrorists_killed(num_choppers)
print(terrorists_killed, "terrorists have been killed in total.")
