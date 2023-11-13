#include "code.h"

void print_env(char **new_argv)
{
	    int i;

	        i = 0;
		    while (environ[i])
			        {
					        write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
						        write(STDOUT_FILENO, "\n", 1);
							        i++;
								    }
		        new_argv[0] = NULL;
}

