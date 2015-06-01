class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = 0;
    
        for (int i = 0; i < nums.size(); i++) {
            switch(nums[i]) {
                case 0:
                r++;
                break;
                
                case 1:
                w++;
                break;
                
                case 2:
                b++;
                break;
            }
        }
        
        for (int i =0;i<nums.size();i++) {
            if (r >0) {
                nums[i]=0;
                r--;
                continue;
            }
            if (w>0) {
                nums[i]=1;
                w--;
                continue;
            }
            nums[i]=2;
        }
    }
};