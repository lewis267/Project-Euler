#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int ispal(int x) {
    int right = 0;
    int left = 0;

    while (x > pow(10,left)) left++;
    left--;
    while(right <= left)
    {
        int a = x;
        int b = x;

        int i = right;
        while (i--) a/=10;
        a=a%10;

        i = left;
        while (i--) b/=10;
        b=b%10;

        if (a!=b) return 0;
        else {
            left--;
            right++;
        }
    }
    return 1;
}

int main() {
    int a = 999;
    int b = 999;
    int largest = 0;

    while (a > 99) {
        while (b > 99) {
            if (ispal(a*b)) {
                largest = (largest < a*b) ? a*b : largest;
            }
            b--;
        }
        b=999;
        a--;
    }
    printf("%d\n",largest);
    return 0;
}
