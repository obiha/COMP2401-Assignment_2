#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAX         27
#define STRING_SIZE 1000
#define CONVERT     32

int main(){

    char  userInputArr [STRING_SIZE];
    char* morse        [29]           =  {".- ","-... ","-.-. ","-.. ",". ","..-. ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ","-. ","--- ",".--. ","--.- ",".-. ","... ","- ","..- ","...- ",".-- ","-..- ","-.-- ","--.. ","  ","? "};
    char  alphabet     [29]           =  {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','?'};
    char  userInput    [STRING_SIZE];


    printf("Enter the sentence to be converted:\n");
    scanf("%[^\n]", userInput);

    // printf("String: %s\n", userInput);

    //UPPER CASE
    for(int i = 0; i < strlen(userInput); i++){
        if(userInput[i] >= 'a' && userInput[i] <= 'z'){
            userInput[i] = userInput[i] - 32;}
        
        if(userInput[i] >= '0' && userInput[i] <= '9'){
            userInput[i] = '?';
        }
        if(userInput[i] >= '!' && userInput[i] <= '/'){
            userInput[i] = '?';
        }
        if(userInput[i] >= ':' && userInput[i] <= '@'){
            userInput[i] = '?';
        }
        if(userInput[i] >= '[' && userInput[i] <= '`'){
            userInput[i] = '?';
        }
         if(userInput[i] >= '{' && userInput[i] <= '~'){
            userInput[i] = '?';
        }
        }


    // printf("String: %s\n", userInput);
    
 

    printf("\n");
    printf("Here is your sentence in Morse Code:\n");
    char *str = userInputArr;

    for (int i = 0; i < strlen(userInput); i++){str[i] = userInput[i] ;}


    // for (int i = 0; i < strlen(userInput); i++){printf("%c", str[i]);}

     for(int j = 0; j < strlen(userInput); j++){
         for( int i = 0; i < sizeof(morse)/sizeof(morse[0]); i++){
              if(str[j] == alphabet[i]){
                printf("%s", morse[i]);}
                
         }
        
     }


      printf("\n");
      printf("\n");

    
    return 0;


}
