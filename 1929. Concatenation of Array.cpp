//-----------------------------------------------------------My Approach / Best Approach
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> v;
        int i;
        int size=nums.size();
        for (i=0;i<size;i++){
            v.push_back(nums[i]);
        }
        for (i=0;i<size;i++){
            v.push_back(nums[i]);
        }
        return v;
    }
};