#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the x coordinate: ");
    scanf("%f", &x);

    printf("Enter the y coordinate: ");
    scanf("%f", &y);

    // Determine quadrant
    if (x > 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%.2f, %.2f) lies in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%.2f, %.2f) lies in the fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    } else if (x != 0 && y == 0) {
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    }

    return 0;
}
