#include<stdio.h>

int main(){
    char output_char[150]="gday 🐶 mateys\ncat says 🐈‍'meow'\ngoodbye👋\n";
    char output_char2[50]="hi\n🐈\n🐄\n";
    
    FILE *pFile = fopen("output.txt", "w");
    FILE *p2File = fopen("/mnt/c/Users/tonyp/learn/os/c_programming/output_from_wsl.txt", "w");

    if (pFile==NULL || p2File==NULL )
    {
        printf("FAILs ❌❌❌!!!");
        return 1;
    }
    
    fprintf(pFile,"%s", output_char);
    fprintf(p2File,"%s", output_char2);

    printf("WINs 🥇🥇🥇!!!");
    
    fclose(pFile);
    fclose(p2File);
    return 0;
}