/*3. Given an array “container[]” and integer “hunt”. WAP to find whether “hunt” is present in 
container[] or not. If present, then triple the value of “hunt” and search again. Repeat these
steps until “hunt” is not found. Finally return the value of “hunt”.*/

#include<stdio.h>
int main(void)
{
	int Container[50],size,hunt,l,Flag=1;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);
    printf("Enter elements in container: ");
	for(int i=0;i<size;i++)
    {
        scanf("%d",&Container[i]);
    }
	l = sizeof(Container)/sizeof(Container[0]);
	printf("Enter the number to hunt: ");
    scanf("%d",&hunt);
	while(Flag==1)
	{
		Flag=0;
		for(int i=0;i<l;i++)
		{
			if(hunt==Container[i]) 
			{
				Flag=1;
				hunt = hunt*3;
			}
		}
	}
	printf("\nOutput Hunt Value = %d",hunt);	
}