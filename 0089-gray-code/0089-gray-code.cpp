class Solution {
public:
    vector<int> grayCode(int n) {
        unordered_set<int>visited;
        //vector<int>visited;
        //visited.push_back(0);
        vector<int>ans;
        visited.insert(0);
        ans.push_back(0);
        helper(ans, n, visited);
        return ans;
    }
    
    bool helper(vector<int>&ans, int n,unordered_set<int>&visited){
        if(ans.size() == pow(2,n)) //or use 1<<n instead of pow(2,n)
            return true;
        
        int curr = ans[ans.size()-1];
        for(int i = 0; i<n; i++){ //iterations to toggle n-bits
            int next = curr^(1<<i); //toggling the bits
            if(visited.find(next) == visited.end()){
                ans.push_back(next);
                visited.insert(next);
                //visited.push_back(next);
                if(helper(ans, n, visited))
                    return true;
                visited.erase(next);
                //visited.pop_back();
                ans.pop_back();
            }
        }
        return false;
    }
};
