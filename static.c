#include <stdio.h>

static int count ;
//scanf("%d",&count);
 

void func( void ) {
//scanf("%d",&count);
   static int i = 5; 
   i++;

   printf("i is %d and count is %d\n", i, count);
}


main() {
scanf("%d",&count);
   while(count--) {
      func();
   }
	
   return 0;
}
