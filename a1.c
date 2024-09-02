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
    for(quart = (input / 25); quart >= 0; quart--) {
        int remaining_first = input - (25* quart);
        for(dime = (remaining_first / 10); dime >= 0; dime--) {
            int remaining_sec = remaining_first - (10* dime);
            for(nick = (remaining_sec / 5); nick >= 0; nick--) {
                int remaining_third = remaining_sec - (5* nick);
                pen = remaining_third;
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quart, dime, nick, pen);
                }
            }
        }
    }