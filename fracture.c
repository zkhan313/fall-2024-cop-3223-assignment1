#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double askForUserInput();
void printPoints(double x1, double y1, double x2, double y2);
double calculateDistance(double x1,double y1,double x2,double y2);
double calculatePerimeter(double distance, double x1, double y1, double x2, double y2);
double calculateArea(double perimeter, double x1, double y1, double x2, double y2);
double calculateWidth(double distance, double x1, double y1, double x2, double y2);
double calculateHeight(double distance, double x1, double y1, double x2, double y2);


int main( int argc, char **argv) {
    //printf( "argc = %d\n", argc ); -test argc prints
   // printf( "argv = %s\n", argv[3] ); -test argv prints
    //double x1 = atof(argv[1]);
    //double y1 = atof(argv[2]);
    //double x2 = atof(argv[3]);
    //double y2 = atof(argv[4]);
    
    printf("Enter x1: ");
    double x1 = askForUserInput();
    printf("Enter y1: ");
    double y1 = askForUserInput();
    printf("Enter x2: ");
    double x2 = askForUserInput();
    printf("Enter y2: ");
    double y2 = askForUserInput();
    double distance = calculateDistance(x1, y1, x2, y2);
    double perimeter = calculatePerimeter(distance, x1, y1, x2, y2);
    double area = calculateArea(perimeter, x1, y1, x2, y2);
    double width = calculateWidth(distance, x1, y1, x2, y2);
    double height = calculateHeight(distance, x1, y1, x2, y2);


    return 0;
}

void printPoints(double x1, double y1, double x2, double y2) {
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
}

double askForUserInput() {
    double input;
    scanf("%lf", &input);  
    return input;
}

double calculateDistance(double x1,double y1, double x2,double y2) {
   double Distance;

   printPoints(x1, y1, x2, y2);
   double distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)); // calculate distance
   printf("The distance between the two points is %lf\n\n", distance);  //print distance
   return distance;
}

double calculatePerimeter(double distance, double x1, double y1, double x2, double y2) {
    double perimeter = M_PI * distance;  // calculate perimeter 
    printPoints(x1, y1, x2, y2);
    printf("The perimeter of the city encompassed by your request is %lf\n\n", perimeter); // print perimeter 

    printf("Enter difficulty rating for perimeter (1-5): ");
    double difficulty = askForUserInput();
    printf("Difficulty rating: %lf\n\n", difficulty);
    return perimeter;

}

double calculateArea(double perimeter, double x1, double y1, double x2, double y2) {
    double area = (perimeter * perimeter) / (4 * M_PI); // calculate area 
    printPoints(x1, y1, x2, y2);
    printf("The area of the city encompassed by your request is %lf\n\n", area); // print area
    printf("Enter difficulty rating for perimeter (1-5): ");
    double difficulty = askForUserInput();
    printf("Difficulty rating: %lf\n\n", difficulty);
    return area; 
}


double calculateWidth(double distance, double x1, double y1, double x2, double y2) {
    double width = distance;  // Width (diameter) is the same as the distance
    printPoints(x1, y1, x2, y2);
    printf("The width (diameter) of the city encompassed by your request is %lf\n\n", width); //print width
    printf("Enter difficulty rating for perimeter (1-5): ");
    double difficulty = askForUserInput();
    printf("Difficulty rating: %lf\n\n", difficulty);
    return width;
}

double calculateHeight(double distance, double x1, double y1, double x2, double y2) {
    double height = distance;  // Height (diameter) is the same as the distance and width 
    printPoints(x1, y1, x2, y2);
    printf("The height (diameter) of the city encompassed by your request is %lf\n\n", height);
    printf("Enter difficulty rating for perimeter (1-5): ");
    double difficulty = askForUserInput();
    printf("Difficulty rating: %lf\n\n", difficulty);
    return height;
}
