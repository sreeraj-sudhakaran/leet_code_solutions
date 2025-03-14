int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int numCount=0;
    int longVal=0;
    for(int i=0;i<numsSize; i++)
    {
       if(nums[i]==1)
       {
           numCount++;
       }
       else
       {
           longVal = (longVal<numCount)?numCount:longVal;
           numCount=0;
       }
    }
    longVal = (longVal<numCount)?numCount:longVal;
    numCount=0;
    return longVal;   
   }