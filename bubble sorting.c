#include <stdio.h>
int main() {
int n, i, j, temp;
printf("Enter the size of the array- ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array- ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("\n\n");
printf("showing taken inputs- ");
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}
printf("\n\n");
for(i=0; i<n-1; i++)
    {
    for(j=0; j<n-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("The output is- ");
for(i=0;i<n;i++)
{
printf("%d", arr[i]);
}
return 0;
}
