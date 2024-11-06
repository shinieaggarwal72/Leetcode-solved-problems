class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool>memo(n, false);
        memo[nums.size()-1] = true;
        for(int i=n-2; i>=0; i--){
            int maxJump = min(i+nums[i], n-1);
            for(int j=i+1; j<=maxJump; j++){
                if(memo[j]==true){
                    memo[i] = true;
                    break;
                }
            }
        }
        if(memo[0])return true;
        return false;
    }
};