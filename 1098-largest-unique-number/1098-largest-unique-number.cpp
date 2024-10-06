class Solution {
    unordered_map<int, int>memo;
public:

    int largestUniqueNumber(vector<int>& nums) {
        for(auto& num: nums){
            memo[num]++;
        }
        vector<int>res;
        for(auto itr = memo.begin(); itr!=memo.end(); itr++){
            if(itr->second==1){
                res.push_back(itr->first);
            }
        }
        if(res.size()>=1){
            sort(res.begin(), res.end());
            return res[res.size()-1];
        }
        return -1;
    }
};