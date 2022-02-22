class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        stack<int>s1;
        stack<int>s2;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m[i][j]==0)
                {
                    s1.push(i);
                    s2.push(j);
                }
            }
        }
        while(!s1.empty()){
            for(int i=0;i<c;i++)
                m[s1.top()][i]=0;
            s1.pop();
        }
        while(!s2.empty()){
            for(int i=0;i<r;i++)
                m[i][s2.top()]=0;
            s2.pop();
        }
    }
};