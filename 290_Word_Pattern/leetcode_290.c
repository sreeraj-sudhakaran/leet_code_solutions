bool wordPattern(char* pattern, char* s) {
    int len = strlen(s);
    char subpattern[26][3000];
    char subset[3000];
    int j=0,k=0;
    for(int i=0;i<26;i++)
    {
        subpattern[i][0]='\0';
    }
    for(int i=0;i<len;i++)  
    {
        if(s[i]==' ')
        {
            subset[j]='\0';
            j=0;
            if(k>strlen(pattern)-1)
            {
                return false;
            }
            if(subpattern[(int)(pattern[k]-97)][0]=='\0')
            {
                strcpy(subpattern[(int)(pattern[k]-97)],subset);
            }
            else
            {
                if(strcmp(subpattern[(int)(pattern[k]-97)],subset))
                {
                    return false;
                }
            }
            k++;
        }
        else
        {
            subset[j]=s[i];
            j++;
        }
    }  
    subset[j]='\0';
    j=0;


    if(k!=strlen(pattern)-1)
    {
        return false;
    }
    if(subpattern[(int)(pattern[k]-97)][0]=='\0')
    {
        strcpy(subpattern[(int)(pattern[k]-97)],subset);
        
    }
    else
    {
        if(strcmp(subpattern[(int)(pattern[k]-97)],subset))
        {
            return false;
        }
    }
    for(int i=0;i<25;i++)
    {
        for(int m=i+1;m<26;m++)
        {
            if(!strcmp(subpattern[i],subpattern[m])&&subpattern[i][0]!='\0'&&subpattern[m][0]!='\0')
            {
                return false;
            }
        }
    }
    return true;
}