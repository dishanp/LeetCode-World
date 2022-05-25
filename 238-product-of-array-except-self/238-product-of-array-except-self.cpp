class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int ctr=0;
        int zp=1;
        for(int i:nums)
        {
            p*=i;
            if(i==0)
                ++ctr;
            if(ctr>1){
                vector<int>ans(nums.size(),0);
                return ans;
            }
            if(i!=0)
                zp*=i;
        }
        vector<int>res;
        for(int i:nums)
        {
            if(i==0)
                res.push_back(zp);
            else
                res.push_back(p/i);
        }
        return res;
    }
};