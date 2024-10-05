#include <stdio.h>

int main(){

    /*
        escape sequence: character combination consisting of a backslash \ 
        followed by a letter or combimation of digits.
        They specify actions within a line or string of text.

        \n = newline
        \t = tab
    */
   /*printf("I like pizza!\n");
    printf("I\nlike\npizza!\n");
    printf("It's really good!!!\n");
    printf("1\t2\t3");
    printf("\"I like Pizza\" - Abraham Lincoln probably");
    return 0;
    */

   // variable: Allocated space in memory to store a value.
   //           We refer to a variable's name to access the stored value.
   //           That variable now behaves as if it was the value it contains.
   //           BUT we need to declare what type of data we are storing.

   int x; //declaration
   x = 123; //initialization
   int y = 321; // declaration and initialization

    int age = 21; // integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s\n", name);
    printf("You are %d age years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %f\n", gpa);

   return 0;
}