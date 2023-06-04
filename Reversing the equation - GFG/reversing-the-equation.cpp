//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string> st;
            stack<char> c;
            int i=0;
            string temp="";
            int n = s.length();
            
            while(i<n){
                if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
                    st.push(temp);
                    temp="";
                    c.push(s[i]);
                }
                else{
                    temp += s[i];
                }
                i++;
            }
            st.push(temp);
            
            s = "";
            
            while(c.size()){
                s += st.top();
                s.push_back(c.top());
                
                st.pop();
                c.pop();
            }
            
            s += st.top();
            
            return s;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends