class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int>nums (1001,0);
        int maxCit = 0;
        for(int i=0; i<n; i++){
            nums[citations[i]]++;
        }
        vector<int>prefixSum(1001, 0);
        prefixSum[1000] = nums[1000];
        for(int i=999; i>=0; i--){
            prefixSum[i] = prefixSum[i+1] + nums[i]; 
        }
        for(int j=1000; j>=0; j--){
            if(min(j, prefixSum[j]) > maxCit)maxCit = min(j, prefixSum[j]);
        }
        return maxCit;
    }
};