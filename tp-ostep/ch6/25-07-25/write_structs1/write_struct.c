#include<stdio.h>

struct threeNum{
    int n1, n2, n3; // create a struct with 3 fields
};

int main(){
    // int n; // create integer 'n' instance
    struct threeNum num; // struct instance 'num' instance
    FILE *fp; // declare file ptr
    
    // fp = fopen("write_wb.txt","wb"); // assign ptr to file in 'wb' mode
    // fp = fopen("write_wb.bin","wb"); // assign ptr to file in 'wb' mode
    fp = fopen("write1_wb.bin","wb"); // assign ptr to file in 'wb' mode

    // assign struct values
    num.n1 = 69;
    num.n2 = 420;
    num.n3 = 666;
    // do fwrite

    fwrite(&num, sizeof(struct threeNum), 1, fp);

    fclose(fp);


// fwrite(addressData, sizeData, numbersData, pointerToFile);
// fwrite(targetaddyvalue, struct, instances of struct, ptr_to_file_store);

    return 0;
}