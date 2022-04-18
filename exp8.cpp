#include<iostream>
using namespace std;
int main(){

    cout<<endl;
    cout<<"Sahil Khatri - 2020UII7414"<<endl;
    cout<<endl;
    cout<<"Enter dimension of matrix :";
  
    int n;
    cin>>n;
      cout<<endl;
    int arr1[n][n];
    int arr2[n][n];
    int arr3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter "<<i<<j<<" element of 1st matrix :";
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter "<<i<<j<<" element of 2nd matrix :";
            cin>>arr2[i][j];
        }
    }
   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"The matrix after multiply are :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<endl;
}