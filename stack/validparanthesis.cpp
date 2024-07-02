class Solution {
public:
    bool isValid(string s) {
        stack<char> st1;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                st1.push(ch);
            } else {
                if (!st1.empty()) {
                    char top = st1.top();
                    if ((ch == ')' && top == '(') ||  
                        (ch == '}' && top == '{') ||                            
                        (ch == ']' && top == '[')) {
                        st1.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return st1.empty();
    }
};
