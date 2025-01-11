#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));


    printf("----WELCOME TO THE WORLD OF NUMBER GUESSING GAME----");
    random=rand()%100+1; 
    do {
        printf("\nPlease enter your guess between (1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess<random){
            printf("guess a larger number");
        }else if(guess > random){
            printf("guess a smaller number");
        }else{
            printf("----CONGRATULATIONS!!! You have guessed the right number in %d attempts----",no_of_guess);

        }


    }while(guess!=random);

    printf("\n TNANK YOU FOR PLAYING \n made by : radhika ");
}