class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;

        for(auto i:nums)
        m[i]++;

        vector<pair<int,int>>n;

        for(auto i:m)
        n.push_back({i.second,i.first});

        sort(n.rbegin(),n.rend());
        vector<int>ans;

        for(int i=0;i<k;i++)
        ans.push_back(n[i].second);

        return ans;
        
    }
};
