/*
class Solution {
public:
   stack<char> q;
    bool isValid(string s) {
        int i=0;
        while(s[i]!='\0') {
            if((s[i]=='(')||(s[i]=='[')||(s[i]=='{')){
                q.push(s[i]);
            }
            else if(s[i]==')'){
                if(q.empty()||q.top()!='('){
                    return false;
                }
                q.pop();
            }
            else if(s[i]==']'){
               if(q.empty()||q.top()!='['){
                    return false;
                }
                q.pop();
            }
            else if(s[i]=='}'){
                 if(q.empty()||q.top()!='{'){
                    return false;
                }
                q.pop();
            }
            i++;
        }
        return q.empty();
    }
};
*/