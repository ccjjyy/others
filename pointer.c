// This is my tutorial of pointer

//--------------------------------------
// How to use the name of a multi-array?
//--------------------------------------

#include "stdio.h" 

int main(){
	int array[2][4] = {1,2,3,4,5,6,7,8};
	
	printf("%d\n", **array);        // array[0][0] = 1
	printf("%d\n", **(array+1));    // array[1][0] = 5
	
	printf("%d\n", *array[1]);      // array[1][0] = 5
	printf("%d\n", *(array[1]+1));  // array[1][1] = 6
	
	return 0;
}


//----------------------------------------------------
// How to use the pointers as the function parameters?
//----------------------------------------------------

#include "stdio.h" 

void printArray1(int (*pointer)[4]);
void printArray2(int (*pointer)[4], int n);

int main(){
	int array[3][4] = {{1,2,3,4},
			               {5,6,7,8},
			               {9,10,11,12}};
	int (*pointer)[4], count;
	pointer = array;
	
	for(count=0; count<3; count++){
		printArray1(pointer++);
	}
	
	puts("\n\nPress Enter...");
	getchar();
	
	printArray2(array, 3);
	
	return 0;
}

// Functions declarations
void printArray1(int (*pointer)[4]){  // Notice int *pointer[4]
	int *p, count;
	p = (int *)pointer;                 // Casting
	
	for(count=0; count<4; count++){
		printf("\n%d", *p++);
	}
}

void printArray2(int (*pointer)[4], int n){
	int *p, count;
	p = (int *)pointer;
	
	for(count=0; count<(4*n); count++){
		printf("\n%d", *p++);
	}
}

