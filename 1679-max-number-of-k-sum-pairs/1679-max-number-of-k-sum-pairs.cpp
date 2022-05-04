class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ctr=0;
        int i=0;
        int j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]==k){
                ++i;
                --j;
                ++ctr;
                continue;
            }else if(nums[i]+nums[j]<k){
                ++i;
            }else{
                --j;
            }
        }
        return ctr;
    }
};