string FirstNonRepeating(string A)
	{
		    // Code here
	  vector<int>fre(26,0);
      queue<char>q;
      string ans="";
      for(int i=0;i<A.size();i++){
        fre[A[i]-'a']++;
        q.push(A[i]);
        
        while(!q.empty() && fre[q.front()-'a']!=1){
            q.pop();
        }
        if(q.empty())ans+='#';
        else{
            ans+=(q.front());
        }
     }
      return ans;
	}
