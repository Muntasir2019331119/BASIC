/*
Some applications involve the use of data files to store blocks of data, where each block consists of a fixed number of contiguous bytes. Each block will generally represent
a complex data structure, such as a structure or an array.
For example, a data file may consist of multiple structures having the same composition, or it may contain multiple arrays of the same type and size. 
For such applications it may be desirable to read the entire block from the data file, or write the entire block to the data file, rather than reading or writing the 
individual components (i.e., structure members or array elements) within each block separately.
The library functions fread and fwrite are intended to be used in situations of this type. These functions are often referred to as unformatted read and write functions.
Similarly, data files of this type are often referred to as unformatted data files.
Each of these functions requires four arguments: a pointer to the data block, the size of the data block, the number of data blocks being transferred, and the stream pointer.



For writing in file, it is easy to write string or int to file using fprintf and putc, but you might have faced difficulty when writing contents of struct. 
fwrite and fread make task easier when you want to write and read blocks of data.

fwrite : Following is the declaration of fwrite function

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)

ptr - This is pointer to array of elements to be written
size -  This is the size in bytes of each element to be written
nmemb - This is the number of elements, each one with a size of size bytes
stream - This is the pointer to a FILE object that specifies an output stream

// C program for writing 
// struct to file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
// a struct to read and write
struct person 
{
    int id;
    char fname[20];
    char lname[20];
};
  
int main ()
{
    FILE *outfile;
      
    // open file for writing
    outfile = fopen ("person.dat", "w");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opend file\n");
        exit (1);
    }
  
    struct person input1 = {1, "Muntasir", "Mamun"};
    struct person input2 = {2, "Mahir", "Labib"};
      
    // write struct to file
    fwrite (&input1, sizeof(struct person), 1, outfile);
    fwrite (&input2, sizeof(struct person), 1, outfile);
      
    if(fwrite != 0) 
        printf("contents to file written successfully !\n");
    else 
        printf("error writing file !\n");
  
    // close file
    fclose (outfile);
  
    return 0;
}
Output:

contents to file written successfully!



//
fread : Following is the declaration of fread function
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
ptr - This is the pointer to a block of memory with a minimum size of size*nmemb bytes.
size - This is the size in bytes of each element to be read.
nmemb - This is the number of elements, each one with a size of size bytes.
stream - This is the pointer to a FILE object that specifies an input stream.

// C program for reading 
// struct from a file
#include <stdio.h>
#include <stdlib.h>
  
// struct person with 3 fields
struct person 
{
    int id;
    char fname[20];
    char lname[20];
};
  
// Driver program
int main ()
{
    FILE *infile;
    struct person input;
      
    // Open person.dat for reading
    infile = fopen ("person.dat", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
      
    // read file contents till end of file
    while(fread(&input, sizeof(struct person), 1, infile))
        printf ("id = %d name = %s %s\n", input.id,
        input.fname, input.lname);
  
    // close file
    fclose (infile);
  
    return 0;
}
Output:


id = 1   name = Muntasir Mamun
id = 2   name = Mahir Labib

*/


