#include <stdio.h>

int main() {
    unsigned long straight_sum = (100 + 1) * 50;
    printf("%lu - ", straight_sum * straight_sum);
    unsigned long square_sum = 0;
    for (int i = 1; i < 101; i++) {
        square_sum += i*i;
    }
    printf("%lu = %lu\n", square_sum, straight_sum * straight_sum - square_sum);
    return 0;
}
