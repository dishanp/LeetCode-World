class Solution {
public:
    int first(vector<int>nums,int x){
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        int res=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==x)
            {
                res=mid;
                hi=mid-1;
            }
            else if(x>nums[mid]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return res;
    }
        int last(vector<int>nums,int x){
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        int res=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==x)
            {
                res=mid;
                lo=mid+1;
            }
            else if(x>nums[mid]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        res.push_back(first(nums,target));
        res.push_back(last(nums,target));
        return res;
    }
};