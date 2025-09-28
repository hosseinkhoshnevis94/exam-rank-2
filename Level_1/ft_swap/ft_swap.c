void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main()
{
    int x = 5;
    int y =10;
    printf("before change x is:%d and y is %d ",x,y);
    ft_swap(&x,&y);
    printf("after swap x is: %dand y is : %d",x,y);
}