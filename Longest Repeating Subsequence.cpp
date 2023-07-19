int LongestRepeatingSubsequence(string str){
		    string s1=str;
            string s2=str;
            vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,0));
        
        for(int i=1;i<=s1.size();i++)
        {
            for(int j=1;j<=s2.size();j++)
            {
                if(s1[i-1]==s2[j-1] && i!=j)
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[s1.size()][s2.size()];
		    // Code here
		}
