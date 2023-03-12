//-------------------------------------------------My Approach / Best Approach
class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> v;
        if(n%2!=0){
            v.push_back(0);
        }
        for(int i=0;i<n/2;i++){
            v.push_back(n-i);
        }
        for(int i=0;i<n/2;i++){
            v.push_back(i-n);
        }
        return v;
    }
};