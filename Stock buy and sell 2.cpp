int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int profit=0;
        for (int i=0;i<n-1;i++)
        {
            if (prices[i+1]>prices[i])
            {
                profit += (prices[i+1]-prices[i]);
            }
        }
        return profit;
    }
