#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double decToInt(char*);

double decToInt(char * word) {
    int len = strlen(word);
    double dec = 0;
    int i;
    for (i=0; i<len; i++) {
        dec = dec * 10 + ( word[i] - '0');
    }
    return dec;
}

int main(int argc, char **argv) {
    //printf("Please insert a number to factor: ");
    //char input[64];
    //scanf("%s", input);

    double number = decToInt(argv[1]);
    double n = number;
    double lpf = 1;

    if (fmod(n,2)==0) {
        lpf = 2;
        while (fmod(n,2)==0) {
            n /= 2;
        }
    }

    if (fmod(n,3)==0) {
        lpf = 3;
        while (fmod(n,3)==0) {
            n /= 3;
        }
    }

    double mo6 = 6;
    while (mo6-1 <= n) {
        if (fmod(n,(mo6-1))==0) {
            lpf = mo6-1;
            while (fmod(n,lpf)==0) {
                n /= lpf;
            }
        }
        if (fmod(n,(mo6+1))==0) {
            lpf = mo6+1;
            while (fmod(n,lpf)==0) {
                n /= lpf;
            }
        }
        mo6 += 6;
    }
    printf("%.0lf\n", lpf);
    return 0;
}
