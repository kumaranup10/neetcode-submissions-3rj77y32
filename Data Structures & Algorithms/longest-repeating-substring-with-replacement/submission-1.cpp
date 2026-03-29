class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0,ans=0;
        for (char target = 'A'; target <= 'Z'; target++) {
            int i = 0, j = 0, temp = k;

            while (j < s.size()) {
                if (s[j] == target) {
                    j++;
                } else if (temp > 0) {
                    temp--;
                    j++;
                } else {
                    if (s[i] != target) temp++;
                    i++;
                }

                ans = max(ans, j - i);
            }
        }

        return ans;
    }
};
