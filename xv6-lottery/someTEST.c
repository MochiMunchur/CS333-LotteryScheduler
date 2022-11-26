// how to write sys_renice
//

sys_renice(void)
{
	int pid;
	int nice;

	if (argint(0, &pid) < 0){
		return -1;
	}

	if (argint(1, nice) < 0){
		return -1;
	}


	return renice(pid, nice);
}



// nice program
//

argv[0]  argv[1]	argv[2]
nice	 <nice value> 	<program>

nice 	50		mult

int nice; 
if(argv != 3)
{
	// turn 'a' a character, to 'i' an int
	nice = a to i (argv[i]);



	// if we're going to call exec, we need to renice ourselves to run the new program alongside whatever is new
	if(renice(getpid(), nice) != 0){
		// this is an error block
		// check to ensure there are no erros 
		// at least that it would be in bounds of what's needed	
	}
	
	// if this line executes properly, we will not get to the exit() line
	exec(argv[2]);

	// exiting with 1 instead of 0 means that we should've hit an error, and not completed cleanly
	exit(1);
}





// how to write get_nice_sum(void)

uint get_nice_sum(void){
	struct proc *p;
	uint total;

	for(p = ptable.proc; p < &ptable.proc[NPROC]; p++){
		if(p->state == RUNNABLE){
			total += p->nice_value
		}
	}

	return total;
}




