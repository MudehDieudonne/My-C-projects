#include <stdio.h>
int main() {
 int number = 5;
 printf("Guess the number between 1 and 10\n");
 if (scanf("&d", &number)); {
 if (number == 5) {
 printf("Congratulations, you guessed the number!\n");
 }
 else if (number > 5) {
 printf("Too high! Try again.\n");
 }
 else {
 printf("Too low! Try again.\n");
 }
 }
 return 0;
}
