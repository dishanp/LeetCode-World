class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last,rem;
        while(n){
            rem=n%2;
            if(rem==last)
                return false;
            n=n/2;
            last=rem;
        }
        return 1;
    }
};