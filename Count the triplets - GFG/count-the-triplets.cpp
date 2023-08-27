//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{

	    // Your code goes here
	    //TLE CODE
	   // sort(arr,arr+n);
	   // int count=0;
	   // for(int i=0;i<n;i++)
	   // {
	   //     for(int j=i+1;j<n;j++)
	   //     {
	   //         int sum=arr[i]+arr[j];
	   //         for(int k=j+1;k<n;k++)
	   //         {
	   //             if(arr[k]==sum)
	   //             {
	   //                 count++;
	   //             }
	   //         }
	   //     }
	   // }
	   // return count;
	   
	   //3sum
	   int count = 0;
    //int n = arr.size();
    
    // Sort the array
    sort(arr,arr+n);

    for (int i = n - 1; i >= 2; i--) {
        int left = 0;
        int right = i - 1;

        while (left < right) {
            if (arr[left] + arr[right] == arr[i]) {
                count++;
                left++;
                right--;
            } else if (arr[left] + arr[right] < arr[i]) {
                left++;
            } else {
                right--;
            }
        }
    }

    return count;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends