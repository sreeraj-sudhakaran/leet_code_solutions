int missingNumber(int* nums, int numsSize) {
    int range_num=0;
    int array_index=0;
    do
    {
        if(array_index>=numsSize)
        {
            break;
        }
        if(nums[array_index]==range_num)
        {
            range_num += 1;
            array_index = 0;
        }
        else
        {
            array_index++;

        }
    }while(1);
    return range_num;
}