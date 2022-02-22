class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>u;
        int res=0;
        u[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res+=u[sum-k];
            u[sum]++;
        }
        return res;
    }
};