class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>res(m, vector<int>(n));
        vector<vector<int>>empty;
        if(original.size() < m*n || original.size() > m*n){
            cout << "exit";
            return empty;
        }
            
        int k=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res[i][j] = original[k++];
            }
        }
        return res;
    }
};