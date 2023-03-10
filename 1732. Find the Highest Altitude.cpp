//-------------------------------------------------My Approach / Best Approach
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        vector <int> v;
        v.push_back(sum);
        for (int i=0;i<gain.size();i++){
            sum+=gain[i];
            v.push_back(sum);
        }

        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};