//---------------------------------------------------------------My Approach
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector <int> ans;
        for (int i=0;i<accounts.size();i++){
            int sum=0;
            for (int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
    }
};

//---------------------------------------------------------------Best Approach (Optimised My Approach)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector <int> ans;
        int n=accounts.size();
        int m=accounts[0].size();
        for (int i=0;i<n;i++){
            int sum=0;
            for (int j=0;j<m;j++){
                sum+=accounts[i][j];
            }
            ans.push_back(sum);
        }
        return *max_element(ans.begin(),ans.end());
    }
};

//---------------------------------------------------------------2nd Best Approach
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=INT_MIN;
        int n=accounts.size();
        int m=accounts[0].size();

        for(int i=0;i<n;i++){
            int wealth=0;
            for(int j=0;j<m;j++)
            {
                wealth+= accounts[i][j];
            }
            maxwealth=max(maxwealth,wealth);
        }

        return maxwealth;
    }
};