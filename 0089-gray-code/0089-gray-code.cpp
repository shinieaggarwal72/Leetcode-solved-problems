/*class Solution {
public:
    vector<int> grayCode(int n) {
        //unordered_set<int>visited;
        vector<int>visited;
        visited.push_back(0);
        vector<int>ans;
        //visited.insert(0);
        ans.push_back(0);
        helper(ans, n, visited);
        return ans;
    }
    
    bool helper(vector<int>&ans, int n,vector<int>&visited){
        if(ans.size() == pow(2,n)) //or use 1<<n instead of pow(2,n)
            return true;
        
        int curr = ans[ans.size()-1];
        for(int i = 0; i<n; i++){ //iterations to toggle n-bits
            int next = curr^(1<<i); //toggling the bits
            if(find(visited.begin(), visited.end(), next) == visited.end()){
                ans.push_back(next);
                //visited.insert(next);
                visited.push_back(next);
                if(helper(ans, n, visited))
                    return true;
                //visited.erase(next);
                visited.pop_back();
                ans.pop_back();
            }
        }
        return false;
    }
};*/
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        result.push_back(0);
        // Keeps track of the numbers present in the current sequence.
        unordered_set<int> isPresent;
        // All Gray code sequence starts with 0
        isPresent.insert(0);
        grayCodeHelper(result, n, isPresent);
        return result;
    }

private:
    bool grayCodeHelper(vector<int> &result, int n,
                        unordered_set<int> &isPresent) {
        if (result.size() == (1 << n)) return true;

        int current = result[result.size() - 1];
        for (int i = 0; i < n; i++) {
            int next = current ^ (1 << i);
            if (isPresent.find(next) == isPresent.end()) {
                isPresent.insert(next);
                result.push_back(next);
                // If valid sequence found no need to search any further
                if (grayCodeHelper(result, n, isPresent)) return true;
                // If no valid sequence found delete the last added number and
                // continue the search.
                isPresent.erase(next);
                result.pop_back();
            }
        }
        return false;
    }
};