/*Santa is still not married. He approaches a marriage bureau and asks them to hurry the process. The bureau checks the list of eligible girls of size N and hands it over to Santa. Santa being conscious about his marriage is determined to find a girl with maximum connections so that he can gather more information about her. Accordingly, he looks to figure out the maximum number of girls (from the list) who know each other to achieve the above purpose.

In order to finalize the girl, he needs to find the Kth prime. Where k = largest group of girls who know each other. Considering Santa's poor knowledge of Maths, he seeks Banta's help for the answer. Now you, a fan of Santa Banta Jokes, take this prestigious opportunity to solve the problem.

In case no of connections is zero, print "-1". Here the connection between girls is represented by a 2-D array g of dimension M*2, where M is the number of connections.*/
vector<int> ans;
    void precompute(){
        vector<bool> isprime(1000001,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i<=1000000;i++){
            if(isprime[i]){
                ans.push_back(i);
                for(int j=2*i;j<=1000000;j+=i){
                    isprime[j]=false;
                }
            }
        }
    }
    void dfs(int node,vector<bool> &vis,vector<vector<int>> &g,int &temp){
        vis[node]=true;
        for(auto x:g[node]){
            if(vis[x]==false){
                dfs(x,vis,g,temp);
            }
        }
        temp++;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        vector<bool> vis(n+1,false);
        int s=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==false){
                int temp=0;
                dfs(i,vis,g,temp);
                s=max(temp,s);
            }
        }
        if(s==1)return -1;
        return ans[s-1];
    }
