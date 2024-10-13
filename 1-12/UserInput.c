#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name???");
    // scanf("%s", name); //does not include white spaces
    fgets(name, 25, stdin); //can read any white spaces. also includes \n by default
    name[strlen(name)-1] = '\0';

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}