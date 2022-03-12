class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<int>res;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<hi){
            if(nums[lo]+nums[hi]==t){
                res.push_back(lo+1);
                res.push_back(hi+1);
                return res;
            }
            else if(t>nums[lo]+nums[hi])
                lo++;
            else
                hi--;
        }
        return res;
}
};