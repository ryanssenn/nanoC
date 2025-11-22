/*
5
*/
#include <print.c>

int main(){
    int a;
    a = 5;
    int* p;
    p = &a;
    int b;
    b = *p;
    print_i(b);
    return 0;
}