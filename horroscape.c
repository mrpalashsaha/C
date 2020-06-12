// By Palash saha
// 04-06--2020

#include <stdio.h>

void showhorrorscope (int month);


int main (int argc, char *argv[]) {
int monthNumber;

  printf (" Please enter your month of birth\n");
  scanf("%d", &monthNumber);
  showhorrorscope(monthNumber);
return 0;
}

void showhorrorscope (int month) {
if (month == 1) {
    printf("you will have a great day today unless your are andorson, otherwise you will be dead");
} else if (month ==2){
    printf ("your future holds uncertanty. But don't worry it will be fantstic");
} else {
    printf(" you are going to win a lottery ");
}

}
