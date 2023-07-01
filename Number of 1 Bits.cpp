int setBits(int N) {
        int ans=0;
        while(N>0)
        {
            if (N%2==1)
            {
                ans++;
            }
            N=N/2;
        }
        return ans;
        // Write Your Code here
    }
