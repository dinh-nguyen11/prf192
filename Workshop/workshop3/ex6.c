#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play_game() {
    int secret, guess;
    int count = 0;
    srand(time(NULL));
    secret = rand() % 100 + 1;  
    while (count < 7) {
        printf("Lan doan thu %d: ", count + 1);
        if (scanf("%d", &guess) != 1) {
            printf("Nhap khong hop le!\n");
            while (getchar() != '\n');
            continue;   
        }
        if (guess < 1 || guess > 100) {
            printf("So ngoai pham vi! Nhap lai!\n");
            continue;   
        }
        count++; 
        if (guess == secret) {
            printf("Chuc mung! Ban da doan dung!\n");
            break;  
        }
        else if (guess < secret) {
            printf("So ban doan nho hon!\n");
        }
        else {
            printf("So ban doan lon hon!\n");
        }
    }
    if (count == 7 && guess != secret) {
        printf("Ban da het luot! So dung la: %d\n", secret);
    }
}
int main() {
    play_game();
    return 0;
}