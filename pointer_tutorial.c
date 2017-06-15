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
	int array[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
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
	p = (int *)pointer;  // Casting
	
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


//-------------------------------
// How to use the array pointers?
//-------------------------------

#include "stdio.h" 

void printStrings(char *p[], int len);

int main(){
	char *pointers[4] = {"your", "one", "brown", "cat"};
	printStrings(pointers, 4);
	
	return 0;
}

void printStrings(char *p[], int len){
	int count;
	
	for(count=0; count<len; count++){
		printf("%s ", p[count]);
	}
}


//----------------------------------
// How to use the function pointers?
//----------------------------------

#include "stdio.h" 

void chosingFunction(void (*p)());
void one();
void two();

int main(){
	void (*p)();  // Notice the difference of: void *p()
	int choose;
	
	for(;;){
		printf("\nEnter an integer 1 or 2, 0 to exit: ");
		scanf("%d", &choose);
		
		if(choose==0){
			break;
		}
		else if(choose==1){
			p = one;
		}
		else if(choose==2){
			p = two;
		}
		
		chosingFunction(p);
	}
	
	return 0;
}


void chosingFunction(void (*p)()){
	p();
}

void one(){
	puts("The one function.");
}

void two(){
	puts("The two function.");
}
