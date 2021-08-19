// the names of variables, functions, labels, and various other user-defined items are called identifiers.

// The first character must be a letter or an underscore, and subsequent characters must be either letters, digits, or underscores.

// An identifier cannot be the same as a C keyword and should not have the same name as functions that are in the C library.






//An identifier is a collection of alphanumeric characters that begins either with an alphabetical character or an underscore,
// which are used to represent various programming elements such as variables, functions, arrays, structures, unions, labels, etc.

// There are 52 alphabetical characters (uppercase and lowercase), underscore character, and ten numerical digits (0-9) that represent the identifiers. 
//There is a total of 63 alphanumerical characters that represent the identifiers.


//######################### Rules for constructing C identifiers#############################//

// The first character of an identifier should be either an alphabet or an underscore, and then it can be followed by any of the character, digit, or underscore.

// It should not begin with any numerical digit.

// In identifiers, both uppercase and lowercase letters are distinct. Therefore, we can say that identifiers are case sensitive.

// Commas or blank spaces cannot be specified within an identifier.

// Keywords cannot be represented as an identifier.

// The length of the identifiers should not be more than 31 characters.

// Identifiers should be written in such a way that it is meaningful, short, and easy to read.



// Example of valid identifiers

// total, sum, average, _m _, sum_1, etc.  

// Example of invalid identifiers

// 2sum (starts with a numerical digit)  
// int (reserved word)  
// char (reserved word)  
// m+n (special character, i.e., '+')







//Type:

// Internal Identifier

// If the identifier is not used in the external linkage, then it is known as an internal identifier. The internal identifiers can be local variables.

// External Identifier

// If the identifier is used in the external linkage, then it is known as an external identifier. The external identifiers can be function names, global variables.