// random.c
//

#include "types.h"
#include "user.h"


int
main(int argc, char *argv[])
{
    
	srand(3);
	int outcome = 0;	

	for(int i = 0; i < 10; i++){
		outcome = rand();
		printf(1, "random number is: %d", outcome);
		printf(1,"\n");
	}	

	
	exit();
}

