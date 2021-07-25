/*
C is a general-purpose, structured programming language. Its instructions consist of 
terms that resemble
algebraic expressions, augmented by certain English keywords such as if, else, for, do 
and while. In this
respect C resembles other high-level structured programming languages such as Pascal 
and Fortran. C also
contains certain additional features, however, that allow it to be used at a lower 
level, thus bridging the gap
between machine language and the more conventional high-level languages. This 
flexibility allows C to be
used for systems programming (e.g., for writing operating systems) as well as for 
applications programming
(e.g., for writing a program to solve a complicated system of mathematical equations,
 or for writing a program
to bill customers).
C is characterized by the ability to write very concise source programs, due in part to 
the large number of
operators included within the language. It has a relatively small instruction set, 
though actual implementations
include extensive library functions which enhance the basic instructions. Furthermore, 
the language
encourages users to write additional library functions of their own. Thus the features 
and capabilities of the
language can easily be extended by the user.



C compilers are commonly available for computers of all sizes, and C interpreters are
 becoming
increasingly common. The compilers are usually compact, and they generate object 
programs that are small
and highly efficient when compared with programs compiled from other high-level 
languages. The
interpreters are less efficient, though they are easier to use when developing a new 
program. Many
programmers begin with an interpreter, and then switch to a compiler once the program 
has been debugged
(i.e., once all of the programming errors have been removed).

Another important characteristic of C is that its programs are highly portable, even 
more so than with
other high-level languages. The reason for this is that C relegates most 
computer-dependent features to its
library functions. Thus, every version of C is accompanied by its own set of library 
functions, which are
written for the particular characteristics of the host computer. These library fbnctions are relatively
standardized, however, and each individual library function is generally accessed in 
the same manner from
one version of C to another. Therefore, most C programs can be processed on many 
different computers with
little or no alteration.


Structure of a C Program:

Every C program consists of one or more modules calledfunctions. One of the functions 
must be called main.
The program will always begin by executing the main function, which may access other 
functions. Any other
function definitions must be defined separately, either ahead of or after main.


Each function must contain:
1. A function heading, which consists of the function name, followed by an optional 
list of arguments,enclosed in parentheses.

2. A list of argument declarations,if arguments are included in the heading.

3. A compound statement, which comprises the remainder of the function.

*/