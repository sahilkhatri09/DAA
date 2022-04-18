#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){

     for(int i=0;i<n;i++){
         int temp=i;
         for(int j=i+1;j<n;j++){
             if(arr[j]<arr[temp]){
                 temp=j;
                 swap(arr[temp],arr[i]);
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
    selectionSort(arr,n);
    cout<<"Elements after sorting are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}