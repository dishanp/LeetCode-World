class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>>u;
        for(auto x:strs){
            string s=x;
            sort(s.begin(),s.end());
            u[s].push_back(x);
        }
        for(auto i:u){
            res.push_back(i.second);
        }
        return res;
    }
};