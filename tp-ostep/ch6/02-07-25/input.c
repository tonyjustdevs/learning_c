#include<stdio.h>
#include<string.h>

int main(){
    int age=0;
    float gpa=0.0f;
    char grade='\0';
    char name[50]="";

    printf("enter your age:");
    scanf("%d",&age);
 
    printf("enter gpa:");
    scanf("%f",&gpa);
    
    printf("enter grade:");
    scanf(" %c",&grade);
    // [f|\n]

    // 1. fgets some buffer
    // 2. clean buffer (remove \n)
    // 3. parse to sscanf
        
    printf("enter name:");
    fgets(name,sizeof(name),stdin); 
    // [t][o][n][y][\n][\0]
    // name <- [t|o|n|y|\n]
    

    
    printf("age: %d\n", age);
    printf("gpa: %.2f\n", gpa);
    printf("grade: %c\n", grade);
    printf("name: %s\n", name);
    
    
    return 0;
}
// name[strcspn(name, "\n")] = '\0';    