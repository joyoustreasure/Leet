int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];
    int cur = 0;
    for(int i=0;i<pricesSize;i++){
        if (min>prices[i])min = prices[i];
        if ((prices[i]-min)>cur) cur= prices[i]-min;
    }
    return cur;
}
