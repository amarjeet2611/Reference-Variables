#include<iostream>
using namespace std;
int main(){
    //square matrix
int n;
cin>>n;
//creating
int** arr=new int*[n];
for(int i=0;i<n;i++){
    arr[i]=new int[n];
}
//taking input
 for(int i=0; i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
 }

//taking output
 for(int i=0; i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
 }
 //releasing memory
 for(int i=0;i<n;i++){
    delete []arr[i];
     }
     delete []arr;
}