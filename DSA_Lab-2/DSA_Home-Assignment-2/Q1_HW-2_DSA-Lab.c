#include <stdio.h>
#include <string.h>

void swap(char *a,char*b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

void per(char *c,int s1,int s2)
{
    int i;
    if(s1==s2)
    {
        printf("%s\n",c);
    }
    else
    {
        for(i=s1;i<=s2;i++)
        {
            swap((c+s1),(c+i));
            per(c,s1 + 1,s2);
            swap((c+i),(c+s1));
        }
    }
};

int main()
{
    char ch[100];
    printf("Enter the word (limit of 100) : ");
    scanf("%s",&ch);
    int n = strlen(ch);
    printf("\nAll permutations of a given string are: \n");
    per(ch,0,n-1);
    return 0;
}