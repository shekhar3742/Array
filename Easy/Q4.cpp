#include<iostream>

using namespace std;

int removeduplicates(int arr[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            arr[i+1]= arr[j];
            i++;
        }

    }
   return i+1;
}




int main(){

    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    for(int i=1; i<=n ; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array :"<<endl;
    for(int i=1; i<=n ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<removeduplicates(arr,n)<<endl;
    return 0;

}

