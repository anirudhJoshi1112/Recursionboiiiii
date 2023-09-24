class Solution {
  public:
  int pagal(int arr[],int s,int e,int val) {
        // code here
        if(s>e){
            return -1;
        }
        int mid=s+(e-s)/2;
        if(arr[mid]==val){
            return mid;
        }
        if(arr[mid]<val){
            return pagal(arr,mid+1,e,val);
        }
        else{
            return pagal(arr,s,mid-1,val);
        }
    }
    int binarysearch(int arr[], int n, int k) {
        // code here
        int ans=pagal(arr,0,n-1,k);
        return ans;
    }
};
