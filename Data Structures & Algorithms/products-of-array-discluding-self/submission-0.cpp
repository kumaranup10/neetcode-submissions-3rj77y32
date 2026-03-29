class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prev(nums.size(),1),next(nums.size(),1);
        int temp=1;
        for(int i=1;i<nums.size();i++)
        {
            prev[i]=(temp*nums[i-1]);
            temp*=nums[i-1];
        }
        temp=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            next[i]=(temp*nums[i+1]);
            temp*=nums[i+1];
        }

        for(int i=0;i<nums.size();i++)
        nums[i]=prev[i]*next[i];

        return nums;
    }
};
