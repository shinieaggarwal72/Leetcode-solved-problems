class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char>map;
        char ch = 'a';
        cout << key.length() << endl;
        for(int i=0; i<key.length(); i++){
            cout << "i= " << i << endl;
            if(key[i]==' '){
                cout << "key[i]==' '";
                continue;
            }
            else if(map.find(key[i])==map.end()){
                cout << "Inside else if";
                map[key[i]] = ch;
                cout << key[i] << " " << ch << endl;
                ch++;

            }
            
        }
        string res = "";
        for(int i=0; i<message.length(); i++){
            if(message[i] == ' '){
                res += " ";
            }
            else{
                res += map[message[i]];
            }

        }
        return res;
    }
};