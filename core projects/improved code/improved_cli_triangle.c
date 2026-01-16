#include <stdio.h>


char star = '*';
int length;
int isPlaying = 1;

void welcome();
void process_input();
void basic_trig();
void invert_trig();
void stairway_trig();


int main(){
        welcome();
}

void welcome(){
        int choice;

        while (isPlaying != 0){
                printf("Enter triangle type: \n");
                printf("1. Basics \n");
                printf("2. Inverted \n");
                printf("3. Stairways \n");

                printf("Enter choice (please insert numbers only) > ");
                scanf("%d", &choice);

                printf("Enter triangle length: ");
                scanf("%d", &length);

                printf("\n");

                process_input(choice);
        }
}


void process_input(int choice){
        switch(choice){
                case 1:
                        basic_trig(length);
                        break;
                case 2:
                        invert_trig(length);
                        break;
                case 3:
                        stairway_trig(length);
                        break;
                case 0:
                        isPlaying = 0;
                        break;
                default:
                        printf("Input mismatch. \n");
                        break;
        }
}

void basic_trig(int length){
        for (int i = 0; i <= length; i++){
                for (int spacing = length; spacing > i; spacing--){
                        printf(" ");
                }

                printf(" ");

                for (int stars = 0; stars < i; stars++){
                        printf("%c ", star);
                }

                printf("\n");
        }

        printf("\n");
}

void invert_trig(int length){
        for (int i = 0; i <= length; i++){
                for (int spacing = 0; spacing < i; spacing++){
                        printf(" ");
                }

                for (int stars = length; stars > i; stars--){
                        printf("%c ", star);
                }

                printf("\n");
        }

        printf("\n");
}

void stairway_trig(int length){
        for (int i = 0; i <= length; i++){
                printf(" ");

                for (int stars = 0; stars < i; stars++){
                        printf("%c ", star);
                }

                printf("\n");
        }

        printf("\n");
}
