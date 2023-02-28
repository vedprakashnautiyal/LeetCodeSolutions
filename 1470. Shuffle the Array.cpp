//-----------------------------------------------------------------------My Approach (Bad Approach)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> v1;
        vector <int> v2;
        vector <int> v3;
        for (int i=0;i<n;i++){
            v1.push_back(nums[i]);
        }
        for (int i=n;i<2*n;i++){
            v2.push_back(nums[i]);
        }
        for (int i=0;i<n;i++){
            v3.push_back(v1[i]);
            v3.push_back(v2[i]);
        }
        return v3;
    }
};


//-----------------------------------------------------------------Best Approach
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }
        return v;
    }
};