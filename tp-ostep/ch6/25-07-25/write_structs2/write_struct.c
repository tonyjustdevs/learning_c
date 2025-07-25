#include<stdio.h>

struct threeNums_struct {
    int n1, n2, n3;
};  // create struct

int main(){

    // add tNums instance
    struct threeNums_struct nums_obj;

    nums_obj.n1=69;
    nums_obj.n2=420;
    nums_obj.n3=666;


    FILE *fp = fopen("write.bin", "wb");
    
    fwrite(&nums_obj, sizeof(nums_obj),1,fp);

    fclose(fp);

    return 0;
}