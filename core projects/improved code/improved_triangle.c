#include <stdio.h>
#include <stdlib.h> // uses standard library for input (scanf)

int main(){
        char star = '*'; // specify the marking
        int length; // specify triangle length

        printf("Enter triangle length: ");
        scanf("%d", &length);

        for(int out = 0; out <= length; out++){    // basically do a loop in a progressive order
                for (int in = length; in >  out; in--){
                        printf(" ");
                }

                printf(" ");

                for (int st = 0; st < out; st++){
                        printf("%c ", star);
                }

                printf("\n");
        }

        return 0;
}
