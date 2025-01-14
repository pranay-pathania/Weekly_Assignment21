/**Kadane’s Algorithm
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1**/



// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        int max_here = 0;
        int max = INT_MIN;
        for(int i = 0 ;i<n ;i++){
            max_here = max_here + arr[i];
            if(max_here > max )max = max_here;
            if(max_here<0)max_here=0;
        }
        return max;

        // Your code here

    }
};

// { Driver Code Starts.

int main()
{
    int t,n;

    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

        cin>>n; //input size of array

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
