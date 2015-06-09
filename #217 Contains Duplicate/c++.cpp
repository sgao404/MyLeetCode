class Solution {
public:
    int maxArea(vector<int>& height) {
        if (height.empty() || height.size() < 2) return 0;
        
        int max = 0;
        int left = 0;
        int right = height.size() -1 ;
        
        while (left < right) {
            max = std::max(max,(right-left) * std::min(height[left],height[right]));
            if (height[left] < height[right]) left++;
            else right--;
        }
        
        return max;
        
    }
};