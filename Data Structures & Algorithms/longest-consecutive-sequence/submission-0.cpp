class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        set<int> st(nums.begin(), nums.end());

        int longest = 1, current = 1;
        int prev = *st.begin();

        for (auto it = next(st.begin()); it != st.end(); it++) {
            if (*it == prev + 1) {
                current++;
            } else {
                current = 1;
            }

            longest = max(longest, current);
            prev = *it;
        }

        return longest;
    }
};
