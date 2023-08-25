class Solution {
public:
    bool isValid(string str) {
        stack<int> s;
        for (char it: str){
            switch(it){
                case '(':
                    s.push(0);
                    break;
                case '[':
                    s.push(1);
                    break;
                case '{':
                    s.push(2);
                    break;
                case ')':
                    if (s.empty()) {
                      return false;
                    }
                    if (s.top() == 0) {
                        s.pop();
                    } else {
                        return false;
                    }
                    break;
                case ']':
                    if (s.empty()) {
                      return false;
                    }
                    if (s.top() == 1) {
                        s.pop();
                    } else {
                        return false;
                    }
                    break;
                case '}':
                    if (s.empty()) {
                      return false;
                    }
                    if (s.top() == 2) {
                        s.pop();
                    } else {
                        return false;
                    }
                    break;
                default:
                break;
            }
        }
        if (s.empty()) {
            return true;
        } else {
            return false;
        }   
    }
};