int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxSum=0;
    int tempSum=0;
    for(int i=0;i<accountsSize;i++)
    {
        tempSum=0;
        for(int j=0;j<*accountsColSize;j++)
        {
            tempSum+=accounts[i][j];
        }
        if(maxSum<tempSum)
        {
            maxSum=tempSum;
        }
    }
    return maxSum;
}