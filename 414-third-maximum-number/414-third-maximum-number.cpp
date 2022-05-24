class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> seen;
        priority_queue<int, vector<int>, greater<int>> q;
        for (auto num : nums) {
            if (seen.find(num) != seen.end()) continue;
            seen.insert(num);
            q.push(num);
            if (q.size() > 3) q.pop();
        }
        
        if (q.size() < 3) {
            int maxVal = INT_MIN;
            while (!q.empty()) {
                maxVal = max(maxVal, q.top());
                q.pop();
            }
            return maxVal;
        }
        return q.top();
    }
};