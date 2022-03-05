class Solution {
public:
    int bin(int lo,int hi,int x,vector<int>nums){
        int mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==x)
                return mid;
            else if(x>nums[mid])
                lo=mid+1;
            else
                hi=mid-1;
        }
        return -1;
    }
    int pivot(vector<int>nums){
        int lo=0;
        int hi=nums.size()-1;
        int mid;
        while(lo<hi){
            mid=lo+(hi-lo)/2;
            if(nums[lo]<nums[hi])
                return lo;
            if(nums[mid]>=nums[lo])
                lo=mid+1;
            else
                hi=mid;
        }
        return lo;
    }
    int search(vector<int>& nums, int x) {
        int p=pivot(nums);
        int n=nums.size();
        int a=bin(0,p-1,x,nums);
        int b=bin(p,n-1,x,nums);
        if(a==-1 && b==-1)
            return -1;
        if(a!=-1)
            return a;
        return b;
    }
};