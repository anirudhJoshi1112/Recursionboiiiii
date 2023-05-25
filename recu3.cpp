#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int younger=power(n-1);
    int elder=2*younger;

    return elder;
}

int main(){
    int n;
    cin>>n;
    int ans=power(n);

    cout<<ans<<endl;
    return 0;
}
