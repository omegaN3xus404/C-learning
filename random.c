#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    char choice;
   
    // Generate and print a random number
    srand(time(0));
    int random_number = rand() % 100 + 1;  // Generates a random number
    do{
         int a;
    printf("Enter a number you want to guess");
    scanf("%d",&a);
    if(a>random_number )
    {
        printf("you have gessed higher\n");
    }
    else if(a<random_number)
    {
        printf("you have gussed lower\n");
    }
    else if (a==random_number)
    {
        printf("you have gussed right\n");
        break ;
    }
        printf("Whant to guess again? (y/n): ");
        scanf(" %c", &choice);
        
    
    }while (choice == 'y' || choice == 'Y');

    printf("thanks for playing\n");
 
   
}
   