class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        vector<int>sorted = nums;
        sort(sorted.begin(), sorted.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            if((i+1)<=(j+1) && nums[i]==sorted[i])
                i++;
            if((i+1)<=(j+1) && nums[j]==sorted[j])
                j--;
            if(nums[i]!=sorted[i] && nums[j]!=sorted[j])
                break;
        }
        cout << "i=" << i << " j=" << j << endl;
        return i==j ? 0: j-i+1;
    }
};