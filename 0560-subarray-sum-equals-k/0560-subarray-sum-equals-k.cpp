class Solution {
    unordered_map<int,int>sumFreq = {{0,1}};
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==1){
            if(nums[0] > k || nums[0] < k)
                return 0;
            else
                return 1;
        }
        int prefixSum = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            prefixSum += nums[i];
            int diff = prefixSum - k;
            ans +=  sumFreq[diff];
            //if(sumFreq.find(prefixSum) != sumFreq.end())
                sumFreq[prefixSum]++;
            //else
              //  sumFreq[prefixSum] = 1;
        }
        return ans;
        /*for(int i = 0; i < nums.size(); i++){
            int prefixSum = 0;
            for(int j = i; j < nums.size(); j++){
                cout << i << " " << j << endl;
                prefixSum += nums[j];
                if(prefixSum>k)break;
                else if(prefixSum==k){
                    count++;
                }
                
            }
        }
        return count;*/
    }
};