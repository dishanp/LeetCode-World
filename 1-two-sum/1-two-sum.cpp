class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        unordered_map<int,int>u;
        for(int i=0;i<nums.size();i++){
            if(u.find(nums[i])==u.end())
                u[target-nums[i]]=i;
            else{
                res.push_back(u[nums[i]]);
                res.push_back(i);
                return res;
            }
        }
        return res;
}
};