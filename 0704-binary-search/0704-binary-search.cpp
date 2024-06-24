class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0, h=n-1, mid;
        mid=(l+h)/2;
        while(l<=h){
            if(target==nums[mid])return mid;
            else if(target>nums[mid])l=mid+1;
            else h=mid-1;
            mid=(l+h)/2;
        }
        return -1;
    }
};