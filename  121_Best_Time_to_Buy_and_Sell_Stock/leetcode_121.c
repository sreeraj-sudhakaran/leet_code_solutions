int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;
    int cheapest=prices[0];
    int i=1;
    while(i<pricesSize)
    {
        if(prices[i]<cheapest)
        {
            cheapest=prices[i];
        }
        else
        {
            max_profit = ((prices[i] - cheapest)>max_profit)?(prices[i] - cheapest):max_profit;
        }
        i++;
    }
    return max_profit;
}