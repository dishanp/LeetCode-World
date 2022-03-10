class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dis=0;
        int res=INT_MAX;
        int ans=-1;
        for(int j=0;j<points.size();j++){
            vector<int>i=points[j];
            if(i[0]==x||i[1]==y){
                dis=abs(x-i[0])+abs(y-i[1]);
                if(dis<res){
                    res=dis;
                    ans=j;
                }
                if(dis==res){
                    if(ans>j)
                        {
                            ans=j;
                            res=dis;
                        }
                    
                }
            }
        }
        return ans;
    }
};