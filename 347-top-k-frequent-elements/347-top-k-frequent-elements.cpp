class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int>u;
        for(int i:nums)
            u[i]++;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
          for(auto i:u)
        {
            pq.push({i.second,i.first});
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};