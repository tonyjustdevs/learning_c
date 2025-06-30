#include<stdio.h>
#include<string.h>

int main (){

    int age     = 0;
    float gpa   = 0.00f;
    char grade  = '\0';
    char name[50]="";
    
    printf("Enter your age:");
    scanf("%d",&age);           //"69\n" retrieve numbs til \n", ie 69
                                //"\n" is still in 
    printf("Enter your gpa:"); //"420.40\n" retrieve float til \n", ie 420.42
    scanf("%f",&gpa);
    
    printf("Enter your grade:"); //"takes"
    scanf(" %c",&grade);

    getchar(); // consume 
    printf("Enter your full name:");
    fgets(name, sizeof(name), stdin);   // "jason bourne\n" -> "...bourne\0"
    // printf("name: %s\n",name);   
    printf("delete last charcater: %c\n",name[strlen(name)-1]);   
    name[strlen(name)-1]='\0';          // set last char to null termintaor
    // printf("name: %s\n",name);   
    
    
    
    printf("name: %s\n",name);   
    printf("age: %d\n",age);
    printf("gpa: %f\n",gpa);
    printf("grade: %c\n",grade);

    return 0;
}