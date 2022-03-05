class Solution {
public:
    static bool comp(string a,string b){
        return a.append(b) > b.append(a);
    }
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i:nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),&comp);
        string res="";
        for(string str:s)
            res+=str;
        if(res[0]=='0')
            return "0";
        return res;
    }
};