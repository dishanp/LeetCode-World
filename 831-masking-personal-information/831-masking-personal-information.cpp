class Solution {
public:
    string maskPII(string s) {
        size_t ind=s.find('@');
        string res="";
        if(ind != string::npos ){
            ind-=1;
            for(int i=0;i<s.size();i++)
                if(s[i]>=65 and s[i]<=90 )
                    s[i]+=32;
            res+=s[0];
            res+="*****";
            for(int i=ind;i<s.size();i++)
                res+=s[i];
        }else{
            string temp="";
            int ctr=0;
            int n=0;
            for(int i=s.size()-1;i>=0;i--){
                if(ctr<4&&s[i]>=48&&s[i]<=57)
                    {temp+=s[i];
                    ++ctr;}
                if(s[i]>=48&&s[i]<=57)
                    ++n;
            }
            reverse(temp.begin(),temp.end());
            n-=10;
            if(n==0)
                return "***-***-"+temp;
            else if(n==1)
                return "+*-***-***-"+temp;
             else if(n==2)
                return "+**-***-***-"+temp;
             else if(n==3)
                return "+***-***-***-"+temp;
        }
        return res;
    }
};