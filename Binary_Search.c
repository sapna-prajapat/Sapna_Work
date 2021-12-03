#include<stdio.h>
#include<conio.h>

void binary_search(int[],int);

int main() {
    int arr_search[5], i,element;

    printf("Simple Binary Search Example - Array and Functions\n");
    printf("\nEnter %d Elements for Searching : \n", 5);
    for (i = 0; i < 5; i++)
        scanf("%d", &arr_search[i]);

	printf("Enter Element to Search : ");
    scanf("%d", &element);
   

    binary_search(arr_search,element);
    getch();
}

void binary_search(int fn_arr[],int element) {
   int f = 0, r = 5,mid;
   
   while (f <= r) {
	  mid = (f+r)/2;

	  if (fn_arr[mid] == element) {
         printf("\nSearch Element  : %d  : Found :  Position : %d.\n", element, mid+1);
         break;
	  }
      else if (fn_arr[mid] < element)
         f = mid + 1;    
      else
         r = mid - 1;
   }
   
   if (f > r)
      printf("\nSearch Element : %d  : Not Found \n", element);
}