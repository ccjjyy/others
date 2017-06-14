// This is my tutorial of pointer

//--------------------------------------------
// Notice how to use the name of a multi-array
//--------------------------------------------

#include "stdio.h" 

int main(){
	int array[2][4] = {1,2,3,4,5,6,7,8};
	
	printf("%d\n", **array);        // array[0][0] = 1
	printf("%d\n", **(array+1));    // array[1][0] = 5
	
	printf("%d\n", *array[1]);      // array[1][0] = 5
	printf("%d\n", *(array[1]+1));  // array[1][1] = 6
	
	return 0;
}












