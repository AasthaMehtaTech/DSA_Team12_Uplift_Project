class Solution {
public:
   
vector<string> generateParenthesis(int n) {
    unordered_map<string,bool> check;
    if(n==0){return {};}
    if(n==1){return {"()"};}
    vector<string> temp,storage;
    storage.push_back("");
    int i=0,count,counter=0,z;
    string x;
    for(z=0;z<n;z++)
    {
        temp.clear();
        for(string s:storage)
        {
            for(i=0;i<=counter;i++)
            {
                x = s;
                x.insert(i,"()");
                if(check[x]==false)
                {
                    temp.push_back(x);
                    check[x]=true;
                }
            }
        }
        storage = temp;
        counter++;
    }
    
    return temp; 
}
};
