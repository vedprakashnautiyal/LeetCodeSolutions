//------------------------------------------------------------My Approach
class Solution {
public:
    int mostWordsFound(vector<string>& s) {//sentences
        vector<int> counter;
        int word_count;
        for (int i=0;i<s.size();i++){
            word_count=1;
            for (int j=0;j<s[i].length();j++){
                if(s[i][j]==' '){
                    word_count++;
                }
                counter.push_back(word_count);
            }
        }
        return *max_element(counter.begin(),counter.end());
    }
};

//-----------------------------------------------------------Best Approach (Optimised Space)
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = INT_MIN;
        
        for(auto it:sentences)
        {
            int c= 0;
            for(auto s:it)
            {
                if(s==' ')
                c++;
            }
         ans = max(ans,c+1);
        }
    return ans; 
    }
};