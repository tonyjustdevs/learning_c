#include<stdio.h>

struct threeNums_struct {
    int n1, n2, n3;
};  // create struct

int main(){

    // add tNums instance
    struct threeNums_struct nums_obj_read;
    // nums_obj.n1=69;
    // nums_obj.n2=420;
    // nums_obj.n3=666;


    FILE *fp_read = fopen("write.bin", "rb");
    
    // fwrite(&nums_obj, sizeof(nums_obj),1,fp);
    fread(&nums_obj_read, sizeof(nums_obj_read),1,fp_read);

    printf("nums_obj_read.n1: [%d]\n",nums_obj_read.n1);
    printf("nums_obj_read.n2: [%d]\n",nums_obj_read.n2);
    printf("nums_obj_read.n3: [%d]\n",nums_obj_read.n3);

    fclose(fp_read);

    return 0;
}