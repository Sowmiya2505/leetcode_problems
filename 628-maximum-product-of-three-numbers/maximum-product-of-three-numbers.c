int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int maximumProduct(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);

    int n = numsSize;

    int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];

    int product2 = nums[0] * nums[1] * nums[n - 1];

    return product1 > product2 ? product1 : product2;
}