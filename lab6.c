#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    char str[100];

    scanf("%s", str);

    char *p = strchr(str, '-');
    *p = '\0';

    strcpy(a, str);
    strcpy(b, p + 1);

    p = strchr(a, '.');
    if (p) {
        memmove(p, p + 1, strlen(p));
    }

    p = strchr(b, '.');
    if (p) {
        memmove(p, p + 1, strlen(p));
    }

    long long x = 0, y = 0;

    for (int i = 0; a[i] != '\0'; i++) {
        x = x * 10 + (a[i] - '0');
    }

    for (int i = 0; b[i] != '\0'; i++) {
        y = y * 10 + (b[i] - '0');
    }

    long long result = x - y;

    if (result < 0) {
        printf("-");
        result = -result;
    }

    long long whole = result / 10000;
    long long fraction = result % 10000;

    printf("%lld", whole);

    if (fraction != 0) {
        char frac[5];

        sprintf(frac, "%04lld", fraction);

        int len = 4;

        while (len > 0 && frac[len - 1] == '0') {
            len--;
        }

        printf(".");

        for (int i = 0; i < len; i++) {
            printf("%c", frac[i]);
        }
    }

    printf("\n");

    return 0;
}
