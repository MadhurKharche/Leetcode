//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string ans="";
        int i = 0;
        stack<char> st;
        
        while(i < s.length()){
            switch(s[i]){
                case '(' : 
                    if(st.size() >= 1)
                        ans.push_back(s[i]);
                    st.push(s[i]);
                    break;
                    
                case ')' : 
                    if(st.size() > 1)
                        ans.push_back(s[i]);
                    st.pop();
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends