#include <stdio.h>

int main() {
    int grid[8][8] = {0};  // Create an 8x8 grid to represent the houses

    // Input the number of choppers
    int numChoppers;
    printf("How many choppers to land? ");
    scanf("%d", &numChoppers);

    // Input the coordinates of each helicopter
    for (int i = 0; i < numChoppers; i++) {
        int x, y;
        printf("Enter the coordinates to land the chopper [x,y = 1-8](x y): " );
        scanf("%d %d", &x, &y);
        grid[x-1][y-1] = 1;  // Mark the house with a terrorist
    }

    int terroristsKilled = 0;

    // Count the number of terrorists killed
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] == 1) {
                terroristsKilled++;
            }
        }
    }

    printf("%d terrorists have been killed in total.\n", terroristsKilled);

    return 0;
}
