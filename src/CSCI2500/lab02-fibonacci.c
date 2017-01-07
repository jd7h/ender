#include <stdio.h>
#include <stdlib.h>

int fibonacci(int fib1, int fib2)
{
        int fib3 = fib1 + fib2;
        return(fib3);
}


int main()
{
        int fib1 = 1;
        int fib2 = 1;
        int *fib_seq;
        int i;
        int n;

        printf("Please enter a value: ");
        scanf("%d",&n);
        while(n <= 0)
        {
                printf("Please enter a positive integer.\n");
                printf("Please enter a value: ");
                scanf("%d",&n);
        }
        fib_seq = malloc(sizeof(int)*n);
        fib_seq[0] = fib1;
        fib_seq[1] = fib2;
        for(i = 2;i<n;i++)
        {
                fib_seq[i] = fibonacci(fib_seq[i-1],fib_seq[i-2]);
        }
        for(i = 0;i<n;i++)
        {
                printf("fib(%d) is %d\n",i+1,fib_seq[i]);
        }

        return(0);
}
