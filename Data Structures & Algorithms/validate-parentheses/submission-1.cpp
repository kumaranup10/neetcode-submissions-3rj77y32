class Solution {
public:
    bool isValid(string s) {
        stack<char>t;

        for (auto c : s) {
            if (c == '(' || c == '{' || c == '[')
                t.push(c);
            else {
                if (t.empty()) return false;

                if ((c == ')' && t.top() == '(') || 
                    (c == '}' && t.top() == '{') || 
                    (c == ']' && t.top() == '['))
                    t.pop();
                else 
                    return false;
            }
        }
        return t.empty();
    }
};
