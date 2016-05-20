 homework #3

global char[] that holds each hex digit, ('0'-'F').

itox(char[],# to convert to hex)
	while(# to be converted > 0)
		# to be converted %16- take remainer
		# to be converted /16
		char[0++]=hexdigit[remained]
	add '\0' to char[]
	reverse char[]

xtoi(input char[])
	for(start at final index of input char[] and go to the first index)
		for(0-15)
			if(input char[current index] == hexdigit[matching va	    lue])
				total += matching index * 16^0++
	return total
*/




#include <stdio.h>
#include <string.h> 
#include "xbits.h" 
 
void itox( char hexstring[], int n){
 	printf("in itox, processing %d\n",n); 
 	
	char hexdigit[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int index = 0; 
	int remain; 
 
	while(n > 0) { 
  		remain = n%16; 
  		n/=16; 
  		hexstring[index++] = hexdigit[remain]; 
	} 
	hexstring[index] = '\0'; 
	reverse(hexstring);  
	printf("Decimal: %d\tHexString Eqivalence: %s\n",n,hexstring); 
} 

/* function converts hexstring array to equivalent integer value  */ 
 
int xtoi( char hexstring[]) {
 
	char hexdigit[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	int total = 0,pow = 1,count = 0; 
	int i,j,s; 
 
	for(s = strlen(hexstring)-1;s>=0;s--){ 
		if(hexstring[s] >= '0' && hexstring[s] <= 'F') { 
			for(i=0; i<16; i++) { 
  				if (hexstring[s] == hexdigit[i]) { 
    					if (count==0) 
      						total+=i; 
  					else { 	
    						for (j=0; j<count; j++)
    							pow*=16;
						total+=i*pow;
						pow=1; 
						
    					}	     
   				}	     
  			} 
 		}
		count++; 
	}      
printf("in xtoi, processing %s\n", hexstring); 
return total; 
} 
 
void reverse(char s[]) { 
 
    int k, j; 
    char temp; 
 
    for (j = 0; s[j] != '\0'; ++j); 
    --j; 
 
    for (k = 0; k < j; k++) { 
 
        temp = s[k]; 
        s[k] = s[j]; 
        s[j] = temp; 
        --j; 
    } 
}

