#include <stdio.h>
 
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int implemented_count = 0;
    
    while (n--) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);
        
        if (petya + vasya + tonya >= 2) {
            implemented_count++;
        }
    }
    
    printf("%d
", implemented_count);
    return 0;
}