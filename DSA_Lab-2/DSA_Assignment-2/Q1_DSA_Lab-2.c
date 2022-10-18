#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[100];
    char gender[20];
    char designation[100];
    char department[100];
    int basic_pay;
    int gross_pay;
};

void gross(struct employee emp[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        emp[i].gross_pay = 0;
        int hr = (25 * emp[i].basic_pay) / 100;
        int da = (75 * emp[i].basic_pay) / 100;
        emp[i].gross_pay = emp[i].basic_pay + hr + da;
    }
}
int main()
{
    int n;
    printf("Enter the number of employess : ");
    scanf("%d", &n);
    struct employee emp[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of employee-%d:\n", i+1);
        printf("Enter the Name : ");
        scanf("%s", &emp[i].name);
        printf("Enter the Gender : ");
        scanf("%s", &emp[i].gender);
        printf("Enter the Designation : ");
        scanf("%s", &emp[i].designation);
        printf("Enter the Department : ");
        scanf("%s", &emp[i].department);
        printf("Enter the Basic Salary : ");
        scanf("%d", &emp[i].basic_pay);
        printf("\n");
    }
    gross(emp, n);
    
    for (i = 0; i < n; i++)
    {
        printf("\nDetails of employee-%d\n", i+1);
        printf("Name        :\t%s\nGender      :\t%s\nDesignation :\t%s\nDepartment  :\t%s\nGross Pay   :\t%d\n", emp[i].name, emp[i].gender, emp[i].designation, emp[i].department, emp[i].gross_pay);
    }
    return 0;
}