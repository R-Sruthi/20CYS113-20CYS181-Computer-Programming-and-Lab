#include <stdio.h>

enum type { Circle=1, Rectangle };

struct shape {
    enum type shapeType;
    union {
        float length[2];
        float radius;
    } dimension;
} s;

float arofrect(float length, float bredth) {
    return length*bredth;
}

float arofcir(float radius) {
    return 3.14 *radius*radius;
}

int main() {
    float area1;

    //printf("Enter the type of shape (0 for Circle, 1 for Rectangle): ");
    scanf("%d", &(s.shapeType));

    if (s.shapeType == Circle) {
        //printf("Enter the radius of the circle: ");
        scanf("%f", &(s.dimension.radius));
        area1 = arofcir(s.dimension.radius);
        printf("Area of the circle: %.4f units\n", area1);
    }
    else if (s.shapeType == Rectangle) {
        //printf("Enter the length of the rectangle: ");
        scanf("%f", &(s.dimension.length[0]));
        //printf("Enter the radius of the rectangle: ");
        scanf("%f", &(s.dimension.length[1]));
        area1 = arofrect(s.dimension.length[0], s.dimension.length[1]);
        printf("Area of the rectangle: %.4f units\n", area1);
    }
    else {
        printf("Invalid choice!");
    }

    return 0;
}