// #include <stdio.h>

typedef struct complex_2_3
{
    float r;
    float i;
} complex_2_3;
complex_2_3 addition(complex_2_3 num1, complex_2_3 num2);

int main_2_3()
{
    complex_2_3 num1, num2, value;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.r, &num1.i);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.r, &num2.i);
    value = addition(num1, num2);
    printf("Addition of given complex number is %.1f + %.1fi", value.r, value.i);
    return 0;
}

complex_2_3 addition(complex_2_3 num1, complex_2_3 num2)
{
    complex_2_3 temp;
    temp.r = num1.r + num2.r;
    temp.i = num1.i + num2.i;
    return (temp);
}