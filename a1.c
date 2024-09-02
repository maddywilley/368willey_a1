#include <stdio.h>

void count(int);

int main(){
    int input;
    scanf("%d", &input);
    count(input);
    return 0;
}

void count(int input){
    //USE MODULUS
    int quart;
    int dime;
    int nick;
    int pen;
    for(int i = (input % 25); i > 0; i--) {
        quart = (input % 25);
        int remaining_first = input - (25* (input % 25));
        for(int j = (remaining_first % 10); j > 0; j--) {
            dime = (input % 10);
            int remaining_sec = remaining_first - (10* (remaining_first % 10));
            for(int k = (remaining_sec % 5); k > 0; k--) {
                nick = (remaining_sec % 5);
                int remaining_third = remaining_sec - (5* (remaining_sec % 5));
                pen = remaining_third;
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quart, dime, nick, pen);
                }
            }
        }
}