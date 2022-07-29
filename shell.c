#include "shell.h"
/**
 * main - this main of our shell
 * Return: Always 0
 */
int main(void)
{
	/*char buffer[32];
	char *b = buffer;
	size_t bufferSize = 32;
	size_t line;
	char *promp = "$ ";*/

/*config*/
	/*loop*/
	while (1)
	{
		// prompt some think to user .....
	//	write(2, promp, 2);

	//	line = getline(&b, &bufferSize, stdin);

	//	printf("%s", b);
		/*line variable to read line (function) */
		char* input = read_line();
		/*parset  input in array of string (function)*/
		char** parsed = parse(input);
		/*execute parset (function)*/
		execute(parsed);
		/*free all (function)*/
		free(input);
        free(parsed);


	}
	/*free all (function)*/

	return (0);
}
