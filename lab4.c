#include <stdio.h>

int f(int b) {
    if (b % 2 == 0)
        return 1;
    else
        return -1;
}


int main(void) {
    int i = 2,  n = 1, sum = 0;

    scanf("%d", &n);

    while (n != 0) {
        sum += f(i) * n;

        i++;
        scanf("%d", &n);
    }

    printf("%d", sum);


    return 0;
}
