int posChar(std::string s) {
    return s.find_last_of('(');
}

std::string stackStrReplace(int posStart, std::string s) {
    std::stack<char> st;
    for (int i = posStart + 1; i < s.length(); i++) {
        if (s[i] == ')') break;
        st.push(s[i]);            
    }
    
    std::string result = "";
    while (st.size()) {
        result += st.top();
        st.pop();
    }
    return result;
}

std::string reverseString(int posStart, std::string s) {
    std::string strReplace = stackStrReplace(posStart, s);
    s.replace(posChar(s), strReplace.length() + 2, strReplace);
    return s;
}

std::string reverseInParentheses(std::string s) {
    
    while (true) {
        
        int posStart = posChar(s);
        if (!(posStart >= 0 && posStart <= s.size()-1)) {
            break;
        }
        
        s = reverseString(posStart, s);
        
    }
    
    return s;

}
