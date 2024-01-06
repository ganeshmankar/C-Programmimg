#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNo(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char c1, char c2)
//FOR ROCK PAPER SCISSORS - RETURN 1 IF C1>C2 AND OTHERWISE 0. IF C1==C2 IT WILL RETURN -1
{
    if (c1 == c2)
    {
        return -1;
    }
    if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    
    if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
    
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's', '\0'};
    printf("Welcome to the Rock, Paper, Scissors\n");
    for (int i = 0; i < 3; i++)
    {
        //Take Player 1's inout
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose  %c\n\n", playerChar);

        //Generate Computer's input
        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomNo(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU choose %c\n\n", compChar);

        //Compare the scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU got it!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Its a draw!\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it!\n");
        }
        printf("You: %d\nCPU: %d\n\n", playerScore, compScore);
    }

        if (playerScore > compScore)
        {
            printf("You win the game!");
        }
        else if (playerScore < compScore)
        {
            printf("CPU win the game!");
        }
        else
        {
            printf("Its a draw!");
        }

        return 0;
    
}