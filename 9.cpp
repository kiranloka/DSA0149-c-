#include<stdio.h> 
int main() 
{ 
   foo();
}  
int foo() 
{ 
   printf("Hello"); 
   return 0;  
}


// the program doesnt run in c++ cause foo is not declared and printf is not the function to get output in c++
Error in both C and C++
b) Warning in both C and C++
c) Error in C++ but Warning in C
d) Error in C but Warning in C++
View Answer
Answer: c
Explanation: In C++ all the functions should be declared before it is called otherwise the C++ compiler will give an error but in case of C the compiler just gives a warning and the program can be executed.
