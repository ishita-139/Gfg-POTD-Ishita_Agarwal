int isDivisible(string s){
	    //complete the function here
	    int n = s.size();
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
        sum = (sum*2+s[i]-'0')%3;
            
        }   
        return (sum)%3 ? 0 : 1;
        
	}
