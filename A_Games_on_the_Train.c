#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n,x;  
        scanf("%d", &n);
        int min = 100, max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }
        printf("%d\n", max - min+1);
    }

    return 0;
}
