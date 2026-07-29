#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int val;
    int target_row = 3;
    int target_col = 3;
    
    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            scanf("%d", &val);
            if (val == 1) {
                int moves = abs(r - target_row) + abs(c - target_col);
                printf("%d
", moves);
                return 0;
            }
        }
    }
    
    return 0;
}