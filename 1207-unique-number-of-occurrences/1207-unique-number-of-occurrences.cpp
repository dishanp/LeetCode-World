class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>u;
        unordered_map<int,int>f;
        for(int i:arr)
            u[i]++;
        for(auto i:u)
            f[i.second]++;
        for(auto i:f)
            if(i.second>1)
                return 0;
        return 1;
    }
};