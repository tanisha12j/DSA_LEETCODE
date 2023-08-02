//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string oddEven(string S) {
        // code here
        unordered_map<char,int>mp;
        int x=0;
        int y=0;
        
        for(int i=0;i<S.size();i++)
        {
            mp[S[i]]++;
        }
        for(auto it : mp)
        {
            char ch=it.first;
            int val=ch-'a'+1;
            if(val % 2 == 0 && it.second % 2 == 0)
            {
                x++;
            }
            else if( val % 2 !=0 && it.second % 2 !=0)
            {
                y++;
            }
        }
        int cnt=x+y;
        string ans;
        if(cnt % 2 == 0)
        {
            ans="EVEN";
        }
        else
        {
            ans="ODD";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}

// } Driver Code Ends