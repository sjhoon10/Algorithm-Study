class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0; nums.size(); i++)
        {
            int n = target - nums[i];
            if(mp.find(n) != mp.end())
            {
                return {mp[n], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
