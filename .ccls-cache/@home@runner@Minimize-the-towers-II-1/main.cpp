#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr , arr+n);
        int maximum=arr[n-1],minimum=arr[0];
        int diff= arr[n-1]-arr[0];
        
        for( int i=1;i<n;i++){
            if(arr[i]-k<0)continue;
            maximum = max(arr[i-1]+k,arr[n-1]-k);
            minimum = min(arr[0]+k, arr[i]-k);
            diff=min(diff,maximum-minimum);
        }
        return diff;
    }
int main(){
  int n, k;
  cin>>n;
  cin>>k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<endl;
  cout<<getMinDiff(arr, n, k)<<endl;
}