class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>res;
        int start=s[1]-48;
        int end=s[4]-48;
        char lo=s[0];
        char hi=s[3];
            for(int i=start;i<=end;i++)
           { 
                string str(1, lo);
                res.push_back(str+to_string(i));
           }
        if(lo!=hi){
        while(lo!=hi){
            lo++;
            for(int i=start;i<=end;i++){
                string str(1, lo);
                res.push_back(str+to_string(i));
            }
        }
        }
        return res;
    }
};