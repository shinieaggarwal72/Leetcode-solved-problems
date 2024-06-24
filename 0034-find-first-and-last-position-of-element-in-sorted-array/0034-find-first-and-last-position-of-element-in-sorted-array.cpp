class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        vector<int>def = {-1,-1};
        if(nums.size()==1){
            if(nums[0]==target)
                return {0,0};
            else
                return def;
        }
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid]<target){
                low = mid+1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                int i=mid, j=mid;
                while(i>=1 && nums[i-1]==target)i--;
                while((j+1)<=(nums.size()-1) && nums[j+1]==target)j++;
                if(j-i==1)
                    return {i,j};
                res.push_back(i);
                res.push_back(j);
                return res;
                
            }
        }
        return def;
    }
};