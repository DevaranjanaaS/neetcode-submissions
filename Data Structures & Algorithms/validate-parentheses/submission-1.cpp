class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{') para.push(c);
            else{
                if(c==')'){
                    if(para.empty()) return false;
                    char temp=para.top();
                    if(temp!='(') return false;
                    para.pop();
                }
                else if(c==']'){
                    if(para.empty()) return false;
                    char temp=para.top();
                    if(temp!='[') return false;
                    para.pop();
                }
                else if(c=='}'){
                    if(para.empty()) return false;
                    char temp=para.top();
                    if(temp!='{') return false;
                    para.pop();
                }
            }
        }
        if(!para.empty()) return false;
        return true;
    }
};
