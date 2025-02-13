int fib(int n){
    int prev_num=0;
    int comb_num=1;
    int temp=0;
    if(n>1)
    {
        for(int i=0;i<n-1;i++)
        {
            temp = prev_num;
            prev_num = comb_num;
            comb_num += temp;
        }
    }
    else if(n==0)
    {
        return 0;
    }
    return comb_num;
}