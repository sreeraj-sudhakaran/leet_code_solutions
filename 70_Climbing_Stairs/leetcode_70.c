int climbStairs(int n) {
    int comb_num=1;
    int comb_prev=1;
    int temp=0;
    if(n>1)
    {
        for(int i=0;i<n-1;i++)
        {
            temp = comb_prev;
            comb_prev = comb_num;
            comb_num += temp;
        }
    }
    return comb_num;
}