#include <stdio.h>

int main () {
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i = 0; i < 20; i++)
    {
        if (arr[i]%2==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d\n",sum);
    int min=arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (min>=arr[i])
        {
            min=arr[i];
        }   
    }
    printf("%d",min);
    return 0;
}