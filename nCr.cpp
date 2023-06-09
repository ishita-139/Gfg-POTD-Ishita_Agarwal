int nCr(int n, int r)
    {
        if(r > n) return 0;
        int mod = 1e9+7;
        r = min(r,n-r);
        vector <int> dp(r+1);
        dp[0] = 1;
        for(int i = 1;i <= n;i++)
        {
             for(int j = min(i,r);j > 0;j--)
             {
                   dp[j] = (dp[j-1]+dp[j])%mod;
             }        
        }
        return dp[r];
        // code here
    }
