class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // key is the difference, value is the index
        std::unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); ++i) {
            int e = nums[i];
            if (map.find(e) != map.end()) return {map[e], i};
            int s = std::abs(target - e);
            map[s] = i;
        }
        return {-1, -1};
    }
};
