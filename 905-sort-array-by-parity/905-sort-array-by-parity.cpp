class Solution {
public:
    bool u(int a){
        return a%2==0;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(u(nums[j]) and !u(nums[i]))
            {
                swap(nums[i],nums[j]);
                ++i;
                --j;
            }
            else if(u(nums[i])&&u(nums[j]))
                ++i;
            else if(!u(nums[i]) and !u(nums[j]))
                --j;
            else
            {
                ++i;
                --j;
            }
        }
        return nums;
    }
};