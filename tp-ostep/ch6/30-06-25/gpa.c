#include<stdio.h>

int main(){
    int age=0;
    float gpa=0.0f;
    char grade='\0';
    char name[30]="";  // max size of 30 chars or bytes
                    // must assign size if not assigned a value

    printf("Enter your age: ");
    scanf("%d", &age);  // age addy(age), place the variable
    
    printf("Enter your gpa: ");
    scanf("%f", &gpa);  

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your name: ");
    scanf("%29s", name);
    // fgets(name, sizeof(name), stdin);


    printf("Output\n");
    printf("- age: %d\n", age);
    printf("- gpa: %.2f\n", gpa);
    printf("- grade: %c\n", grade);
    printf("- name: %s\n", name);

    return 0;
}

