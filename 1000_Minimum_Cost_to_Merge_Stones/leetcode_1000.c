int mergeStones(int* stones, int stonesSize, int k) {
    int start_loc = -1;
    int temp_size = 0;
    int temp_k = -1;
    int temp_min_cost = -1, min_cost=0 , sum_val=0;
    while(stonesSize>=k)
    {
        int cur_cost=0;
        temp_size=stonesSize;
        start_loc = -1;
        temp_min_cost = -1;
        printf("\nstonesSize(%d)",stonesSize);
        for(int i=0;i+k<=stonesSize;i++)
        {
            printf("--i(%d)",i);
            cur_cost=0;
            for(int j=0;j<k;j++)
            {
                cur_cost = cur_cost + stones[i+j];
            }

            if(cur_cost<temp_min_cost || temp_min_cost==-1)
            {
                start_loc = i;
                temp_min_cost = cur_cost;
            }
 
        }

        for(int i=0;i<stonesSize;i++)
        {
            printf("%d",stones[i]);
        }
        printf("(%d)\n",start_loc);
        if(start_loc!=-1)
        {
            sum_val = stones[start_loc];
            temp_k=k-1;
            for(int i=start_loc+1, j=start_loc+1;i<stonesSize;i++)
            {
                if(temp_k!=0)
                {
                    sum_val += stones[i];
                    temp_k -= 1;
                    stones[start_loc]=sum_val;
                }
                else
                {   
                    printf("--%d[%d]>>%d[%d]\n",stones[j],j,stones[i],i);
                    stones[j]=stones[i];
                    j++;
                }
            }
            min_cost+=sum_val;
            stonesSize -= k-1;
        }
        else
        {
            printf("breaked--------?");
            break;
        }
    }
    for(int i=0;i<stonesSize;i++)
    {
        printf("%d",stones[i]);
    }
    if(stonesSize==1)
    {
        return min_cost;
    }
    return -1;
}