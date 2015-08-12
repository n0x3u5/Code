#include <stdio.h>
int main()
{
    int rating[6]={0,0,0,0,0,0};
    int response, i;
    printf("Input your rating: ");
    for(i=1;i<=6;i++)
    {
        scanf("%d",&response);
        if(response<1 || response>5)
            printf("Invalid response. Please enter a value from 1 to 5.");
        else
            ++rating[response];
    }
    printf("\nResponse\tNumber of responses\n");
    printf("-----------------------------\n");
    for(i=1;i<6;i++)
        printf("%d\t%d\n", i, rating[i]);
    return 0;
}
