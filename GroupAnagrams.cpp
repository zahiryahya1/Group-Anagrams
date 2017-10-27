#include <algorithms>
#include <unordered_map>


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string,vector<string>> mymap;
    unordered_map<string,vector<string>>::iterator got;
    string temp;
    
    for (int i = 0; i < strs.size(); i++) {
            
        temp = strs[i];
        sort(temp.begin(), temp.end());
            
        got = mymap.find(temp);
            
        if (got != mymap.end()) {
            (got->second).push_back(strs[i]);
        }
        else {
            vector<string> anagramList;
            anagramList.push_back(strs[i]);
            mymap.insert({temp, anagramList});
        }
            
    }
        
    for (auto it = mymap.begin(); it != mymap.end(); it++) {
        result.push_back(it->second);
    }
        
    return result;
}
