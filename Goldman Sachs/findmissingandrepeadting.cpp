//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>a;
        // use unordered map only no map TLE occurs-
        unordered_map<int,int>m;
        // Count occurrences of the elements in the array
            for(int i=0;i<n;i+=1)
            {
                m[arr[i]]+=1;
            }
        // check the frq and store it into the vec
            for(int i=1;i<n+1;i+=1)
            {
                if(m[i]==2)
                {
                    a.push_back(i);
                }
            }
      //if the no is missing then the elem frq is 0 then push into vector
            // Find the missing value
            for (int i = 1; i <n+1; ++i) {
                if (m[i] == 0) { // Identify the missing value
                    a.push_back(i);
                }
            }
            return a;
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
