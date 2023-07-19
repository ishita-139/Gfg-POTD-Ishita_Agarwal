char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int> mp;
       for (auto i:S)
       {
           mp[i]++;
       }
       for(int i=0;i<S.length();i++)
       {
            if(mp[S[i]]==1)
               return S[i];
       }
       return '$';
       
    }
