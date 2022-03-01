class Solution {
public:
    int minSteps(string s, string t) {
       vector<int> a(26),b(26);
         int ans=0;
         for(int i=0;i<s.size();i++) a[s[i]-'a']++;
         for(int i=0;i<t.size();i++) b[t[i]-'a']++;
         for(int i=0;i<26;i++) ans+=abs(a[i]-b[i]);
         return ans;
    }
};