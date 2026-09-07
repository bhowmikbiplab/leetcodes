class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty()) return;
        int slow = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]!=0){
                if(slow!=i){
                    swap(nums[slow], nums[i]);
                }
                ++slow;
            }

        }
    
    }
};