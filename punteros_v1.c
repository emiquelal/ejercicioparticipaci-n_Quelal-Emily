#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=5, a;
    int *x; 
    x = &num; //a x se interpreta 
    a = *x; 
    printf("%p %d",x,a);

    char letra = 'a', c; 
    char *ptr; 
    ptr = &letra;
    c = *ptr; 
    printf ("%p %c", ptr, c);
    
    return 0;
}