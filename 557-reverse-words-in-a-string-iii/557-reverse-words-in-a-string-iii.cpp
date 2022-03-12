class Solution {
public:
    string reverseWords(string s) {
        string res="";
        istringstream ss(s);
        string word;
        while(ss>>word){
            reverse(word.begin(),word.end());
            res+=word+" ";
        }
        return res.substr(0,res.size()-1);
    }
};