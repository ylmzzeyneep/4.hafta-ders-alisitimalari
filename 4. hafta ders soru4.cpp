#include <stdio.h>
unsigned int multiply(unsigned int x, unsigned int y){
	if(x<0){
		return 0;
	}
	else if(x>1){
		return y + multiply(x-1, y);
	}
	    return 0;}
	     
	int main(){
		printf("7 times 5 is %d", multiply(7,5));
		return 0;
	}    
