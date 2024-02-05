class Solution {
public:
    bool isValid(string s) {
        stack <char> _s;
        for (char c:s){
            switch(c) {
                case '(':
                case '{':
                case '[':
                    _s.push(c);
                    break;
                case ')':
                    if (!_s.empty() && _s.top() == '('){
                        _s.pop();
                        break;
                    } else {
                        return false;
                    }
                case '}':
                    if (!_s.empty() && _s.top() == '{'){
                        _s.pop();
                        break;
                    } else {
                        return false;
                    }
                case ']':
                    if (!_s.empty() && _s.top() == '['){
                        _s.pop();
                        break;
                    } else {
                        return false;
                    }
            }
        }
        return _s.empty();
    }
};