
//program to print n numbers
void printnum(n){
  if(n==0){
    return;
  }
cout<<n<<endl;
printnum(n-1);
}
