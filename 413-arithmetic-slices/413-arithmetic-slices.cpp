class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int N=nums.size();
    if (N <= 2)
        return 0;
 
    // Finding arithmetic subarray length
    int count = 0;
 
    // To store all arithmetic subarray
    // of length at least 3
    int res = 0;
 
    for (int i = 2; i < N; ++i) {
 
        // Check if current element makes
        // arithmetic sequence with
        // previous two elements
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
            ++count;
        }
 
        // Begin with a new element for
        // new arithmetic sequences
        else {
            count = 0;
        }
 
        // Accumulate result in till i.
        res += count;
    }
 
    // Return final count
    return res;
    }
};