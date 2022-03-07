class Solution {
public:
    double average(vector<int>& salary) {
        int ma=INT_MIN;
        int mi=INT_MAX;
        int s=0;
        for(int i:salary){
            ma=max(ma,i);
            mi=min(mi,i);
            s+=i;
        }
        return (double)(s-ma-mi)/(salary.size()-2);
    }
};