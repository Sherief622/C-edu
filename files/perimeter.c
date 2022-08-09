#include<stdio.h>
#include<stdlib.h>

int main()
{
    int height = 7;
    int width = 5;
    
    int a = 125; 
    long ax = 1234567890; 
    float x = 2.13459; 
    double dx = 1.1415927; 
    char c = 'W'; 
    int days, years, weeks;

    int perimeter = height + width;
    int area = height * width;


    printf("Perimeter of the rectangle is: %d inches\n", perimeter);
    printf("Area of the rectangle is: %d square inches\n", area);

    printf("a + c = %d\n", a+c);
    printf("x + c = %f\n", x+c);
    printf("dx + x = %f\n", dx+x);
    printf("((int) dx) + ax = %ld\n", ((int)dx)+ax);
    printf("a + x = %f\n", a + x);
    
    printf("Please provide the number of days: \n");
    scanf("%d", &days);

    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    

    return 0;
}