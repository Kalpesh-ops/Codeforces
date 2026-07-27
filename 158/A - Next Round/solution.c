#include <stdio.h>
 
int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
 
    int count = 0;
    int k_score = 0;
    int score;
 
    for (int i = 1; i <= n; i++) {
        scanf("%d", &score);
 
        if (score <= 0) {
            break;
        }
 
        if (i == k) {
            k_score = score;
        }
 
        if (i <= k) {
            count++;
        } 
        else if (score == k_score) {
            count++;
        } 
        else {
            break;
        }
    }
 
    printf("%d
", count);
    return 0;
}