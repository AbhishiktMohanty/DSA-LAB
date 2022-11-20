// #include <stdio.h>

struct poly_2_8
{
    int coeff;
    int expo;
};

struct poly_2_8 p1[10], p2[10], p3[10];

int readPoly_2_8(struct poly_2_8[]);
int addPoly_2_8(struct poly_2_8[], struct poly_2_8[], int, int, struct poly_2_8[]);
void displayPoly_2_8(struct poly_2_8[], int terms);

int main_2_8()
{
    int t1, t2, t3;
    t1 = readPoly_2_8(p1);
    printf("\nFirst polynomial : \n");
    displayPoly_2_8(p1, t1);
    t2 = readPoly_2_8(p2);
    printf("\nSecond polynomial : \n");
    displayPoly_2_8(p2, t2);
    t3 = addPoly_2_8(p1, p2, t1, t2, p3);
    printf("\n\nResultant polynomial after addition : \n");
    displayPoly_2_8(p3, t3);
    printf("\n");

    return 0;
}

int readPoly_2_8(struct poly_2_8 p[10])
{
    int t1, i;
    printf("\n\nEnter the total number of terms in the polynomial: ");
    scanf("%d", &t1);

    printf("\nEnter the COEFFICIENT and EXPONENT in DESCENDING ORDER\n");
    for (i = 0; i < t1; i++)
    {
        printf("Enter the Coefficient(%d): ", i + 1);
        scanf("%d", &p[i].coeff);
        printf("Enter the exponent(%d): ", i + 1);
        scanf("%d", &p[i].expo);
    }
    return (t1);
}

int addPoly_2_8(struct poly_2_8 p1[10], struct poly_2_8 p2[10], int t1, int t2, struct poly_2_8 p3[10])
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < t1 && j < t2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].expo = p1[i].expo;

            i++;
            j++;
            k++;
        }
        else if (p1[i].expo > p2[j].expo)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        else
        {
            p3[k].coeff = p2[j].coeff;
            p3[k].expo = p2[j].expo;
            j++;
            k++;
        }
    }
    while (i < t1)
    {
        p3[k].coeff = p1[i].coeff;
        p3[k].expo = p1[i].expo;
        i++;
        k++;
    }
    while (j < t2)
    {
        p3[k].coeff = p2[j].coeff;
        p3[k].expo = p2[j].expo;
        j++;
        k++;
    }
    return (k);
}

void displayPoly_2_8(struct poly_2_8 p[10], int term)
{
    int k;

    for (k = 0; k < term - 1; k++)
        printf("%dx^%d + ", p[k].coeff, p[k].expo);
    printf("%dx^%d ", p[term - 1].coeff, p[term - 1].expo);
}