#include <stdio.h>
#include <string.h>


int f(int* nums, int x, int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (nums[i] == x)
            return 0;
    }

    return 1;
}


int main(void) {
    int n, b, i = 0, res = 0, l = 1;
    scanf("%d", &n);
    int nums[10000];
    int nums2[10000];

    while (i < n) {
        scanf("%d", &b);
        nums[i] = b;
        i++;
    }

    nums2[0] = nums[0];

    for(i = 1; i < n; i++) {
        int r = f(nums2, nums[i], l);

        if (r) {
            nums2[l] = nums[i];
            l += 1;
        }
    }


    printf("%d\n", l);





}
