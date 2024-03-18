/*
my approach where i failed:
class Solution {
public:
    stack<char> q;

    int calculate(string s) {
        int i = 0;
        while (s[i] != '\0') {
            int sum = 0;
            if (s[i] != ')'&&s[i] != ' ') {
                q.push(s[i]);
            } 
            else {
                char t=q.top();
                while ( t != '(') {
                    int n = 1;
                    int first = 0, second = 0;
                    while (isdigit(q.top())) {
                        first = (q.top() - '0') + first * n;
                        n *= 10;
                        q.pop();
                    }
                    if (!q.empty()) {
                        char op = q.top();
                        q.pop();
                        n = 1;
                        while (isdigit(q.top())) {
                            second = (q.top() - '0') + second * n;
                            n *= 10;
                            q.pop();
                        }
                        if (!q.empty()) {
                            char mul = q.top();
                            q.pop();
                            if (mul == '-') {
                                second = -second;
                            }
                            if (op == '+') {
                                sum = first + second;
                            } else {
                                sum = first - second;
                            }
                            t=q.top();
                            string sumString = to_string(sum);
                            for (char c : sumString) {
                                q.push(c);
                            }
                        }
                    }
                }

            }
            i++;
        }

        int fin = 0;
        int n = 1;
        while (!q.empty() && isdigit(q.top())) {
            fin = (q.top() - '0') +fin*n;
            n *= 10;
            q.pop();
        }

        return fin;
    }
};


*/