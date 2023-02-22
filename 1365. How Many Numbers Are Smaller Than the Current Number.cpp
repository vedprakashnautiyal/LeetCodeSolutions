//---------------------------------------------------------Best Approach

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int s=nums.size();
        vector<int> v;
        for (int i=0;i<s;i++)
        {
            int n=0;
            for (int j=0;j<s;j++)
            {
                if(nums[i]>nums[j])
                {
                    n++;
                }
            }
            v.push_back(n);
        }
        return v;
    }
};