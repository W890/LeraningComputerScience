#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FAILED -1

int search(int s[], int key, int low, int high)
{
    int mid;
    if (low > high)
        return -1;
    mid = low + (high - low) / 2;
    if (s[mid] == key) return mid;
    else if (s[mid] > key)
        return search(s, key, low, mid - 1);
    else
        return search(s, key, mid + 1, high);
}

int main()
{
    int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int target;
    int idx;

    printf("要查找的值：");
    scanf("%d", &target);

    if ((idx = search(nums, target, 0, 9)) == FAILED)
        printf("-1");
    else
        printf("要查找的%d对应的下标是[%d]", target, nums[idx - 1]);

    return 0;
}
