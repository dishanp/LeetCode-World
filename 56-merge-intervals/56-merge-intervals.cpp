class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>res;
        sort(inter.begin(),inter.end());
        vector<int>temp=inter[0];
        for(auto i:inter){
            if(temp[1]>=i[0])
                temp[1]=max(temp[1],i[1]);
            else{
                res.push_back(temp);
                temp=i;
            }
        }
        res.push_back(temp);
        return res;
    }
};