//Double-slashes are used to write a single line comment in C. Always mention your Name and Student ID on the top of your code before submitting the assignment.
//Name: Foram Shah
//Student ID: 80XXXXXXX

#include <stdio.h> //stdio.h is a library that lets you use standard functions like printf()

//main() is a mandatory function in the primary C program. It is the first function to be executed when the program runs.
int main(void) { 

  int x = 5; //This is how you declare a variable of integer datatype.

  float num = 5.432; //float datatype consist of decimals.

  char character = 'z'; //char datatype consists of a single character.

  //printf() is to print something on the screen. and \n is to print something on the next line.
  printf("Num = %d \n", x); //%d is a placeholder for integer.

  //print multiple variables.
  printf("Character = %c \nNum2 = %f \n", character, num); //%c is a placeholder for character and %f is a placeholder for float.");

  int y = 10;
  int sum = x+y; //adding two variables.
  printf("Sum = %d \n", sum);


  //Your task is to declare an integer variable 'z', store the value of multiplication (x*y*z) and addition (x+y+z) in new variables, then print both the results.


  return 0;
}