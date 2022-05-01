class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long frontSum=0, endSum=0;
        pair<long long,int> pr={INT_MAX,0}; // < value,index >
        for (auto& num : nums) endSum += num;
        for (int i=0; i<n; i++) {
            frontSum += nums[i];
            endSum -= nums[i];
            long long a = frontSum / (i+1); // average of first i+1 elements
            long long b = (n-i-1>0) ? endSum / (n-i-1) : 0; // average of last n-i-1 elements
            int diff=abs(a-b);
            if(diff<pr.first){
                pr.first=diff;
                pr.second=i;
            }
        }
        return pr.second;
    }
};