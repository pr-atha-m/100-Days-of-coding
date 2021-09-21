//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{
    
    public:
    int maxCandy(int he[], int n) 
    { 
        // Your code goes here
        int i = 0;
        int j = n-1;
        int max1 = 0;
        while(i<j){
            
            int ans = min(he[i] , he[j])*(j-i-1);
            
            max1 = max(max1 , ans);
            if(he[i]>=he[j]){
                j--;
            }
            
            else{
                i++;
                
            }
            
        }
        
        return max1;
    }   
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int height[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>height[i];
    	}
    	
    	Solution obj;
    	
    	cout << obj.maxCandy(height,n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
