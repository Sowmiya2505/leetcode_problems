/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        int count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            {
                count++;
            }
        }
        arr[i]=count;
    
    }
    *returnSize = numsSize;
    return arr;
}