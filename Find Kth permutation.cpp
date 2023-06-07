//Given two integers N (1<=N<=9) and K. Find the kth permutation sequence of first N natural numbers. Return the answer in string format.
string kthPermutation(int n, int k)
    {
        string ans="";
        for (int i=1;i<=n;i++)
        {
            ans.push_back(i+'0');
        }
        k--;
        while(k--)
        {
            next_permutation(ans.begin(),ans.end());
        }
        return ans;
        // code here
    }
