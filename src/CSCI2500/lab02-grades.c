#include <stdio.h>

int main()
{
        float avg = 1;
        int sum = 0;
        int n;
        int number = 0;
        printf("Enter a grade: ");
        scanf("%d",&n);
        sum = sum + n;
        number++;
        while(n > 0)
        {
                printf("Enter the next grade: ");
                scanf("%d",&n);
                if(n > 0)
                {
                        sum = sum + n;
                        number++;
                }
        }

        avg = (float)sum / (float)number;
        printf("The overall grade is %.2f\n",avg);

        return(0);
}
