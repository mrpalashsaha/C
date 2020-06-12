// count down
// Palash Saha 03-06-2020

   # include <stdio.h>
   #include <stdlib.h>
   #define HOURS_PER_DAY 24
   #define MIN_PER_SEC 60
   #define SEC_PER_MIN 60
   #define SECOND_PER_DAY (HOURS_PER_DAY * MIN_PER_HOUR * SEC_PER_MIN)
  
  int daysToSeconds: (int daysLeft);                             // declearing the function
  
  int main (int argc, char* argv[]) {
  
  int daysLeft;                                                // declear a variable
  int secondLeft = 0;                                         // declear and initialize
  
  
  printf("how many whole days to go?\n");                     // promt to the user
  scanf("%d", &daysLeft);                                    // define the value what we get form the users
  secondLeft = daysToSeconds (daysLeft) ;                   // calling the function, to do something 
  printf(" You have only %d seconds left\n", secondLeft ); // print it on the screen
  
  
  return Exist_success; 

}

 // making a funtion that return int and take int 
 
      int daysToSeconds: (int daysLeft) {
       
       return (daysLeft * SECOND_PER_DAY);

}

// A function has three stages which are 1) attributes, 2) reuse  and 3) scope, attributes are the concrete formate, which mentioned on the top 
// of the main, reuse means using it in different places and the most importantly scope is using the variable only on its own s that it does not 
// mixed with others. for example if we pack a luch box we do not mix everything in the box we keep everything sperate to keep it nice and eatable. 
