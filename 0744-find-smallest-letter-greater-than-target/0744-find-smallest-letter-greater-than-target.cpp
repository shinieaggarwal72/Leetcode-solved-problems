class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size()-1;
        int mid = (low+high)/2;
        while(low <= high){
            //cout << "low=" << low << " high=" << high << " mid=" << mid << endl;
            mid = (low+high)/2;
            if(letters[mid]<=target){
                //cout << "inside if"  << endl;
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return low==letters.size() ? letters[0] : letters[low];
    }
};