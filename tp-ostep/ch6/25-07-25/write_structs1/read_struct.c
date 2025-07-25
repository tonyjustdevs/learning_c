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
    fp = fopen("write1_wb.bin","rb"); // assign ptr to file in 'wb' mode

    fread(&num, sizeof(struct threeNum), 1, fp);

    printf("[fread(&n,...)] num.n1: [%d]\n", num.n1);
    printf("[fread(&n,...)] num.n2: [%d]\n", num.n2);
    printf("[fread(&n,...)] num.n3: [%d]\n", num.n3);

    fclose(fp);


// fwrite(addressData, sizeData, numbersData, pointerToFile);
// fwrite(targetaddyvalue, struct, instances of struct, ptr_to_file_store);
// fread(targetaddress, sizeData, numbersData, pointerToFile);
    return 0;
}