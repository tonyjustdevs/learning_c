#include<stdio.h>

int main(){

    char numpad[][3] = {{'1','2','3','3'},
                        {'4','5','6','6'},
                        {'7','8','9','9'},
                        {'*','0','#','#'},
                        {'*','0','#','#'},
                        {'*','0','#','#'}};

    // 1. calc rows
    int arr_total_bytes = sizeof(numpad);                           // 12
    int single_row_total_bytes = sizeof(numpad[0]);                 // 3
    int no_of_rows = arr_total_bytes/single_row_total_bytes;        // 4
    
    
    printf("[12]: EXPECT total bytes \n");                  
    printf("[%d]: ACTUAL total bytes \n\n", arr_total_bytes);       // 12

    printf("[3]: EXPECT bytes (single row, 3 element)\n");
    printf("[%d]: ACTUAL bytes (single row, 3 element)\n\n", single_row_total_bytes);
    
    printf("[4]: EXPECT total rows  \n");
    printf("[%d]: ACTUAL total rows \n\n", no_of_rows);
    
    
    // 2. calc cols
    // - each row has same amount of elements, or columns, ie total bytes in each row are the same
    //      - [1,2,3] = total row n-bytes .... e.g. 3
    //      - [2,3,4] = total row n-bytes
    //      so total_row_n_bytes / single_elements_n_bytes ---> 3/1
    // - each element divide a single element

    // 3a. calc single_row_n_bytes
    int single_row_n_bytes = sizeof(numpad[0]);
    
    // 3b. single_elements_n_bytes
    int single_element_n_bytes = sizeof(numpad[0][0]);
    
    
    // 3c. columns = no_of_elements = single_row_n_bytes/single_element_n_bytes
    int no_of_cols = single_row_n_bytes/single_element_n_bytes;

    printf("[3]: EXPECT total cols  \n");
    printf("[%d]: ACTUAL total cols \n", no_of_cols);
    
    // for (char i = 0; i < 4; i++)
    // {
    //     // 2. get [no_of_cols] (replace 4)
    //     for (char j = 0; j < 3; j++)
    //     {
    //         printf("%c",numpad[i][j]);
    //     }
    //     printf("\n");
    // }
    


    return 0;
}