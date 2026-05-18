class Solution {
public:
    bool isValid(string s) {
        stack<char> lol;
        unordered_map<char,char> closeToOpen={
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c:s){
            if(closeToOpen.count(c)){
                if(!lol.empty() && lol.top() == closeToOpen[c] ){
                    lol.pop();
                }else{
                    return false;
                }
            }else{
                lol.push(c);
            }
        }
        return lol.empty();
    }
};
