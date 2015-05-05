class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int t1 = 0;
        int t2 = 0;
        int t3 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            t1 = t1 ^ nums[i];
            t2 = t2 | ((t1^nums[i]) & nums[i]);
            t3 = ~(t1 & t2);
            t1 = t1 & t3;
            t2 = t2 & t3;
        }
         
        return t1;
    }
         
};