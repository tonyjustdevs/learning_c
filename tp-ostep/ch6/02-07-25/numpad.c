#include<stdio.h>

int main(){

    char numpad[][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};

    for (char i = 0; i < 4; i++)
    {
        for (char j = 0; j < 3; j++)
        {
            printf("%c",numpad[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}