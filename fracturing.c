#include <math.h>
#include <stdio.h>
#define PI 3.14159

//this function calculates distance between two points
double calculateDistance(){
    double x1, y1, x2, y2;

    printf("Point #1 entered: x1 & y1.\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Point #2 entered: x2 & y2.\n");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is %lf.\n", distance);

    return distance;
}

//using the distance that represents one side, we can find how all 4 sides add up
double calculatePerimeter(){

    double distance = calculateDistance();

    double perimeter = distance * 4;

    printf("The perimeter of the city encompassed by your request is %lf.\n", perimeter);

    double difficulty = 4;

    return difficulty;
}

//using the distance, we can calculate the area by multiplying them together
double calculateArea(){

    double distance = calculateDistance();

    double area = pow(distance, 2);

    printf("The area of the city encompassed by your request is %lf.\n", area);

    double difficulty = 4;

    return difficulty;
}

//using the x values we can find the width
double calculateWidth(){
    double x1, y1, x2, y2;

    printf("Point #1 entered: x1 & y1.\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Point #2 entered: x2 & y2.\n");
    scanf("%lf %lf", &x2, &y2);

    double width = x2 - x1;

    printf("The width of the city encompassed by your request is %lf.\n", width);

    double difficulty = 3;

    return difficulty;
}

//using the y values we can find the height
double calculateHeight(){
   double x1, y1, x2, y2;

    printf("Point #1 entered: x1 & y1.\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Point #2 entered: x2 & y2.\n");
    scanf("%lf %lf", &x2, &y2);

    double height = y2 - y1;

    printf("The height of the city encompassed by your request is %lf.\n", height);

    double difficulty = 3;

    return difficulty;
}

//runs all functions back to back
int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}