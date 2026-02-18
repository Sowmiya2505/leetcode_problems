int subtractProductAndSum(int n) {
    int b=0;
    int temp=n;
    while(n!=0)
    {
        int a=n%10;
        b+=a;
        n=n/10;
    }
    int d=1;
    while(temp!=0)
    {
        int c=temp%10;
        d*=c;
        temp/=10;

    }
    return d-b;
}