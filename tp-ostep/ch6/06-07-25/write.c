#include<stdio.h>
#include<errno.h>

int main(){
    // create string arr to write
    char output[] = "g'day mateys😎\nthis is output🙋\nfrom write.c🐈\n";

    // create FILE struct, fopen @ location
    FILE *pFile = fopen("tonys_output.txt", "w");

    // handle NULL ptr
    if (pFile==NULL)
    {
        // printf("failed ❌❌❌!!\n");
        fprintf(stderr,"%s", strer(errno));
        return 1;
    }
    
    // handle file ptr
    fprintf(pFile, "%s", output);
    
    // close
    if (fclose(pFile)!=0)
    {   // fake failed simulation if close twice
        printf("fzailed closing file❌❌❌!!\n");
        return 1;
    }
    
    
    printf("success 🏆🏆🏆!!\n");
    return 0;
}