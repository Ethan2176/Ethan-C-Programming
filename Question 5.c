// Write a C program to calculate the area and circumference of a circle.

# include <stdio.h>

int main() {
    double radius;
    double area , circumference;
    printf("Enter the radius of the circle");
    scanf("%lf" , &radius);
    
    area = 3.14*radius*radius;
    circumference=2*3.14*radius;
    
 printf("The area and the circumference of the circle are %.2lf and %.2lf respectively" , area , circumference);
    return 0;
}