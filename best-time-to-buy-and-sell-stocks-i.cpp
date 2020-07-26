int Solution::maxProfit(const vector<int> &price) {
    int buy=INT_MAX;
    int profit=0;
    for(int i=0;i<price.size();i++)
    {
        if(price[i]<buy)
        {
            buy=price[i];
        }
        else if(profit<price[i]-buy)
        {
            profit=price[i]-buy;
        }
    }
    return profit;
}
