## Read me  <br>
### This is all about C ###

C Keywords and Identifiers<br>
Character set<br>
A character set is a set of alphabets, letters and some special characters that are valid in C language./**/
<br>Keywords <br>
Keywords are the reserved words in C language. These are the words which have a special meaning in C language.
These are predefined words which cannot be used as a variable name, function name or any other identifier.
There are 32 keywords in C language. The list of keywords in C language is given below.
<br> <br> 'auto, break, case, char, const, continue, default, do, double, else, enum, extern, float, for, goto, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while'
<br><br>
Identifiers <br>
An identifier is a name used to identify a variable, function, class, module or any other user-defined item.
An identifier starts with a letter A to Z, a to z or an underscore _ followed by zero or more letters, underscores and digits (0 to 9).
For example, all the following are valid identifiers −
mohd, johndoe, _val, val2 etc.
The following are not valid identifiers −
123abc, -val, *cde etc.<br>
C Constants<br>
Constants are fixed values that the program may not alter during its execution.
Constants can be of any of the basic types like int, float, char, double etc.
Constants can be declared and used in C in various ways.
For example, the following are all valid constants −
10, 20.5, "C Programming", 'C'<br>
C Variables<br>
Variables are nothing but reserved memory locations to store values.
This means that when you create a variable you reserve some space in memory.
Based on the data type of a variable, the operating system allocates memory and decides what can be stored in the reserved memory.
Therefore, by assigning different data types to variables, you can store integers, decimals or characters in these variables.
<br>C Data Types<br>
C is a strongly typed language.
This means that every variable has a specific type, which determines the size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied to the variable.
C supports the following basic data types −
Type Description
int Integer
char Character
float Floating point
double Floating point
void Void<br>
C Variable Scope<br>
Scope of a variable is the region of the program where the variable is recognized.
Variables can be declared at any of the three places −
Inside a function or block which is known as local variable.
Outside of all functions which is known as global variable.
Inside the body of a function but outside any block is known as static variable.
<br>C Storage Classes<br>
Storage classes are used to specify the scope (visibility) and life-time of variables and/or functions within a C Program.
These specifiers precede the type that they modify.
There are four storage classes in C −
Type Description
auto The auto storage class is the default storage class for all local variables.
register The register storage class is used to define local variables that should be stored in a register instead of RAM.
static The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope.
extern The extern storage class is used to give a reference of a global variable that is visible to ALL the program files.
C Type Qualifiers
Type qualifiers are used to modify the type of a variable that is being declared.
They precede the data type.
There are two type qualifiers in C −
Type Description
const The const type qualifier is used to declare constants.
volatile The volatile type qualifier is used to indicate that a variable may change its value between different accesses.
C Operators
Operators are special symbols in C that carry out arithmetic or logical computations.
The value that the operator operates on is called the operand.
C language is rich in built-in operators and provides the following types of operators −<br>
Arithmetic Operators<br>
Relational Operators<br>
Logical Operators<br>
Bitwise Operators<br>
Assignment Operators<br>
Misc Operators<br><br>
C Arithmetic Operators<br>
The following table lists all the arithmetic operators supported by C language.
Assume variable A holds 10 and variable B holds 20, then −
Operator Description Example
+ Addition Adds values on either side of the operator. A + B will give 30
- Subtraction Subtracts right hand operand from left hand operand. A - B will give -10
* Multiplication Multiplies values on either side of the operator. A * B will give 200
/ Division Divides left hand operand by right hand operand. B / A will give 2
% Modulus Divides left hand operand by right hand operand and returns remainder. B % A will give 0
++ Increment Increments the value of operand by 1. A++ will give 11
-- Decrement Decrements the value of operand by 1. A-- will give 9
C Relational Operators
The following table lists all the relational operators supported by C language.
Assume variable A holds 10 and variable B holds 20, then −
Operator Description Example
== Checks if the values of two operands are equal or not, if yes then condition becomes true. (A == B) is not true.
!= Checks if the values of two operands are equal or not, if values are not equal then condition becomes true. (A != B) is true.
> Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true. (A > B) is not true.
< Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true. (A < B) is true.
>= Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true. (A >= B) is not true.
<= Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true. (A <= B) is true.
C Logical Operators

