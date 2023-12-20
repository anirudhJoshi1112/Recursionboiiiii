#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int index,int n){
    if(index==n){
        return;
    }
    cout<<arr[index]<<" ";
    return print(arr,index+1,n);
}
int main() {
    int arr[5]={2,3,1,5,6};
    print(arr,0,5);
}
