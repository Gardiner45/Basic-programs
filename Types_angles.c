#include <stdio.h>
#include <stdlib.h>

// -------------------------------------------------------------------------------------------------

void angle(){

     int angle;

        scanf("%d", &angle);

            if (angle == 90) {

                puts("Angle: Straight!");

            }

            if (angle > 90 && angle < 180) {

                puts("Angle: Obtuse!");

            }

             if (angle > 0 && angle < 90) {

                puts("Angle: Acute!");

             }

             if (angle == 180) {

                puts("Angle: Shallow!");

             }

             if (angle > 180 && angle < 360) {

                puts("Angle: Concave!");

             }

             if (angle == 360) {

                puts("Angle: Complete!");

             }

}

// -------------------------------------------------------------------------------------------------

int main(){

    int loop;

        for (loop = 1; loop <= 4; loop++) {

            printf("Angle:");

            fflush(stdin);

            angle();

        }

    system("pause");
    return 0;

}
