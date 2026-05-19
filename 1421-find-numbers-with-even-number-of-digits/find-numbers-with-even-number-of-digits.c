int findNumbers(int* nums, int numsSize)
 {
    int i,b,count,d=0;
    for(int i=0;i<numsSize;i++)
    {
        count=0;
    while(nums[i]!=0)
    {
        b=nums[i]%10;
        count++;
        nums[i]/=10;
    }
    if(count%2==0)
    {
     d++;   
    }
    }
    return d;
    
    
}