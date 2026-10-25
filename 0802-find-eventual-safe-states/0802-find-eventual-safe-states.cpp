class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n=graph.size();
        vector<vector<int>> rev(n);
        vector<int> out(n,0);

        for(int u=0;u<n;u++){
            out[u]=graph[u].size();
            for(int v:graph[u]) rev[v].push_back(u);

        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(out[i]==0) q.push(i);
        }
        vector<int> safe;
        while(!q.empty()){
            int u=q.front(); q.pop();
            safe.push_back(u);
            for(int v:rev[u]) if(--out[v]==0) q.push(v);

        }sort(safe.begin(),safe.end());
        return safe;
    }
};