#include<stdio.h>
//1st way
void passingArray(int *arrptr)
{ int n=sizeof(arrptr);
	for(int i=0;i<n;i++)
		arrptr[i]+=2;
	//blah blah....
}
//2nd way...
void passingArray2(int arra[])
{ int n=sizeof(arra)/sizeof(arra[0]);
	for (int i = 0; i < n; ++i)
	{
		arra[i]+=2;
	}
}
int main()
{
 //----------------------indexing:-----------------------------------------
     // Use of negative array index

	// Array size can't be negative
	int a[10]={1,2,3,4,5,6,7,8,9,10};

	// Accessing
	//a[5] /5[a];
	//*(a+5)/*(5+a)
	int *p=a+4;//1+4=5th element
printf("%d\n",*p);
	printf("%d\n",p[-3]);//5-3=2nd element		// Negative array index is valid , if it is accesing a valid address .

	//-----------------------------initialize-------------------------------------

	int c[10]={1,2,3,4,5,6,7,8,9,10};
	int e[]={1,2,3,4,5,6,7,8,9,10};
	// int e[]={};	// sizeof(e) = 0

	int x[10]={1,2,[5]=3,[9]=4};
	int f[10]={1,2,[5]=8,[7]=5};//bakigula=0
	//Range wise[start...end]//3 ta dot
	int b[10]={[0 ... 5] = 3 , [7 ... 9] = 4};//[6]=0
	int d[10]={[0 ... 4] = 1, [5 ... 9] = 2};
	int i;

	printf("size=%d\n",sizeof(e));
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}printf("\n");
	for(i=0;i<10;i++)
    {
        printf("%d ",f[i]);

    }printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",d[i]);
    }printf("\n");


	int V[i];  // Variable length array
	// Variable length arrays can't be initialized
	// This is valid for block scope or prototype scope , not for file scope
	// Local Variable Length array is valid .Global Variable Length array is not valid .


//-----------------passing array to a function----------------------------------

	int arra[5]={1,2,3,4,5};
	//int array[n];//then input
	//passingArray(array,n);//n shoho pathatey hobey..jkono function a..
	passingArray2(arra);
	//if arra have no given size..we have to pass the size too..

}
