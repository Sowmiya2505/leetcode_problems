int maximum69Number (int num) {
    char a[10];
    sprintf(a,"%d",num);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='6')
        {
            a[i]='9';
            break;
        }
    }
    return atoi(a);
}