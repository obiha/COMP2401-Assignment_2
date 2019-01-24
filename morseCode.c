#include <stdio.h>
#include <string.h>


#define MAX  26
#define STRING_SIZE 1000


int main(){

char morse[MAX][STRING_SIZE] = {
".-", //A
"-...",//B
"-.-.",//C
"-..",//D
".",//E
"..-.",//F
"--.",//G
"....",//H
"..",//I
".---",//J
"-.-",//K
".-..",//L
"--",//M
"-.",//N
"---",//O
".--.",//P
"--.-",//Q
".-.",//R
"...",//S
"-",//T
"..-",//U
"...-",//V
".--",//W
"-..-",//X
"-.--",//Y
"--..",//Z

};


printf("Enter the sentence to be converted:");

//GETTING USER'S WORD/SENTENCE


char userInput[STRING_SIZE];

scanf("%[^\n]", userInput);



printf("\n");

printf("Here is your sentence in Morse Code:");
printf("%s\n", userInput);



printf("SIZE OF SENTENCE: %lu\n", strlen(userInput));


printf("SIZE OF MORSE ARRAY %lu\n", sizeof(morse)/sizeof(morse[0]));



return 0;


}