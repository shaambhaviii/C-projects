#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for seeding

int main(){
    int random,guess;
    int no_of_guess = 0;
    srand(time(NULL)); //seeding function, so on the basis of current time srand will be seed 
    printf("Welcome to World of Guessing Numbers");
    printf("(This is a small part of shamv's universe)");
    random = rand() %100 +1; //rand generated a decimal number between 0 to 1 (in java)
    // in c we will be gpoing for mod func as quotient can be large but remainder will be small.
    //generating between 0 to 100
    // printf("number generated %d",random);

    do {
        printf("\nPlease enter your Guess between (1 to 100):");
        scanf("%d",&guess);
        no_of_guess++;
        
        if(guess<random){
            printf("Guess larger number.\n");
        }
        else if(guess>random){
            printf("Guess smaller number.\n");
        }
        else{
            printf("Congratulations!!! You have guessed the Number in %d attempts",no_of_guess);
        }
        
    }while(guess!=random);
    printf("\nBye Bye Thanks for playing");
    printf("\nDeveloped by Shamv:)");

    return 0;
}
