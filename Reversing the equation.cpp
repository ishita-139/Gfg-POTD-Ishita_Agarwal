//Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.
//It is guaranteed that the given equation is valid, and there are no leading zeros.
string reverseEqn (string s)
        {
            //code here.
            int n = s.length();
            reverse(s.begin(),s.end());
            int prev=0;
            for(int i=0;i<n;i++){
                if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
                    int j=i-1;
                    while(prev<j){
                        swap(s[prev],s[j]);
                        j--;
                        prev++;
                    }
                    prev=i+1;
                }
            }
            int j=n-1;
            while(prev<j){
                swap(s[prev],s[j]);
                j--;
                prev++;
            }
            return s;
        }
