class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        string temp="";
        
        stack<char> st;
        int i=0, len = s.length();
        
        while(i<len){
            switch(s[i]){
                case '(' : 
                    if(st.size()>=1)
                        temp.push_back(s[i]);
                    st.push(s[i]);
                    break;
                case ')' : 
                    if(st.top() == '('){
                        if(st.size()>1)
                            temp.push_back(s[i]);
                        st.pop();
                    }            
            }  
            i++;
        }
        
        return temp;
    }
};