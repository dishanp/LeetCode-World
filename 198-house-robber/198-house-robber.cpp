class Solution {
public:
    int rob(vector<int>& nums) {
        int exc=0;
        int inc=nums[0];
        int exc_new=0;
        for(int i=1;i<nums.size();i++){
            exc_new=max(inc,exc);
            inc=exc+nums[i];
            exc=exc_new;
        }
        return max(inc,exc);
    }
};