class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res(nums1.size());
        unordered_map<int, int>hash;
        for(int i=0; i<nums2.size(); i++){
            hash[nums2[i]] = i;
        }

        for(int i=0; i<nums1.size(); i++){
            int idx = hash.find(nums1[i])->second;
            if(idx==nums2.size()-1){
                res[i] = -1;
            }
            else{
                int ans_idx = -1;
                int ans = INT_MAX;
                for(int j=idx; j<nums2.size();j++){
                    if(nums2[j]>nums1[i]){
                        ans = nums2[j];
                        ans_idx = j;
                        break;
                    }
                }
                if(ans == INT_MAX){
                    res[i] = -1;
                }
                else{
                    res[i] = ans;
                }
            }
        }
        return res;
    }
};