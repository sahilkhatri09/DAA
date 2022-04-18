#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
     for(int i=0;i<n-1;i++){
         for(int j=0;j<n-i-1;j++){
             if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
             }
         }
     }
    
}

int main(){

    cout<<endl;
    cout<<"Sahil Khatri - 2020UII7414"<<endl;
    cout<<endl;
    int n;
    cout<<"Enter no. of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element no. "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;
    bubbleSort(arr,n);
    cout<<"Elements after sorting are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}