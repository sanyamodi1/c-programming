#include<stdio.h>
#include<math.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float l, float b);
int main(){
    float side = 5.0;
    float radius = 3.1;
    float l = 5.0;
    float b = 4.0;
    printf("Area of square : %f" , squareArea(side));
    printf("Area of rectangle : %f" , rectangleArea(l,b));
    printf("Area of circle : %f" , circleArea(radius));


    return 0;
}
float squareArea(float side){
    return  side*side;
}
float circleArea(float radius){
    return 3.14*radius*radius;
}
float rectangleArea(float l, float b){
    return l*b;
}