class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1])
            return nums.size();
        if(target<nums[0])
            return 0;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
                return mid;
            else if(mid!=0&&nums[mid]>target&&nums[mid-1]<target)
                return mid;
            else if(mid!=nums.size()-1&&nums[mid]<target&&nums[mid+1]>target)
                return mid+1;
            if(nums[mid]<target)
                lo=mid+1;
            else if(nums[mid]>target)
                hi=mid-1;
        }
        return -1;
    }
};