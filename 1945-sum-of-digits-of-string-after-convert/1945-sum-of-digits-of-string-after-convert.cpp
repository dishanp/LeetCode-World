class Solution {
public:
    int getLucky(string s, int k) {
        string no="";
        for(char ch:s)
        {
            int temp=(int)ch-96;
            no+=to_string(temp);
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {   
            sum=0;
            for(int j=0;j<no.size();j++){
                sum+=(no[j]-'0');
            }
            no=to_string(sum);
        }
        return sum;
    }
};