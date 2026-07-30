#include <stdio.h>
#include <ctype.h>
 
int main(void) {
    char s1[101], s2[101];
    scanf("%100s", s1);
    scanf("%100s", s2);
 
    for (int i = 0; s1[i] != '\0'; i++) {
        char c1 = tolower((unsigned char)s1[i]);
        char c2 = tolower((unsigned char)s2[i]);
 
        if (c1 < c2) {
            printf("-1
");
            return 0;
        } else if (c1 > c2) {
            printf("1
");
            return 0;
        }
    }
 
    printf("0
");
    return 0;
}