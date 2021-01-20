#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    printf("You have Rs.%d\n", 200);
    printf("one chance = rs.20/ how mouch chance need 1-10: ");
    int outOfGuess;
    scanf("%d", &outOfGuess);//run time
    int outBalance = outOfGuess * 20;
    int userBalance = 200 - outBalance;//user balance
    printf("%d\n", userBalance);
    if(10 >= outOfGuess){
        for(int x = 1; x <= outOfGuess; x++){
            int luckyNumber = rand() % 11;
            printf("Guess: ");
            int userGuess;
            scanf("%d", &userGuess);
            if(userGuess == luckyNumber){
                userBalance += 50;
                printf("You win Rs.50 ::balance = Rs.%d\n", userBalance);
            } else {
                printf("Try next time\n");
            }
        }
    } else if(10 <= outOfGuess){
        printf("Invalid!\n");
        userBalance = 200;
    }
    system("clear");
    printf("Your balance Rs.%d\n", userBalance);
    return 0;
}
