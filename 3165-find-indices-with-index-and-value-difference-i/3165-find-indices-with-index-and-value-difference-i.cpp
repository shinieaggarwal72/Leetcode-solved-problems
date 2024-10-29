class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>res(2, -1);
        int n = nums.size();
        if(indexDifference>n)return res;
        
        for(int i=0; i<n-indexDifference; i++){
            for(int j = indexDifference+i; j<n; j++){
                if(abs(nums[i]-nums[j])>=valueDifference){
                    res[0]= i;
                    res[1] = j;
                    return res;
                }
            }
        }
        return res;
    }
};