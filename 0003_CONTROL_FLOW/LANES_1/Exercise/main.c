#include <stdio.h>

enum LaneAssociationType {
    LEFT_LANE,
    CENTER_LANE,
    RIGHT_LANE
};


int main(void)
{
    printf("Create the properties of a vehicle.\n");

    int speed;
    printf("Speed in m/s: ");
    scanf("%d", &speed);

    int lane;
    printf("Lane (1=Left, 2=Center, 3=Right): ");
    scanf("%d", &lane);
    lane--;

    printf("               L           C           R               \n");
    printf("         |           |           |           |         \n");
    
    printf("         |     ");
    if (lane == LEFT_LANE) {
        printf("X");
    } else {
        printf(" ");
    }
    printf("     |     ");
    if (lane == CENTER_LANE) {
        printf("X");
    } else {
        printf(" ");
    }
    printf("     |     ");
    if (lane == RIGHT_LANE) {
        printf("X");
    } else {
        printf(" ");
    }
    printf("     |         \n");


    printf("         |           |           |           |         \n");

    

    return 0;
}
