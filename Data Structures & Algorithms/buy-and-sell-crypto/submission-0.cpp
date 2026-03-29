class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,mini=INT_MAX;

        for(auto i:prices)
        {
            mini=min(i,mini);
            maxi=max(maxi,i-mini);
        }
        return maxi;
    }
};
