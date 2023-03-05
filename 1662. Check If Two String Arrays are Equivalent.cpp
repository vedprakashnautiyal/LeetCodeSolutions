//----------------------------------------------------My Approach / Worst Approach
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        for(auto x:word1){
            w1+=x;
        }
        for(auto y:word2){
            w2+=y;
        }
        return w1==w2;
    }
};


//A slight modification increases efficiency
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        for(auto x:word1){
            w1+=x;
        }
        for(auto y:word2){
            w2+=y;
        }
        if(w2==w1) return true;
        else return false;
    }
};