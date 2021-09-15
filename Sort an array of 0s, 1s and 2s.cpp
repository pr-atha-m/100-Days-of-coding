


 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int start = 0; // for zeros
        int mid = 0;  // for ones
        
        int end = n-1; // for twos.
        
        
        while(mid<=end){
            if(a[mid] == 0){
                swap(a[mid] , a[start]);
                start++;
                mid++;
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid] , a[end]);
                end--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
