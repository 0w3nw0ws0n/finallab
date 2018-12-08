#include <stdio.h>
#include <string.h>

//* Assignment:
//1. fix bugs in the code
//2. add comments
//3. create a new branch on git
//4. git push changed buggy.c
//5. create pull request with your name and changes you made
//6. Send a screenshot of your pull request and put it in the dropbox

struct dog
{
        int age;
        char name[10]; //character value needs to be next to variable, no equals sign needed
};


void main()
{
        struct dog thing1; //no parentheses needed around dog
        struct dog thing2;

        thing1.age = 5; //no brackets needed for 5
        thing2.age = 13;

        puts("What is your dogs name? "); //regular parenthese needed not brackets
        gets(thing1.name); //change to "name" not "names"

        strcpy(thing2.name, "Buster"); //looks good

        printf("Name: %s\n",thing1.name ); //needs to be a string 
        printf("Age: %i\n",thing1.age); 
        printf("Thing2 Name: %s\n", thing2.name); //quotations need to be around "Thing2 Name: %s\n"
        printf("Thing2 Age %i\n", thing2.age); // put quotation around "Thing2 Age %i\n"
}
