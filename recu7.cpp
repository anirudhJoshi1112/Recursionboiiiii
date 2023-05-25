#include<iostream>
using namespace std;

void yeeee(int src,int des){
    cout<<"source"<<src<<"destination"<<des<<endl;
    if(src==des){
        cout<<"you have successfully reached out to the destination"<<endl;
        return ;
    }
    src++;
    yeeee(src,des);
}


int main(){
    int src=1;
    int des=10;
    yeeee(src, des);
    return 0;

}
