int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0)
    return 0;
    int min=prices[0],max=0,a;
    for(int i=0;i<pricesSize;i++)
    {
        if(min>prices[i])
            min=prices[i];
        else
        {
            a=prices[i]-min;
            if(a>max)
            max=a;
        }
    }
    return max;
}