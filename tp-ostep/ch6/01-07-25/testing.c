#include<stdio.h>
#include<string.h>

int main(){

    int age=0;
    float gpa=0.0f;
    char grade='\0';
    char name[50]=""; 

    printf("enter age:");
    scanf("%d", &age);
    
    printf("enter name:");
    // scanf("%s",name);
    getchar();
    fgets(name, sizeof(name), stdin);

    printf("enter gpa:");
    scanf("%f", &gpa);

    printf("enter grade:");
    scanf(" %c", &grade);

    
    printf("name: %s", name);
    printf("age: %d\n", age);
    printf("gpa: %.3f\n", gpa);
    printf("grade: %c\n", grade);
    
    return 0;

}

