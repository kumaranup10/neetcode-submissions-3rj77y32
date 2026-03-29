class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        vector<bool>c(256,0);

        while(j<s.size() && i<s.size())
        {
            if(!c[s[j]])
            {
                c[s[j]]=true;
                ans=max(ans,j-i+1);
                j++;
            }
            else if(c[s[i]])
            {
               c[s[i]]=false;
               i++; 
            }

        }
        return ans;
    }
};
