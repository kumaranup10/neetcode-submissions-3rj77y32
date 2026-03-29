class Solution {
public:
    void solve(vector<int>& nums, int index, vector<int>& temp, set<vector<int>>& st) {
        
        // if we selected 3 elements
        if (temp.size() == 3) {
            int sum = temp[0] + temp[1] + temp[2];

            if (sum == 0) {
                int a = temp[0], b = temp[1], c = temp[2];

                // manual sorting of 3 elements
                if (a > b) swap(a, b);
                if (b > c) swap(b, c);
                if (a > b) swap(a, b);

                st.insert({a, b, c});
            }
            return;
        }

        if (index == nums.size()) return;

        // pick
        temp.push_back(nums[index]);
        solve(nums, index + 1, temp, st);
        temp.pop_back();

        // not pick
        solve(nums, index + 1, temp, st);
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> temp;

        solve(nums, 0, temp, st);

        return vector<vector<int>>(st.begin(), st.end());
    }
};
