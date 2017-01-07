#include <stdio.h>

// Write a program that asks for a positive integer n and 
// builds a triangle of n lines
int main()
{
        int n;
        int row;
        int i;

        printf("What is n? ");
        scanf("%d",&n);
        while(n <= 0)
        {
                printf("Please enter a positive integer.\n");
                printf("What is n? ");
                scanf("%d",&n);
        }
        printf("You chose: %d.\n",n);
        
        for(row = 1;row<=n;row++)
        {
                for(i=0;i<row;i++)
                {
                        printf("*");
                }
                printf("\n");
        }
        
        return(0);
}
