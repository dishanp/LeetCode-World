class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;
        int arrSum = 0;        
        for(int i=0;i<n;i++){
            int sum = 0, subsetSize = 0;
            for(int j=i;j<n;j++){
                subsetSize++;
                sum+=arr[j];
                if(subsetSize&1)
                totalSum += sum;
            }
            
        }
        return totalSum;
    }
};