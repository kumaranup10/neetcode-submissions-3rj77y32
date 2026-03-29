class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        if(strs.size()==0)
        return ans;
        unordered_map<string,vector<string>>m;

        for(auto x:strs)
        {
            string temp=x;
            sort(temp.begin(),temp.end());

            m[temp].push_back(x);
        }

        for(auto x: m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
