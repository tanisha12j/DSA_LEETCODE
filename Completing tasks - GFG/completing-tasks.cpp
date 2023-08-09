//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    pair<vector<int>, vector<int>> findTasks(int *arr, int m, int n) {
        // code here
         unordered_map<int, int> mp;

        for (int i = 0; i < m; i++) {
            mp[arr[i]]++;
        }
        vector<int> p1;
        vector<int> p2;

        int i = 1;
        bool flag = true;
        while (i <= n) {
            if (mp.find(i) == mp.end() && flag == true) {
                p1.push_back(i);
                flag = false;
                mp[i]++;
            } else if (mp.find(i) == mp.end() && flag == false) {
                p2.push_back(i);
                flag = true;
                mp[i]++;
            }
            i++; // Increment i to prevent an infinite loop
        }
        return make_pair(p1, p2); // Use
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.findTasks(arr, m, n);
        for (auto x: ans.first) {
            cout << x << " ";
        }
        cout << "\n";
        for (auto x: ans.second) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends