int start=0, end=0,max_len=1;
        int n=S.length();
        if (n<=1) return S;
        
        //Odd
       for (int i=0;i<n-1;i++)
       {
           int l=i,r=i;
           while(l>=0 && r<n)
           {
               if (S[l]==S[r])
               {
                   l--;
                   r++;
               }
               else
               {
                   break;
               }
           }
           int len=r-l-1;
           if (len>max_len)
           {
               max_len=len;
               start=l+1;
               end=r-1;
           }
       }
       //Even
       for (int i=0;i<n-1;i++)
       {
           int l=i,r=i+1;
           while(l>=0 && r<n)
           {
               if (S[l]==S[r])
               {
                   l--;
                   r++;
               }
               else
               {
                   break;
               }
           }
           int len=r-l-1;
           if (len>max_len)
           {
               max_len=len;
               start=l+1;
               end=r-1;
           }
       }
       return S.substr(start,max_len);
        // code here
    }
