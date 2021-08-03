/*
 C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.
C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. They are:


1)malloc()
2)calloc()
3)free()
4)realloc()


##-----------------------------------Malloc()---------------------------##
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. 
It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Iniatialize memory at execution time so that it has initializes each block
with the default garbage value initially.

Syntax:
 ptr=(cast_type*)malloc(byte_size);

examople:
int *ptr;
ptr=(int*)malloc(10*sizeof(int));

Since the size of int is 4 bytes, this statement will allocate 40 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.



// Malloc returns a void* pointer to a block of memory stored in heap .

void* malloc(size_t size);

int main()
{
	int *a=(int*)malloc(sizeof(int)*0);
	//To store writable string
	//int *Name="Nahid";//Incorrect //RTead only

	char *Name=(char*)malloc(sizeof(char)*(strlen("Nahid")+1));
   strcpy(Name,"Nahid");

   free(a);//Free heap objects,not array objects;

// What if negative number is passed to malloc ?
	// Malloc takes size_t value . Since size_t is a unsigned integer , the negative integer will be converted to corresponding unsigned int .


2D Array : 4 * 10

 int r=4,c=10;
 int **x=(int**)malloc(sizeof(int*)*r);
 int i;
 for(i=0;i<r;i++)
 {
	*(x+i)=(int*)malloc(sizeof(int)*c);
 }
 //Free
 for(i=0;i<r;i++)
 {
	free(*(x+1));
 }
 free(x);


}



##------------------------------------------calloc()-----------------------------------------------##

“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. 
it is very much similar to malloc() but has two different points and these are:
1)It initializes each block with a default value ‘0’.
2)It has two parameters or arguments as compare to malloc().

Syntax:
int *ptr;
ptr=(cast_type*)caloc(n,element_size);
here, n is the no. of elements and element-size is the size of each element

ptr = (float*) calloc(25, sizeof(float));
This statement allocates contiguous space in memory for 25 elements each with the size of the float.




//2D array:
int i;
int **array;
// allocate the 2d array
array = (int **)calloc(MAXROWS,sizeof(int*));
for(i = 0; i < MAXROWS; i++)
array[i] = (int*)calloc(MAXCOLS,sizeof(int));

// destroy the 2d array
for(i = 0; i < MAXROWS; i++)
free(array[i]);
free(array);


##-----------------------------------------------free()---------------------------------------------##
“free” method in C is used to dynamically de-allocate the memory. The memory allocated using functions malloc() and calloc() is not de-allocated on their own.
Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

Syntax:

free(ptr);

int *ptr=(int*)malloc(5*sizeof(int));
free(ptr);



##------------------------------------------realloc()---------------------------------------------------##
“realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a previously allocated memory. 
In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory.
re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

 syntax:
 ptr=realloc(ptr,new_size);

 int *ptr=(int*)malloc(5*sizeof(int));

   ptr=realloc(ptr,10*sizeof(int));

*/
