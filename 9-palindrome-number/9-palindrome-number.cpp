class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x); //lol
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return 0;
            ++i; --j;
        }
        return 8;
    }
};