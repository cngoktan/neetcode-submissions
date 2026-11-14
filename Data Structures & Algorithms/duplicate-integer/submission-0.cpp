class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        for (unsigned i = 0; i < nums.size(); ++i) {
            if (map.find(nums[i]) != map.end()) return true;
            map[nums[i]] = i;
        }
        return false;
    }
    
};