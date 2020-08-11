class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,multiset<string>> adj;
        vector<string> path;
        stack<string> s;
        for (auto x:tickets)
            adj[x[0]].insert(x[1]);
        s.push("JFK");
        while(!s.empty())
        {
            string src=s.top();
            if (adj[src].empty())
            {
                path.push_back(src);
                s.pop();
            }
            else
            {
                
                auto x=adj[src].begin();
                s.push(*x);
                adj[src].erase(x);
            }
        }
        reverse(path.begin(),path.end());
        return path;
    }
};
