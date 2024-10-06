#include <stdio.h>
#include <stdbool.h> // must use for booleans

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

   /*
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
   */

  // data types
  char a = 'C';                 // single character %c
  char b[] = "Yeet";            // array of characters %s

  float c = 3.141592;           // 4 bytes (32 bits of precision) 6 - 7 digits %f
  double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 -16 digits lf

  bool e = true;                // 1 byte (true or false) %d 

  char f = 100;                 // 1 byte (-128 to +127) %d or %c
  unsigned char g = 255;        // 1 byte (0 to +255) %d or %c

  short int h = 32767;          // 2 bytes (-32,768 to +32,767) %d
  unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

  int j = 2147483647;           // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  unsigned int k = 4294967295;    // 4 bytes (0 to +4,294,967,295) %u

  long long int l = 9223372036854775807;  // 8 bytes (-9 quintillion to +9 quintillion) %lld
  unsigned long long int m = 18446744073709551615U;  // 8 bytes (0 to +18 quintillion) %llu

  printf("%f\n", c); //float
  printf("%lf\n", d); //double
  printf("%d\n", e);
  printf("%d\n", h);  // short
  printf("%d\n", i);  // unsigned short
  printf("%d\n", j);  // int
  printf("%u\n", j);  // unsigned int
  printf("%lld\n", l); //long long int
  printf("%llu\n", m); //unsigned long long int

  return 0;
}