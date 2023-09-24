class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    if(n==0){
	        return 0;
	    }
	    if(n==1){
	        return arr[0];
	    }
	    else{
	        int ans=sum(arr+1,n-1);
	        int total=arr[0]+ans;
	        return total;
	    }
	}
};
