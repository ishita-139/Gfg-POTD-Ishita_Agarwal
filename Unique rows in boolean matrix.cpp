vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        set<vector<int>>st;
        vector<vector<int>>ans;
         for(int i=0;i<row;i++)
         {
              vector<int>v;
              for(int j=0;j<col;j++)
              {
                  v.push_back(M[i][j]);
               } 
               if(st.find(v)==st.end())
               {
                ans.push_back(v);
                st.insert(v);
                }
         } 
         return ans;
        
    }
