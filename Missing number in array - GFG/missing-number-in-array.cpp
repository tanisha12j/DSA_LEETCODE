//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
         int xor_arr = 0;
    int xor_N = 0;

    // XOR all elements in the array
    for (int i = 0; i < n - 1; ++i) {
        xor_arr ^= array[i];
    }

    // XOR all numbers from 1 to N
    for (int i = 1; i <= n; ++i) {
        xor_N ^= i;
    }

    // The missing number is the XOR of xor_arr and xor_N
    int missing_number = xor_arr ^ xor_N;

    return missing_number;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends