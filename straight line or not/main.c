/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.
Author Majid Mujahid Hussain dated 24/December/2020 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float AB,BC,AC;
    printf("Hello world!\n");

    printf("Please enter the co-ordinates of first point (X1,Y1); \n");
    scanf("%d %d", &x1, &y1);

    printf("Please enter the co-ordinates of second point (X2,Y2); \n");
    scanf("%d %d", &x2, &y2);

    printf("Please enter the co-ordinates of third point (X3,Y3); \n");
    scanf("%d %d", &x3, &y3);

    AB = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
   // printf("The distance of AB is equal to %f\n", AB);
    BC = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
    //printf("The distance of BC is equal to %f\n", BC);
    AC = sqrt(pow((x3-x1),2) + pow((y3-y1),2));
    //printf("The distance of AC is equal to %f\n", AC);

    //checking if all the points are on the straight line
    if(AB + BC == AC)
    {
        printf("The points are in the straight line \n");
    }
    else
    {
        printf("The points are not on the straight line\n ");
    }


    return 0;
}
