//-------------------------------------------------------My Approach
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value=0;
        for (auto x:operations){
            if(x=="--X"||x=="X--") value--;
            else value++;
        }
    return value;
    }
};

//------------------------------------------------------Best Approach
class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int count=0 ;
        for(int i=0;i<op.size();i++)
        {
            if(op[i]=="X++" || op[i]=="++X")
                count++ ;
            if(op[i]=="X--" || op[i]=="--X")
                count-- ;
        }
        return count ;
    }
};