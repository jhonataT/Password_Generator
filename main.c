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
        printf("\n\n\n-----------WELCOME---------------------\n\n");
        int passwords = 0, r = 0;
        int password[8];
        scanf("%d", &location_command);
        while(passwords < location_command){
            for(int i = 0; i < 8; i++){
                r = 48 + rand() % 10;
                password[i] = r;
            }
            printf("Password %d: ", passwords + 1);
            for(int i = 0; i < 8; i++){
                printf("%c", password[i]);
            }
            printf("\n");
            ++passwords;
        }
        printf("\n---------------------------------------\n\n");
    }

    void get_out(){
        return;
    }

    void help_the_user(){
        system("clear");
        printf("\n\n\n-----------WELCOME---------------------\n");
        printf("\n  TO OBTAIN PASSWORDS YOU WILL ONLY NEED TO ENTER AS MANY PASSWORDS AS YOU WANT.\n\n");   
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
