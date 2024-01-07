//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{  
    int n = src.length();
    int count = 0;
    int i = 0;
    string ans = "";
    while(i<n)
    {
        char a = src[i];
        ans+=a;
        while(src[i]==a)
        {
            count+=1;
            i+=1;
        }
        ans+=to_string(count);
        count=0;
    }
    return ans;
    //Tried with the map not worked
//   int n = src.length();
//   unordered_map<char,int>m;
//   string ans="",temp="";
//   for(int i=n-1;i>=0;i-=1)
//   {
//       m[src[i]]++;
//   }
//   for(auto &x:m)
//   {
//       ans+=x.first;
//       temp = to_string(x.second);
//       ans+=temp;
//   }
//   return ans;
}     
 
