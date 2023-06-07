//Given a number N, find the least prime factors for all numbers from 1 to N.  The least prime factor of an integer X is the smallest prime number that divides it.
int prime(int y)
    {
        if (y <= 3)
        {
            return y;
        }
        else 
        {
            for (int i=2;i<y;i++)
            {
                if (y%i==0)
                {
                    return i;
                    
                }
            }
        }
    }
    vector<int> leastPrimeFactor(int n) {
        vector<int>ans(n+1);
        ans[0] = 0;
        ans[1] = 1;
        for(int i=2;i<=n;i++)
        {
            int x=prime(i);
            ans[i] = x;
        }
        return ans;
        // code here
    }
