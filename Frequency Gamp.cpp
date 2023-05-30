//Given an array A of size N. The elements of the array consist of positive integers. You have to find the largest element with minimum frequency.
int LargButMinFreq(int arr[], int n) {
        unordered_map<int,int> mp;
        for (int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int minf=INT_MAX,ans=0;
        for (auto i:mp)
        {
            if (i.second<minf)
            {
                minf=i.second;
                ans=i.first;
            }
            else if(i.second==minf){
                ans=max(ans,i.first);
            }
        }
        return ans;
        
        // code here
    }
