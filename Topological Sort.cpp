//Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.
void dfs(int node, vector<int> &ans, vector<int> adj[], vector<bool> &visited)
	{
	    visited[node]=true;
	    for (int x: adj[node])
	    {
	        if (!visited[x])
	        {
	            dfs(x,ans,adj,visited);
	        }
	    }
	    ans.push_back(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector <bool> visited (v,false);
	    vector<int> ans;
	    for (int i=0;i<v;i++)
	    {
	        if (visited[i] == false)
	        {
	            dfs(i,ans,adj,visited);
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	    // code here
	}
