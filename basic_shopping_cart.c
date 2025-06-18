#include <stdio.h>
#include <string.h>

int main(){
    
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;


    printf("what item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what is the price for each item?: ");
    scanf("%f", &price);

    printf("how many item would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s", quantity, item);
    printf("\nThe total price is: %c%.2f", currency, total);







    return 0;
}