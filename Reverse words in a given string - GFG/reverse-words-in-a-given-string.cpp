//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string temp = "";
        stack<string> st;
        
        int i=0;
        
        while(S[i] != '\0'){
            if(S[i]=='.'){
                st.push(temp);
                temp = "";
            }
            else
                temp.push_back(S[i]);
            i++;
        }
        
        temp.push_back(S[i]);
        st.push(temp);
        
        S = "";
        
        while(st.size()){
            S += st.top() + ".";
            st.pop();
        }
        S.pop_back();
        
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends