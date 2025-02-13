#include <string.h>

char* reverseVowels(char* s) {
    int j=strlen(s);
    int i=0;
    char temp_c;
    while(i<=j||j>=i)
    {

        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
        {
            i++;
        }
        else
        {
            if((s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'&&s[j]!='A'&&s[j]!='E'&&s[j]!='I'&&s[j]!='O'&&s[j]!='U'))
            {
                j--;
            }
            else
            {
                 temp_c=s[i];
                s[i]=s[j];
                s[j]=temp_c;
                i++;
                j--;
            }
        }
    }
    return s;
}