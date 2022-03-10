class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans,ctr=0;
        for(int i:nums)
        {
            if(i==0)
                return 0;
            if(i<0)
                ++ctr;
        }
        return ans=ctr%2==0?1:-1;
    }
};