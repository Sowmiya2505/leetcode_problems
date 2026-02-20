int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0)
    return 0;
    int min=prices[0];
    int max=0;
    int a;
    for(int i=0;i<pricesSize;i++)
    {
        if(min>prices[i])
        {
            min=prices[i];
        }
        else
        {
            a=prices[i]-min;
            if(a>max)
            max=a;
        }

    }
    return max;
}