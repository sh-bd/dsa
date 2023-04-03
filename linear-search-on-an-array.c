#include <stdio.h>
int main(){
  int arr[20], i, c, n;
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);
  printf("Enter a number to search\n");
  scanf("%d", &i);
  for (c = 0; c < n; c++){
    if (arr[c] == i) {
      printf("%d is present at location %d.\n", i, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", i);
  return 0;
}
