/*
 * write a program that interprets Brainfuck.
 * > increment pointer
 * < decrement pointer
 * + increment the pointed byte
 * - decrement the pointed byte
 * . print pointed byte on standard output
 * [ go to the matching ] if pointed byte is 0
 * ] go to the matching [ if the pointed byte is not 0
 * any other character is a comment
 */

 int	main(int argc, char **argv)
 {
 	int i = 0;
	char *str = argv[1];
	while (str[i] != '\0')
	{
		if (str[i] == '>')
			str++;
		if (str[i] == '<')
			str--;
		if (str[i] == '+')
			str[i++]
	}
 }
