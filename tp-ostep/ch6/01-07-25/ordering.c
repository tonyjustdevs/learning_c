#include<stdio.h>
#include<string.h>

int main(){

    char item[50]=""; 
    float price = 0.0f;
    int amount = 0;
    float total_px = 0.0f;
    char currency = '\0';

    printf("What item would you like? ");
    fgets(item, sizeof(item), stdin);
    // getchar();
    
    printf("What currency (e.g. $, €, ₤, etc)? ");
    scanf("%c", &currency);
    getchar();
    
    printf("What is the price per item? ");
    scanf("%f", &price);
    
    printf("How many items? ");
    scanf("%d", &amount);
    getchar();
    
    total_px = price * amount;
    
    // printf("You bought %d items of %s for a total of %f ", amount, );
    printf("You paid %c%.2f for %d %s\n",currency, total_px, amount, item);

    return 0;
}