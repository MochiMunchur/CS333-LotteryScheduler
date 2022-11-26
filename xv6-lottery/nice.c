#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
#ifdef LOTTERY

	// pid given from command line argument
	// convert string to int
	int new_nice_val = atoi (argv[1]);
	// nice value given from command line argument
	// convert string to int
	
	int currPID = getpid();

	renice(currPID, new_nice_val);

	exec(argv[2], &argv[2]);	



#else // LOTTERY
	printf(1, "no renice");
#endif // LOTTERY


	exit();
}
