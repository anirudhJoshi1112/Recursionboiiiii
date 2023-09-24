class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        if(n==0 || n==1){
            return 1;
        }
        if(arr[0]>arr[1]){
            return 0;
        }
        else{
            bool ans=arraySortedOrNot(arr+1,n-1);
            return ans;
        }
    }
};
