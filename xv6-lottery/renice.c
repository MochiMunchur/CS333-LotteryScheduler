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

	int count = 0;
	while (argv[count++] != NULL);
	count -= 1;
	//printf(1, "count: %d\n", count);

	for(int i = 2; i < count; i++){

	int pid = atoi (argv[i]);

	//printf(1, "pid: %d\n", pid);
	
	//printf(1, "nice: %d\n", new_nice_val);
	
	//printf(1, "i: %d\n", i);

	renice(pid, new_nice_val);
	}


#else // LOTTERY
	//printf(1, "no renice");
#endif // LOTTERY



	exit();
}





