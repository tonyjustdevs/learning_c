#include<stdio.h>
#include<stdint.h>

int main(void){

    char arr_str[] = "g'day mateys";
    // char *p_arr_str = &arr_str;
    char (*p_arr_str)[13] = &arr_str;
    // char *p_arr_str = &arr_str;
    
    printf("[1] arr_str(s): [%s]\n",arr_str);       // arr_str= 13 chars
    // printf("[2] p_arr_str(p): [%p]\n",p_arr_str);   // p_arr ptr to whole arr
    // printf("[gpt](void*)p_arr_str: %p\n", (void*)p_arr_str);
    // printf("[3] p_arr_str+1(p): [%p]\n",p_arr_str+1); // jumps +13 memory spots + print

    // ptrs
    printf("[2] p (p): %p\n",(void*)p_arr_str);
    printf("[3] (unsigned int)(x): %x\n",(unsigned int)(uintptr_t)p_arr_str);
    printf("[4] (unsigned long)(lx): %lx\n",(unsigned long)(uintptr_t)p_arr_str);
    printf("[5] (unsigned long long)(llx): 0x%llx\n", (unsigned long long)(uintptr_t)p_arr_str);

    // printf("[3] p+1 (p): %p\n",(void*)p_arr_str+1);
    
    // addys //unsigned int
    // printf("[4] sz(p_arr_str)(zu): [%zu]\n",sizeof(p_arr_str)); // sz(ptr)=8
    // printf("[5] *p_arr_str(s): [%s]\n",*p_arr_str); // prints str
    // printf("[6] sizeof(*p_arr_str)(zu): [%zu]\n",sizeof(*p_arr_str)); // prints size(str) 13
    // printf("[5] p_arr_str[0](c): [%c]\n",p_arr_str[0]); // deference ptr to whole arr?
    // printf("[4] sz(*p_arr_str)(zu): [%zu]\n",sizeof(*p_arr_str)); // deference ptr to whole arr?
    // printf("[2] &arr_str(p): [%p]\n",&arr_str);
    // printf("[3] &arr_str+1(p): [%p]\n",&arr_str+1);
    // printf("[2] p_arr_str(p): [%p]\n",p_arr_str);

    return 0;
}