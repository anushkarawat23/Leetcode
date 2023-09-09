class Solution {
public:

    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination)  
    {
        //Storing all edges in adjacency list
        vector<int> adj[n+1];
        for( auto it : edges)
        {
            int a = it[0], b = it[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        queue<int> q;
        vector<int> vis(n,false);
        q.push(source);
        vis[source] = true;

        while( !q.empty() )
        {
            int node = q.front();
            q.pop();
            if(node == destination)
                return true;

            //Visiting the neaighbours of the node
            for(auto it : adj[node])
            {
                if( !vis[it] )
                {
                    vis[it] = true;
                    q.push(it);
                }
            }

        }
        
        return false;

    }
};