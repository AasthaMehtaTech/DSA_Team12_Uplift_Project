class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        //genreate one hash table for s1
        vector<int> record1(26,0);
        for(int i(0);i<=s1.size()-1;i++)
        {
            record1[s1[i]-'a']++;
        }
        vector<int> record2(26,0);
        int i(0);
        int j=i+s1.size()-1;
        for(int m(0);m<=j;m++)
        {
            record2[s2[m]-'a']++;
        }
        
        while(i<=j&&j<=s2.size()-1)
        {
            if(record1==record2)
                return true;
                record2[s2[i]-'a']--;
                j++;
                i++;
                if(j<=s2.size()-1)
                    record2[s2[j]-'a']++;
        }
        return false;
    }
};
