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
    scanf("%f",&gpa); //[|6|9|.|6|9|\n]
    getchar();
    printf("enter grade:");
    char grade_buffer[10]="";

    int idx_to_replace=0;
    fgets(grade_buffer, sizeof(grade_buffer), stdin); // [f][\n]
    printf("pre-clean: %s\n", grade_buffer);
    idx_to_replace = strcspn(grade_buffer,"\n"); // finds index of first occ 
    grade_buffer[idx_to_replace] = '\0';
    sscanf(grade_buffer, "%c", &grade);
    printf("post-clean: %c\n", grade);

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