/*
class Solution {
public:
    string decodeString(string s) {
        stack<string> str;
        stack<int>mul;
        string res;
        int num;
        int i=0;
        while(s[i]!='\0'){
            if(isdigit(s[i])){
                num=num*10+s[i]-'0';
            }
            else if(isalpha(s[i])){
                res=res+s[i];
            }
            else if(s[i]=='['){
                str.push(res);
                mul.push(num);
                res="";
                num=0;
            }
            else if(s[i]==']')
            {
                string dec=str.top();
                int m=mul.top();
                str.pop();
                mul.pop();
                for(int i=0;i<m;i++){
                    dec=dec+res;
                }
                res=dec;
            }
            i++;
        }
        return res;
    }
};

Time complexity: O(n)
Space complexity: O(n)
*/