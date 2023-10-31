#include <stdio.h>

void swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int j = 2, k = 5;
    printf("j=%d, k=%d\n",j,k);
    swap(&j,&k);
    printf("j=%d, k=%d\n",j,k);
    return 0;
}
//Pointers were needed to pass the address of 'j' and 'k' into 'a' and 'b'.
