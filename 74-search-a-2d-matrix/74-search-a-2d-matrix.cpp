class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int l=0;
        int h=(m.size()*m[0].size())-1;
        int mid;
        int n=m[0].size();
        while(l<=h){
            mid=l+(h-l)/2;
            int el=m[mid/n][mid%n];
            if(el==t)
                return 1;
            else if(t<el)
                h=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
};