/*
##---------------------------------------BASIC--------------------------------------------##
So far the operations using C program are done on a prompt / terminal which is not stored anywhere. But in the software industry, most of the programs are written to store the information fetched from the program. One such way is to store the fetched information in a file. Different operations that can be performed on a file are: 
 

Creation of a new file (fopen with attributes as “a” or “a+” or “w” or “w++”)
Opening an existing file (fopen)
Reading from file (fscanf or fgets)
Writing to a file (fprintf or fputs)
Moving to a specific location in a file (fseek, rewind)
Closing a file (fclose)
The text in the brackets denotes the functions used for performing those operations.


Opening or creating file 
For opening a file, fopen function is used with the required access modes. Some of the commonly used file access modes are mentioned below.
File opening modes in C: 
 

“r” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. If the file cannot be opened fopen( ) returns NULL.
“rb” – Open for reading in binary mode. If the file does not exist, fopen( ) returns NULL.

“w” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

“wb” – Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.

“a” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

“ab” – Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created.

“r+” – Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. Returns NULL, if unable to open the file.

“rb+” – Open for both reading and writing in binary mode. If the file does not exist, fopen( ) returns NULL.

“w+” – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.

“wb+” – Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.

“a+” – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.

“ab+” – Open for both reading and appending in binary mode. If the file does not exist, it will be created.

As given above, if you want to perform operations on a binary file, then you have to append ‘b’ at the last. For example, instead of “w”, you have to use “wb”, instead of “a+” you have to use “a+b”. For performing the operations on the file, a special pointer called File pointer is used which is declared as 
 

FILE *filePointer; 

So, the file can be opened as 

filePointer = fopen(“fileName.txt”, “w”)
The second parameter can be changed to contain all the attributes listed in the above table.



##-----------------------------------------------------------------------------------------##


##------------------------------Reading from a file--------------------------------------------##

The file read operations can be performed using functions fscanf or fgets. Both the functions performed the same operations as that of scanf and gets but with an additional parameter, the file pointer. So, it depends on you if you want to read the file line by line or character by character.
And the code snippet for reading a file is as: 

FILE *filePointer;
filePointer=fopen("filename.txt","r");
fscanf(filePointer,"%s %s %s %d",s1,s2,s3,&year);

##-------------------------------Writing a file--------------------------------------------##

The file write operations can be performed by the functions fprintf and fputs with similarities to read operations. The snippet for writing to a file is as : 
 
FILE *filePointer ; 

filePointer = fopen(“fileName.txt”, “w”);

fprintf(filePointer, "%s %s %s %d", "We", "are", "in", 2012);


##-------------------------------Closing a file--------------------------------------------##

After every successful fie operations, you must always close a file. For closing a file, you have to use fclose function. The snippet for closing a file is given as : 
 
FILE *filePointer ; 

filePointer= fopen(“fileName.txt”, “w”);

---------- Some file Operations -------

fclose(filePointer)



*/



//MLD:



#include<stdio.h>
#include<string.h>
/*
	  		0X0A(10) -> Line Feed / New Line
	'\n' ->
			0X0D(13) -> Carriage Return
*/
/*
	FILE is a structure.
 
	FILE* fopen(char* File_Path,char* Mode);
	->Returns NULL on failure.
	
	Mode:
	"r"	-> Open a existing text file for read.
	"r+" -> Open a existing text file for read / write.
			(Doesn't erase the whole file. Overlaps.)
	"w"	-> Create a new text file for write.
			(If already exists erases all data of previous one.)
	"w+" -> Create a new text file for read / write
			(If already exists erases all data of previous one.)
	"a"	-> Append at the end of a existing text file or Create a new file for write.		
	"a+" -> Append at the end of a existing text file or Create a new text file for 		read / write.
	rb,rb+,wb,wb+,ab,ab+ -> For binary files.


"r" =Open an existing file for reading only.

"w" = Open a new file for writing only. If a file with the specified file-namecurrently exists, it will be destroyed and a new file created in its place.

"a" = Open an existing file for appending (i.e., for adding new information at the end of the file). A new file will be created if the file with the specified file-namedoes not exist.

"r+" Open an existing file for both reading and writing.

"w+"" Open a new file for both reading and writing. If a file with the specified file-namecurrently exists,it will be destroyed and a new file created in its place.

"a+" Open an existing file for both reading and appending. A new file will be created if the file with the specified file-namedoes not exist.





	fclose(FILE* );
	-> Save changes.
	fflush(FILE* );
	fscanf(FILE*,"%d" , &variable);
	fgets(String_Name,Maximum_Size_Of_Input_String,FILE*)
	fprintf(FILE*,"%d" , variable);
	fputs(String_Name,FILE*)
	int fgetc(FILE*);
	fputc(char,FILE*);
	freopen(File_Path,Mode,stdin); 
	fread(&Variable,size,num,FILE*);
	fwrite(&Variable,size,num,FILE*);
	fseek(FILE*,To,From);
	From-> SEEK_SET
		   SEEK_CUR
		   SEEK_END
	ftell(FILE*);		
*/


int main()
{

	FILE* Ptr1;
	Ptr1=fopen("Data.txt","w");
	if(!Ptr1) return 1;
	fprintf(Ptr1,"%d\n",1905072);
	fprintf(Ptr1,"Dihan\n"); 
	fputs("Pass\n",Ptr1);   // Unlike puts , needs \n for new line
	fputc('X',Ptr1);
	fputc('\n',Ptr1);
	fputc('X',Ptr1);
	fclose(Ptr1);


	int Roll;
	char Name[10];
	Ptr1=fopen("Data.txt","r");
	if(!Ptr1) return 2;
	fscanf(Ptr1,"%d",&Roll);
	fgets(Name,19,Ptr1);	// Unlike gets , string size can be limited
	fgetc(Ptr1);
	fclose(Ptr1);


	// To use normal functions while working with files
	// freopen("Input.txt","r",stdin);		
	// freopen("Output.txt","w",stdout);	// Can't go to normal stream


	Ptr1=fopen("Data.txt","r");
	if(!Ptr1) return 3;
	fseek(Ptr1,0,SEEK_END);
	long a=ftell(Ptr1);		// Measure size character by character in text mode
	printf("%d",a);
	fclose(Ptr1);


	// Read whole file
	Ptr1=fopen("Data.txt","r");
	if(!Ptr1) return 4;
    while (fgetc(Ptr1) != EOF) {
      ++n;
    }
    if (feof(Ptr1)) {
      puts ("End-of-File reached.");
      printf ("Total number of bytes read: %d\n", n);
    }
    else puts ("End-of-File was not reached.");
    fclose(Ptr1);
}

