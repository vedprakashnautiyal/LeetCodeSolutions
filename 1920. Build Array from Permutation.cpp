//---------------------------------------------------------------------My Approach
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> v;
        for (int i=0;i<nums.size();i++){
            v.push_back(nums[nums[i]]);
        }
        return v;
        
    }
};


//------------------------------------------------------------Best Approach
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};