class Solution {
public:
    void util(string s,vector<string>&res,int ind){
        if(s.size()==ind){
            res.push_back(s);
            return;
        }
        if(!(s[ind]>=48 and s[ind]<=57))
        {
            s[ind] = toupper(s[ind]);
            util(s,res,ind+1);
            s[ind] = tolower(s[ind]);
            util(s,res,ind+1);
        }
        else
        {
            util(s,res,ind+1);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>res;
        util(s,res,0);
        return res;
    }
};