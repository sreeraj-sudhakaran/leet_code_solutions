char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int mid = lettersSize/2;
    int start=0;
    int found=0;
    char result = letters[0];
    while(mid!=0)
    {
        if((letters[start+mid]<target)||(letters[start+mid]==target))
        {
            start += mid;
            mid = mid/2;
            if(mid==0 && start+1<lettersSize)
            {
                start += 1;
                if(letters[start]>target)
                {
                    result = letters[start];
                    found=1;
                }
                if(start+1<lettersSize && found==0)
                {
                    start+=1;
                if(letters[start]>target)
                {
                    result = letters[start];
                }}
            }
        }
        else
        {
            result = letters[start+mid];
            mid = mid/2;
            if(mid==0)
            {
                if(letters[start]>target)
                {
                    result = letters[start];
                }
            }
        }
    }
    return result;
}