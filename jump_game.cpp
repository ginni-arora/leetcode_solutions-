class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mreach=0;
        for(int i=0;i<nums.size();i++){
            if(i>mreach){
                return false;
            }
            mreach=max(mreach,i+nums[i]);
        }
        if(mreach>=nums.size()-1){
            return true;
        }
        return true;
    }
};
