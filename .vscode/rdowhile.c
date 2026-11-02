#include<stdio.h>
int main()

{

int i=1, n;
printf("Enter your number \n");
scanf("%d", &n);
do {
printf("%d * %d = %d\n", n, i, n*i);
i++;

}
while(i<=10);
return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    int radius;
    int round = 0;

    printf("Circle ka radius enter karo (1-10): ");
    if (scanf("%d", &radius) != 1 || radius < 1 || radius > 10) {
        printf("Radius 1 se 10 ke beech hona chahiye.\n");
        return 1;
    }

    do {
        for (int position = 0; position <= 15; position++) {
            printf("\033[2J\033[H");

            for (int y = -radius; y <= radius; y++) {
                for (int space = 0; space < position; space++) {
                    printf("  ");
                }

                for (int x = -radius; x <= radius; x++) {
                    int distance = x * x + y * y;
                    if (abs(distance - radius * radius) <= radius) {
                        printf("* ");
                    } else {
                        printf("  ");
                    }
                }
                putchar('\n');
            }

            fflush(stdout);
            usleep(80000);
        }

        for (int position = 14; position > 0; position--) {
            printf("\033[2J\033[H");

            for (int y = -radius; y <= radius; y++) {
                for (int space = 0; space < position; space++) {
                    printf("  ");
                }

                for (int x = -radius; x <= radius; x++) {
                    int distance = x * x + y * y;
                    if (abs(distance - radius * radius) <= radius) {
                        printf("* ");
                    } else {
                        printf("  ");
                    }
                }
                putchar('\n');
            }

            fflush(stdout);
            usleep(80000);
        }

        round++;
    } while (round < 2);

    printf("\033[2J\033[H");
    return 0;
}*/