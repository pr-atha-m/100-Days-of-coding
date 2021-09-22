//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{

    public:
    
    
    bool isSubstr(string &s , string &b){
        if(s.find(b)!=string::npos){
            return true;
        }
        
        return false;
    }
  
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        int a = A.length();
        int b = B.length();
        
        
        // we have to make length of a equal to just greater than b
        int sz = ceil((float)b/a);
        
        string ans = "";
        for(int i=0;i<sz;i++){
            ans+= A;
        }
       
        if(isSubstr(ans , B)){
            return sz;
        }
        
        ans = ans+A;
      
        if(isSubstr(ans , B)){
            return sz+1;
        }
        
        return -1;
        
        
        
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
