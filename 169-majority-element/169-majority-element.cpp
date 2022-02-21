class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ctr=0;
        int maj=nums[0];
        for(int i=0;i<nums.size();i++){
            if(ctr==0)
                maj=nums[i];
            if(maj==nums[i])
                ++ctr;
            else
                --ctr;
        }
        return maj;
    }
};