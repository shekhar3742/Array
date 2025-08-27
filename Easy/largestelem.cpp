#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i<= n-1; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest;
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
    cout<<largest(arr,n)<<endl;

    return 0;
}


// Note -> Take the first element as largest and compare it with rest of element
// T.C -> O(n)