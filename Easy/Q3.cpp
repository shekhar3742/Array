#include<iostream>
using namespace std;

// Note :- array ka agar graph me plot kare to peak hamesha 1 bar hi aayega usse jada nhi aayega kam aa sakta hai par jada nhi 

void sortedandrotated(int arr[], int n){
    int count = 0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]) count++;

    }
    if(arr[n-1]>arr[0]) count++;
    if(count <=1) cout<<"true";
    else cout<<"false";


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
   sortedandrotated(arr,n);
    
}