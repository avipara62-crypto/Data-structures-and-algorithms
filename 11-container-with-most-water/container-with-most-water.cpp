class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int area = INT_MIN;
        while(low<=high){
            int currarea = min(height[low],height[high])*(high-low);
            area = max(area,currarea);
            if(height[low]<=height[high]) low++;
            else high--;
        }
        return area;
    }
};