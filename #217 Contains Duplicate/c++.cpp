class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums==NULL || nums.size()==0) return false;

        unordered_set<int> set;
        for (int i = 0; i < nums.size(); i++) {
            if (set.find(nums[i]) != set.end()) {
                return true;
            }
            set.insert(nums[i]);
        }
        return false;
    }
};