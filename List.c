#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main(){
    int counter = 0; //Track where we are in the array
    double *arr = calloc(counter, sizeof(int)); //Allocates 1 int
    int Menu;
    double input;
    bool isRunning = true; 

    while (isRunning == true){
        printf("\n1: Add to the list");
        printf("\n2: View the list");
        printf("\n3: Exit the program"); 
        printf("\nWhat would you like to do: "); 

        scanf("%d", &Menu);

        switch (Menu){
            case 1:
                printf("Enter a value to add to the array: ");
                scanf("%lf", &input);
                //Increase the counter
                counter++;
                //Increase the amount of memory
                arr = realloc(arr, sizeof(int) * counter);
                arr[counter - 1] = input; //Counter is larger than what we have in the array, so take away 1.

                printf("\nAdded successfuly!");
                break;

            case 2: 
                if(counter == 0){
                    printf("Nothing is in this array");
                }
                for (int i = 0; i < counter; i++)
                {
                    printf("\n%lf", arr[i]);
                }
                break;

            case 3:
                printf("Exiting...");
                free(arr);
                return 0; 
            }
    }
    
}
