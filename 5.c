#include <stdio.h>

int main() {
    int num = 20;
    while (1) {
        int i;
        for (i = 1; i < 20; i++){
            if ((num % i) != 0) break;
        }
        if (i==20) {
            printf("%d\n", num);
            break;
        }

        num += 20;
    }
}
