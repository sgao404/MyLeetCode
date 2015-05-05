class Solution { // use sort
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        
        return nums[nums.size()/2];
    }
};

class Solution { // use map
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for (int i=0;i<nums.size();i++){
            if (mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = 1;
            }else{
                mp[nums[i]] += 1;
            }
            if (mp[nums[i]] > nums.size()/2){
                return nums[i];
            }
        }
    }
};