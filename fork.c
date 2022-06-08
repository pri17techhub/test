#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{     
	printf("\n1st linux program in vim\n ");
        printf("pid of parent ===>%d\n",getpid());   
        pid= fork();         	      
	printf("\nhello world......\n.");
	printf("pid for parent 1st then for child %d\n",getpid());


	return 0;
}


