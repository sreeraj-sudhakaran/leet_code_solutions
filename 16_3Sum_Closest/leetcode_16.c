int threeSumClosest(int* nums, int numsSize, int target) {
    int closest;
    closest = nums[0] + nums[1] + nums[2];
    int min_diff;
    min_diff = (target>closest)?(target-closest):(closest-target);
    int temp = 0,temp_diff=0;
    for(int i=0;i<numsSize-2;i++)
    {
        for(int j=i+1;j<numsSize-1;j++)
        {
            for(int k=j+1; k<numsSize;k++)
            {
                temp = nums[i] + nums[j] + nums[k];
                temp_diff = (target>temp)?(target-temp):(temp-target);
                if(temp_diff<min_diff)
                {
                    closest = temp;
                    min_diff = temp_diff;
                }
            }
        }
    }
    return closest;
}