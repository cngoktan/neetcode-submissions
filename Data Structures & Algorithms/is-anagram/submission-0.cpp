class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;
        std::unordered_map<char, int> s_map, t_map;
        for (const auto e : s) {
            if (s_map.find(e) == s_map.end()) s_map[e] = 1;
            else {
                ++s_map[e];
            }
        }
        for (const auto e : t) {
            if (t_map.find(e) == t_map.end()) t_map[e] = 1;
            else {
                ++t_map[e];
            }
        }
        return s_map == t_map;
    }
};
