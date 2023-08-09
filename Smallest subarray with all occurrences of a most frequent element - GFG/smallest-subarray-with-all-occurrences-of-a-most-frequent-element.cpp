//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    vector<int> smallestSubsegment(int a[], int n)
    {
        unordered_map<int, int> freqMap;
    unordered_map<int, int> startIndices;
    int maxFreq = 0, minLen = n, subsegmentStart = 0;

    for (int i = 0; i < n; i++)
    {
        freqMap[a[i]]++;

        if (startIndices.find(a[i]) == startIndices.end())
        {
            startIndices[a[i]] = i;
        }

        if (freqMap[a[i]] > maxFreq || (freqMap[a[i]] == maxFreq && i - startIndices[a[i]] < minLen))
        {
            maxFreq = freqMap[a[i]];
            minLen = i - startIndices[a[i]];
            subsegmentStart = startIndices[a[i]];
        }
    }

    vector<int> ans;
    for (int i = subsegmentStart; i <= subsegmentStart + minLen; i++)
    {
        ans.push_back(a[i]);
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    vector<int > v;
	    Solution ob;
	    v = ob.smallestSubsegment(a, n);
	    for(int i:v)
	        cout<< i << " ";
	    cout<<"\n";
	}
return 0;
}

// } Driver Code Ends