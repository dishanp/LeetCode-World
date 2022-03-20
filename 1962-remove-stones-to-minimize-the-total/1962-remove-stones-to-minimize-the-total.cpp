class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i:piles)
            pq.push(i);
        while(k){
            int x=pq.top();
            pq.pop();
            x-=(x/2);
            pq.push(x);
            --k;
        }
        int res=0;
        while(!pq.empty())
        {
            res+=pq.top();
            pq.pop();
        }
        return res;
    }
};