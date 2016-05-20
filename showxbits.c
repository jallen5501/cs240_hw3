/*
 *  stub driver for functions to study integer-hex conversions
 *
 */

#include <stdio.h>
#include "xbits.h"

#define ENOUGH_SPACE 2*sizeof(int)+1


int main() {
	char hexstring[ENOUGH_SPACE];
	int n, m;

	while (scanf("%d", &n) == 1) {
 		itox( hexstring, n);
 		m = xtoi(hexstring);
 		printf("HexString: %s\tDecimal Equivalence: %d\n", hexstring, m);
 	} 
	return 0;
}


/*

int main() {
  char hexstring[ENOUGH_SPACE];
//  int m=0, n = 0x79FEB220;
	int m=0, n = 0xFF;
  itox( hexstring, n); 


//   for stub testing: create a fake input string 
//  strcpy( hexstring, "6BCD7890"); 
  m= xtoi(hexstring);

  printf("\t%12d %s %12d\n", n,hexstring, m); 

  return 0;  // everything is just fine 
}
*/
