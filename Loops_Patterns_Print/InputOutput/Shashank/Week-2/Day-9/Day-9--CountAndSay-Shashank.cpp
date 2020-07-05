class Solution {
public:
    string countAndSay(int n) {
        string s = "1"; 
            if(n==1) return s; 
            else 
        {
            int c=1; 
            while(1) 
        { 
        if(n==c) return s;   
            else 
        {
        string k = "";
            for(size_t i=0;i<s.length();i++) 
        { 
           char temp = s[i]; 
           int ctr = 1;  
             while(s[i]==s[i+1]) 
            { 
                 ctr++; i++; 
            } 
      string t = to_string(ctr);  
        k+=t;
            k.push_back(temp); 
                }
            s = k;
        c++;  
        }
      }
    } 
  } 
};
