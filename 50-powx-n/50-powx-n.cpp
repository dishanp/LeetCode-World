class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        double res=myPow(x,n/2);
        if(n%2==0)
            return res*res;
        else
        {
            if(n>0)
                return res*res*x;
            return res*res*1/x;
        }
        return 0;
    }
};