class Solution {
public:
    bool isValid(string s) {
        string stack;  // using string to simulate stack

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push_back(ch);  // push opening bracket
            } else {
                if (stack.empty()) return false;  // no opening to match

                char top = stack.back();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    stack.pop_back();  // matched, pop it
                } else {
                    return false;  // mismatched bracket
                }
            }
        }

        return stack.empty();  // should be empty if all matched
    }
};
