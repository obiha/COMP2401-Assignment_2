#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAX         27
#define STRING_SIZE 27

int main(){

char *morse[2][28] = {{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","   "},
                    {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"," "}};


//GETTING USER's word/sentence
printf("Enter the sentence to be converted:\n");
char userInput[STRING_SIZE];
scanf("%[^\n]", userInput);


printf("\n");

//CONVERTS USER's word/sentence to UPPERCASE
for(int i = 0; i < strlen(userInput); i++){
    if(userInput[i] >= 'a' && userInput[i] <= 'z'){userInput[i] = userInput[i] - 32;}}

printf("ALL CAPS: %s\n", userInput);


int size = sizeof(morse[0])/sizeof(morse[0][1]);

printf("%d\n", size);

// // printf("Here is your sentence in Morse Code:");
// for(int i = 0; i < strlen(userInput); i++){
// for(int j = 0; j < sizeof(morse[0])/sizeof(morse[0][0]); j++){
//     if(strcmp(userInput[i], morse[1][0]) == 0){
//         printf("%s", morse[0][j]);
//     }

//         // printf("%c", userInput[i]);

// }
// }


if(strcmp(userInput[0], morse[1][0]) == 0){
    printf("This works");
}


return 0;


}
