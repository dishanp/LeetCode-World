class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
            return 1;
        if(n==89)
            return 0;
        int s=0;
        while(n){
            s+=(n%10)*(n%10);
            n/=10;
        }
        return isHappy(s);
    }
};