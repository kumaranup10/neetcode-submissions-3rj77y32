class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0,ans=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        m[s[i]]++;


        for (auto n:m) {
            int i = 0, j = 0, temp = k;

            while (j < s.size()) {
                if (s[j] == n.first) {
                    j++;
                } else if (temp > 0) {
                    temp--;
                    j++;
                } else {
                    if (s[i] != n.first) temp++;
                    i++;
                }

                ans = max(ans, j - i);
            }
        }

        return ans;
    }
};
