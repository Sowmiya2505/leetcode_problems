int maxSubArray(int* nums, int numsSize) {
    int csum=0;
    int maxsum=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        csum+=nums[i];
        if(csum>maxsum)
        {
            maxsum=csum;
        }
        if(csum<0)
        {
            csum=0;
        }
    }
    return maxsum;
    
}