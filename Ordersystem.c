// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    // coffee shop
    // kunan name
    // 1. wintermelon = 30 pesos (5)

    /* output:

    Receipt:
    Name: Je
    Order: Wintermelon
    Total: 30

    */
    
    char name[]= "";
    int order = 0;
    
    printf ("Good Day Customer!");
    printf ("\nWhat is your name?: ");
    scanf ("%s", &name);
    
    printf ("\nHeres the list of order:");
    printf ("\n\nSelect:\n1 for Mango Shake = P50\n2 for Strawberry Shake = P100\n3 for Banana Shake = P70\n4 for Milkshake P50\n5 for Water = P10");
    
    while (order != 1 && order != 2 && order != 3 && order != 4 && order != 5){
        
    printf ("\n\nWhat will be your order?: ");
    scanf ("%d", &order);
    
    if (order == 1){
        printf ("Recipt:\nName: %s\nOrder: Mango Shake\nTotal: 50", name);
    }

    else if (order == 2){
        printf ("Recipt:\nName: %s\nOrder: Strawberry Shake\nTotal: 100", name);
    }
    
    else if (order == 3){
        printf ("Recipt:\nName: %s\nOrder: Banana Shake\nTotal: 70", name);
    }
    
    else if (order == 4){
        printf ("Recipt:\nName: %s\nOrder: Milkshake\nTotal: 50", name);
    }
    
    else if (order == 5){
        printf ("Recipt:\nName: %s\nOrder: Water\nTotal: 10", name);
    }
    
    }
    
    printf ("Thanks for Ordering!\n");
    
    return 0;
}
