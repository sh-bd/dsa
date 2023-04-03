#include <stdio.h>
int main(){
    int  n, a[n];
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter the elements ");
    for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
    int b = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > b) {
            b = a[i];
        }
    printf("The largest value is %d\n", b);
    return 0;
}
