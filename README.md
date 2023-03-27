Still on the journey to mastery of C programing

	we are at the check point where we create our own printf functions

	The printf() function in C programming is used to print formatted output to the standard output stream (usually the console).
	It is a part of the standard input/output library in C, and it allows programmers to display text and data on the screen or other output devices.

	The printf() function has the following syntax

	printf("format string", argument1, argument2, ..., argumentN);
	The format string specifies how the arguments should be formatted and displayed.
	It may contain conversion specifiers, which are preceded by the percent (%) character, to indicate the type and format of each argument.

	For example, the following code prints the string "Hello, world!" to the console:

	printf("Hello, world!\n");
	The \n character at the end of the string represents a newline character, which causes the output to be displayed on a new line.

	In addition to simple strings, printf() can format and print many types of data, such as integers, floating-point numbers, characters, and strings.
	For example, the following code prints the value of the integer variable x:

	int x = 42;
	printf("The value of x is %d\n", x);
	The %d conversion specifier indicates that the argument is an integer, and it causes printf() to print the value of x in decimal format.

	The printf() function also supports various formatting options, such as specifying the width and precision of numbers, 
	padding with spaces or zeros, and aligning text.

	These options can be specified using additional characters in the format string, such as the width specifier %5d,
	which specifies a field width of 5 characters for an integer.

	Overall, the printf() function is a powerful and flexible tool for formatting and displaying text and data in C programming.
