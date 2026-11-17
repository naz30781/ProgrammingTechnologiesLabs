#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    long long temp = n;
    int digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    if (digits <= 1 || digits % 2 != 0) {
        printf("0\n");
        return 0;
    }

    int s1 = 0, s2 = 0;
    int half = digits / 2;

    for (int i = 0; i < half; i++) {
        s1 += n % 10;
        n /= 10;
    }

    for (int i = 0; i < half; i++) {
        s2 += n % 10;
        n /= 10;
    }

    printf("%d\n", s1 == s2);

    return 0;
}
