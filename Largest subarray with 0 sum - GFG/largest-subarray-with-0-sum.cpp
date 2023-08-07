//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
       int sum = 0;
        int len = 0;
        unordered_map<int, int> mp;
        
        for (int j = 0; j < n; ++j) {
            sum += A[j];
            
            if (sum == 0) {
                len = max(len, j + 1); // Subarray from index 0 to j has zero sum
            }
            
            if (mp.find(sum) == mp.end()) {
                mp[sum] = j;
            } else {
                len = max(len, j - mp[sum]);
            }
        }
        
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends