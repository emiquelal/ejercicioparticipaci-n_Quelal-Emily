#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=5, a;
    int *x; 
    x = &num; //a x se interpreta 
    a = *x; 
    printf("%p %d\n",x,a);

    char letra = 'a', c; 
    char *ptr; 
    ptr = &letra;
    c = *ptr; 
    printf ("%p %c\n", ptr, c);

    float decimal = 3.14, dec; 
    float *ptrF; 
    ptrF = &decimal; 
    dec = *ptrF; 
    printf ("%p %.2f\n", ptrF, dec); 
    return 0;
}