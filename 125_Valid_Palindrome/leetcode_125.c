
bool isPalindrome(char* s) {
    int k=0;
    for(k=0;s[k]!='\0';)
    {
        k++;
    }
    for(int i=0;i<=k;)
    {
        if(((s[i]<'a')||(s[i]>'z'))&&((s[i]<'A')||(s[i]>'Z'))&&((s[i]<'0')||(s[i]>'9')))
        {
            i++;
        }
        else if(((s[k]<'a')||(s[k]>'z'))&&((s[k]<'A')||(s[k]>'Z'))&&((s[k]<'0')||(s[k]>'9')))
        {
            k--;
        }
        else
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]=s[i]-32;
            }
            if(s[k]>='a'&&s[k]<='z')
            {
                s[k]=s[k]-32;
            }
            if(s[i]==s[k])
            {
                i++;
                k--;
            }
            else
            {

                return false;
            }
        }
    }
    return true;
}