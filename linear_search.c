#include<stdio.h>
void main()
{
    int K=0, index=-1;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("Enter the Element to be Searched: \n");
    scanf("%d", &K);
    for (int i=0; i<10; i++){
        if(a[i] == K)
        {
        index= i;
        break;
        }
    }
    if (index != -1)
    printf("Element present at Index : %d", index);
    else
    printf("Element not Present");
}
