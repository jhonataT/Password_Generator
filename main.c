#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// *****************
    int location_command;
    // Universal variable to call functions.
// *****************
    void get_word_and_generates_passwords(){
        system("clear");
        printf("\n\n\n-----------WELCOME---------------------\n");
        printf("TYPE 2 WORDS: ");
        char word1[500], word2[500];
        scanf("%s %s", word1, word2);
        printf("\n---------------------------------------\n");
        printf("%s %s\n", word1, word2);
        int passwords = 0, r;
        char password[8];
        while(passwords < 10){
            r = 500 + (rand() % 600);
            printf("random: %d\n", r);
            ++passwords;
        }

    }

    void get_out(){
        return;
    }

    void help_the_user(){
        system("clear");
        printf("\n\n\n-----------WELCOME---------------------\n");
        printf("\n  TO OBTAIN PASSWORDS YOU WILL ONLY NEED TO ENTER 2 WORDS.\n\n");   
        printf("        [1] Ok, I UNDERSTAND AND I WANT TO PROCEED.\n");
        printf("\n        [2] EXIT.\n");
        printf("\n---------------------------------------\n");
        scanf("%d", &location_command);
        location_command == 1 ? get_word_and_generates_passwords() : get_out(); 
    }

    int main(){
        system("clear");
        printf("\n\n\n-----------WELCOME---------------------\n");
        printf("\n\n\n  TYPE 1 OR 2 TO PROCEED.\n    1. HELP.\n    2. GET PASSWORDS.\n");
        printf("\n\n\n---------------------------------------\n");
        scanf("%d", &location_command);
        location_command == 1 ? help_the_user() : get_word_and_generates_passwords(); 
    }
