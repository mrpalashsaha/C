# include <stdio.h>
# include <
#defiine MIN_VALUE '1'
# define MAX_VALUE '9'
#define EMPTY_VALUE '-'
#define NUMVALUES (MAX_VSLUE-MIN_VALUE +1)
#define GRID_SIZE ( NUM_VALUES * NUM_VALUES)
#define MAX_CELL (GRID_SEIZE - 1)
#define TRUE 1; 
#define FALSE 0;
typedef char value;
typedef int cell;
typedef sudukuGrid values [GRID_SIZE);
int hasSolution (sudukuGrid game);

int main (int argc, const char *argv []) {
  
  suduKuGrid sample ;
  readGame (sample);
  
  //showGame (sample );
  
  if (hasSolution(sample)){
    showGame (sample);
  
}
  
  return 0;
  
}
                           
int hasSolution (sudukuGrid game){
  int solved;
  cell candidateCell;
  value trialValue;
  if (isFull (game)) {
    solved = TRUE;
  } else {
    candidateCell = getFreeCell ( game) ;
    trialvalue = MIN_VALUE;
    solved = FALSE;
    
   while ( !solved && trialValue <= MAXVALUE)) {
       if (isLegal (game, candidateCell, trialValule)) 
       setCell (game, candidateCell, trialValue);
        if (hasSolution (game)) {
        solved = TRUE;
   }else {
          clearCell (game, candidateCell);
        }
  }
    trialValue ++;
  }
}
  }
                           
    
  return solved;
                           
 }                    
                           
                           
                           
                           
                           
                           
                           
                           
                           
                           
           
