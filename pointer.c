// This is my tutorial of pointer

//--------------------------------------------
// Notice how to use the name of a multi-array
//--------------------------------------------

#include "stdio.h" 

int main(){
	int array[2][4] = {1,2,3,4,5,6,7,8};
	
	printf("%d\n", **array);
	printf("%d\n", **(array+1));
	
	printf("%d\n", *array[1]);
	printf("%d\n", *(array[1]+1));
	
	return 0;
}












