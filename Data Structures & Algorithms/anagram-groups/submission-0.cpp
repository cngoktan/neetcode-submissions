class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> map;
        for (const auto& s : strs) {
            string sortedS = s;
            std::sort(sortedS.begin(), sortedS.end());
            map[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& e : map) {
            result.push_back(e.second);
        }
        return result;
    }
};
