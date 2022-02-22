class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int prof=0;
        for(int i:prices){
            buy=min(i,buy);
            prof=max(prof,i-buy);
        }
        return prof;
    }
};