/*
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int n=0;
        int i=0;
        while(s[i]!='\0'){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                st.pop();
                }
                else{
                    n++;
                }
            }
            i++;
        }
        return n+int(st.size());
        // return max(n,int(st.size()));
    }
};
Time complexity: O(n)
Space complexity: O(n)
*/