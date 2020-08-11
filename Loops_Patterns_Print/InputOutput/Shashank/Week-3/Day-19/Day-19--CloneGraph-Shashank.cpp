class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        if (!node) return nullptr;
        
        if (copies.find(node) == copies.end())
        {
            copies[node] = new Node(node->val);
            
            for (auto neighbor : node->neighbors)
            {
                copies[node]->neighbors.push_back(cloneGraph(neighbor));
            }
        }
        
        return copies[node];
    }
private:
    unordered_map<Node*, Node*> copies;
};
