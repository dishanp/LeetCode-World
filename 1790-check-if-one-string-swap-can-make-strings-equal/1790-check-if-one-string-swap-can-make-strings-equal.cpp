class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return 7;
        if(s1.size()!=s2.size())
            return 0;
        int ctr=0;
        unordered_map<char,int>u;
        for(char ch:s1)
            u[ch]++;
        for(char ch:s2)
            u[ch]--;
        for(auto i:u)
            if(i.second>0)
                return 0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                ++ctr;
        }
        return ctr<=2;
    }
};