class Solution {
    
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();
        unordered_set<string>p;
        string longestPrefix = "";
        for(auto& num1: arr1){
            string stringNum = to_string(num1);
            p.insert(stringNum);
            if(stringNum.length()>1){
                for(int j=0; j<stringNum.length(); j++){
                    p.insert(stringNum.substr(0,j+1));
                }
            }

        }
        /*unordered_set<string>::iterator itr;
    for (itr = p.begin(); itr != p.end();itr++)
        cout << (*itr) << endl;*/

        for(auto& num2: arr2){
            string stringNum = to_string(num2);
            for(int j=stringNum.length(); j>0; j--){
                string prefix = stringNum.substr(0,j);
                cout << "prefix: ";
                /*for(int i=0; i<prefix.length(); i++){
                    cout<<prefix[i];
                }
                cout << endl;*/
                if(p.find(prefix)!=p.end()){
                    if(prefix.length()>longestPrefix.length()){
                        longestPrefix = prefix;
                        //cout << "prefix.length()>longestPrefix.length()";
                    }
                }

            }
        }
        
    
        
        return longestPrefix.length();
    }
};