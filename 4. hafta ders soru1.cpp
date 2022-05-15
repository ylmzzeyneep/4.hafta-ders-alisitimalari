#include <stdio.h>
int fun(int A[], int n){
	int x;
	if(n==1)
	  return A[0];
	  
	else
	  x=fun(A, n-1);
	  
	if(x>A[n-1])
	  return x;
	  
	else
	  return A[n-1]; 
	       
}
    int main(){
    	int arr[]={12, 10, 300, 50, 100};
		printf("%d", fun(arr,5));
		getchar();
		return 0;	}
