bool isValid(char* s)
{
    char stack[50000];
    int top=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
    if(ch=='{'||ch=='['||ch=='(')
    {
        stack[++top]=ch;
    }
    else if(ch=='}'||ch==']'||ch==')')
    {
        if(top==-1)
        return false;
        char open=stack[top--];
    if((ch==')'&&open!='(')||(ch=='}'&&open!='{')||(ch==']'&&open!='['))
        {
            return false;
        }
    }

    }
    if(top==-1)
    return true;
    else
    return false;
}