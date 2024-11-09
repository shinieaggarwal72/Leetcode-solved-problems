class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        for(int i=0; i<n;){
            int count = 0;
            int currGas = 0;
            int j;
            for(j=i;count<n; j = (j+1)%n ){
                currGas += gas[j];
                if(currGas < cost[j]){
                    if(j<i)return -1;
                    i = j;
                    break;
                }
                currGas -= cost[j];
                count++;
            }
            if(count==n)return j;
            i++;
        }
        return -1;
    }
};