#include<stdio.h>
#include<errno.h>
//  Many of the functions return the value of the macro EOF to indicate unsuccessful completion of the operation .
// Since EOF is used to report both end of file and random errors, it’s often better to use the feof function to check explicitly for end of file and ferror to check for errors.


int main()
{
	FILE* Ptr=fopen("Data.txt","w ");
	if(!Ptr)
	{
		perror("Error printed by perror ");
		return 1;
	}
    while (fgetc(Ptr) != EOF);		// Since the file is opened in write , but trying to read it . fgetc() will return EOF .
    if (feof(Ptr)) 		// feof() will return 0 since Ptr doesn't reach end of file
    {
      	puts ("End-of-File reached.");
      	perror("Error printed by perror ");
    }
    else if(ferror(Ptr))	  // ferror() will return non-zero value as there's a error
    {
    	puts("Error reading file .");
    	perror("Error printed by perror ");		 
    }
    fclose(Ptr);
}



//perror:
//The C library function void perror(const char *str) prints a descriptive error message to stderr.
//First the string str is printed, followed by a colon then a space

#include <stdio.h>

int main () {
   FILE *fp;

   /* first rename if there is any file */
   rename("file.txt", "newfile.txt");

   /* now let's try to open same file */
   fp = fopen("file.txt", "r");
   if( fp == NULL ) {
      perror("Error: ");
      return(-1);
   }
   fclose(fp);
      
   return(0);
}
//Let us compile and run the above program that will produce the following result because we are trying to open a file which does not exist −

Error: : No such file or directory
