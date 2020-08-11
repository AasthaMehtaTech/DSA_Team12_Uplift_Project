class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        graph_ = vector<vector<int>>(numCourses);
        
        for(const auto& p : prerequisites)
            graph_[p[0]].push_back(p[1]);
        vector<int> v(numCourses, 0);
        
        for(int i = 0; i < numCourses; ++i)
            if(dfs(i, v)) return false;
        
        return true;
    }
    
private:
    vector<vector<int>> graph_;
    bool dfs(int cur, vector<int>& visited) {
        if(visited[cur] == 1) return true;
        if(visited[cur] == 2) return false;
        
        visited[cur] = 1;
        
        for(const int t : graph_[cur])
            if(dfs(t, visited)) return true;
        
        visited[cur] = 2;
        
        return false;
    }
};
