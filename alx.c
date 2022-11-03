#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
#include<windows.h>
 
void main(){
    /*I made some experments to see the range of the letters

    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char smallLetters[] = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < strlen(letters); i++){
        printf("%i\n", letters[i]);
    }

    for(int i = 0; i < strlen(smallLetters); i++){
        printf("%i\n", smallLetters[i]);
    }*/
    

    char userName[10];
    int userNameLower[10];
    printf("Please enter your username in W3Schools: ");
    scanf("%s", &userName);

    // the code below is to convert the user input to lower case
    for(int i = 0; i < strlen(userName); i++){
        userNameLower[i] = userName[i] + 32;
        if(userNameLower[i] >= 65 && userNameLower[i] <= 122){
           userName[i] = userNameLower[i];
        } else {
            continue;
        }
    }



    int userNameUpper[10];

    if(userName[0] == 'a' && userName[1] == 'l' && userName[2] == 'x'){
        for(int i = 0; i < strlen(userName); i++){
            userNameUpper[i] = userName[i] - 32;
            userName[i] = userNameUpper[i];
        }
        printf("Hello %s!\n", userName);
        sleep(1.5);
        printf("I hope you are fine and doing well\n");
        sleep(2 );
        printf("Thanks for the lesson, I wanted to do this program for you in JavaScript but...\n");
        sleep(3 );
        printf("I couldn't do that bro :( and I made it in C instead\n");
        sleep(2);
        printf("I know this is disapointing\n");
        sleep(1.8);
        printf("But don't worry I will keep try to learn JavaScript and I will make this in JavaScript\n");
        sleep(3.5);
        printf("And thank you again\n");
        sleep(1.5);
        printf("I hope you liked this :)\n");
    } else {
        printf("Sorry :( this wasn't made for you");
    }

}

