#include <stdio.h>
#define PI 3.14159

int main(void) {
    float radius;
    float height;
    double volume;
    double surfaceArea;

    // collecting user input for radius and height of the cylinder
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // calculating the volume and surface area of the cylinder
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * (radius + height);

    // displaying the results
    printf("The volume of the cylinder is: %.2lf\n", volume);
    printf("The surface area of the cylinder is: %.2lf\n", surfaceArea);

    return 0;


}




    