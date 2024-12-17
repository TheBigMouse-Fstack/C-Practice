#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int array[30];
    int size;
    printf("enter array size: ");
    scanf("%d",&size);
    for(int i = 0 ; i <= size - 1; i-=-1){
        printf("\nenter array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("\nThe array:");
    for(int i = 0 ; i < size ; i-=-1){
        printf("%4d",array[i]);
    }
    int p;
    printf("\nchoose the delete position: ");
    scanf("%d",&p);
    for(int i =  p ; i <= size - 1 ; i++){
        array[i]= array[i + 1];
    }
    size = size - 1;
    printf("\nThe changed array: ");
    for(int i = 0 ; i <= size - 1 ; i++){
        printf("%4d",array[i]);
    }
    return 0;
}
*/
int main() {
	int a[30], n;
	printf("Enter array size: ");
	scanf("%d", &n);
	 	for (int i = 0; i < n; i++)
	 	{
	 		printf("Please enter array at %d: ", i);
	 		scanf("%d", &a[i]);
		}
		int p;

		printf("Enter position substracted : ");
		scanf("%d", &p);
		for(int i = p; i < n -1 ; i++)
			{
				a[i] = a[i + 1];
			}

		for (int i = 0; i < n ; i++)
			{
				printf("%d", a[i]);
				printf("\t");
			}

	return 0;
}
