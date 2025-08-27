#include<bits/stdc++.h>
using namespace std;

//Better Approach -> T.C = O(2N)
int second(int arr[], int n){
    int largest = arr[0];
    int Slargest = INT_MIN;    
    for ( int i = 0; i < n; i++)
    {
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    for(int i=0; i< n ; i++){
        if(arr[i]>Slargest && arr[i]!=largest){
            Slargest = arr[i];
        }
        
    }
    return Slargest;

    
}

// optimal approach T.C -> O(N)

int second(int arr[], int n){
    int largest= arr[0];
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largest){           
            slargest = largest; 
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
    
}

int main(){
    int n;
    cout<<"Enter array size : "<<endl;
    cin>>n;  
    int arr[n];
    
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Array : ";
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<second(arr,n)<<endl;

    return 0;
}