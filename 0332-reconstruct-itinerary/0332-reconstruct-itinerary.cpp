class Solution {
    unordered_map<string, list<string>> flightMap;
    list<string> result; //implpemented as doubly linked list
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for (auto& ticket : tickets) {
            string origin = ticket[0];
            string dest = ticket[1];
            if (flightMap.find(origin) != flightMap.end()) {
                flightMap[origin].push_back(dest);
            } else {
                flightMap[origin] = {dest};
            }
        }

        for (auto& pair : flightMap) {
            pair.second.sort();
        }

        DFS("JFK");

        vector<string> itinerary(result.begin(), result.end());
        return itinerary;
    }

private:
    void DFS(string origin) {
        if (flightMap.find(origin) != flightMap.end()) {
            auto& destList = flightMap[origin];
            while (!destList.empty()) {
                string dest = destList.front();
                destList.pop_front();
                DFS(dest);
            }
        }
        result.push_front(origin); 
    
        }
    
};