class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>c(26,0);
        for(char ch:s)
            c[ch-97]++;
        for(char ch:t)
            c[ch-97]--;
        for(int i:c)
            if(i)
                return 0;
        return 7;
    }
};