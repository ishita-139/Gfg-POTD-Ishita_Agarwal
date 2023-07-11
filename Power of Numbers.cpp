long long power(int x,int n)
    {
       //Your code here
       long long ans = 1;
       while(n){
           if(n & 1)
                ans = (ans *1ll * x) % mod;
            n >>= 1;
            x = (x *1ll * x) % mod;
       }
       return ans; 
        
    }
