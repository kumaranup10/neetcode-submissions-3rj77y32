class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int maxwater=0;

        while(left<right)
        {
            int h=min(heights[left],heights[right]);
            int w=right-left;

            maxwater=max(maxwater,w*h);

            if(heights[left]<heights[right])
            left++;
            else
            right--;
        }
        return maxwater;
    }
};
