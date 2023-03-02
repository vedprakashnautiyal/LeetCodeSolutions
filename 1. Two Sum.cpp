//---------------------------------------------------My Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
    return ans; 
    }
};

//------------------------------------------------------Best Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end()); //nlogn
        int i=0, j=n-1;
        while(i<j){
            if(v[i].first+v[j].first<target){
                i++;
            } 
            else if(v[i].first+v[j].first>target){
                j--;
            }
            else{
                break;
            }
        }
        vector<int> ans;
        ans.push_back(v[i].second);
        ans.push_back(v[j].second);
        return ans;
    }
};

//-----------------------------------------------------------------2nd Best Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;

        for (int i =0; i<nums.size(); i++){
            if (mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
        return {0,0};
    }
};