#include <stdio.h>
 
int main(void) {
    int m, n;
    if (scanf("%d %d", &m, &n) == 2) {
        printf("%d
", (m * n) >> 1);
    }
    return 0;
}