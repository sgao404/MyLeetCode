class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int newsum=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            newsum = std::max(newsum+nums[i],nums[i]);
            res = std::max(res, newsum);
        }
        return res;
        
    }
};