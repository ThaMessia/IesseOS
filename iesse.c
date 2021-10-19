#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef IESSE_OS
#define IESSE_OS
#endif

#ifdef IESSE_OS
//#error "Unable to load IesseOS at the moment... joining emergency mode..."
#undef IESSE_OS
#define IESSE_OS
#endif

/*bool checkType(const char *str) {
    for (char const &c : str) {
        if (isdigit(c) == 0) return false;
    }

    return true;
}*/

void clearChat() {
    const char *CLEAR_CHAT = "\033[2J";
    const char *manager = "\e[0m";
    printf(manager);
    printf(CLEAR_CHAT);
    printf(CLEAR_CHAT);
    printf(CLEAR_CHAT);
}

void epicClearChat() {
    const char *EPIC_CLEAR_CHAT = "\e[41m";
    printf(EPIC_CLEAR_CHAT);
    clearChat();
}

int main() {
    char select[10];
    
    clearChat();

    printf("Welcome to IesseOS, an OS simulator written in C by ThaMessia!\n");

    while(1) {
        printf("> ");
        gets(select); //this line of code makes people think about my code style...
	//also this makes the simulator vulnerable at buffer overflow exploits
	
    	if (strcmp(select, "help") == 0) {
	    printf("help: displays this page.\n");
	    printf("docs: displays IesseOS' own documentation about the C programming language.\n");
	    printf("exit: exits the OS.\n");
	} else if (strcmp(select, "docs") == 0) {
            int docs;
	 
	    clearChat();
            
	    printf("\t\t\tThe C Programming Language\n");
	    printf("Aaah, where do we even start? Let's just start with the fact C is the\n");
	    printf("best programming language. You can do all and at maximum speed.\n\n");

	    while (docs != 9999) {
		printf("Chapter 1: The Basics\n");
		printf("Chapter 2: Input\n");
	        printf("Chapter 3: Variables\n");
	        printf("Chapter 4: Preprocessors\n");
		printf("Chapter 5: Conditions\n\n");

	       	printf("Enter chapter (type 9999 to exit docs): ");
		scanf("%d", &docs);

		isdigit(docs) ? printf("") : printf("I am afraid you can only use numbers.\n");
	

		switch (docs) {
		    case 9999:
			break;
		    case 1:
			printf("Let's take a look at these few lines of code...\n\n");
		     	printf("#include <stdio.h>\n\n");

			printf("int main() {\n");
			printf("    printf(\"Hello, World!\");\n\n");
			printf("    return 0;\n");
			printf("}\n\n");

			printf("Let's see what we got here.\n\n");

			printf("\"#include <stdio.h>\" makes us use 'standard-input-output'\n");
			printf("header. A header is basically a library that we can use to\n");
			printf("do things.\n");
			printf("I don't think there is need to explain what input or output is.\n\n");
			printf("\"int main()\" is the start of the main function.\n");
			printf("A function is basically a semantic piece of code and in C\n");
			printf("the 'main' function will be the first function to be runned.\n");
			printf("\"{}\" are the limiters of the function and \"printf is\"\n");
			printf("used to output something; in our case \"Hello, World!\"\n");
			printf("\"return 0;\" is just a convention that makes us understand\n");
			printf("that the program works fine.\n\n");

	                break;
		    case 2:
			printf("Input can be very useful in some situations, but how do\n");
			printf("we use it? Let's see...\n\n");

			printf("#include <stdio.h>\n\n");

			printf("int main() {\n");
			printf("    int integer;\n");
			printf("    printf(\"Insert input: \");\n");
			printf("    scanf(\"%\\d\", &integer);\n");
			printf("    printf(\"%\\d\", integer);\n\n");

			printf("    return 0;\n");
			printf("}\n\n");

			printf("This is basically very easy to understand, but some\n");
			printf("lines of code might want some explanation. For example,\n");
			printf("\"int\" is a type of variable. A variable is literally\n");
			printf("a piece of memory we create for storing a value.\n");
			printf("In C there are custom types of variables. Here you are\n");
			printf("introduced to the integer variable (\"int\"), that stores\n");
			printf("an integer, which is defined later from the input instruction.\n");
			printf("\"scanf()\" is the instruction that gives user the chance\n");
			printf("of inserting input. Scanf is a function that expects\n");
			printf("two parameters: the type and the variable. \"\%\" expects the type\n");
			printf("of variable while \"\&\" expects the variable itself.\n\n");

			break;
		    case 3:
			printf("In the previous chapter we talked about input and we\n");
			printf("mentioned something about variables. We said that a\n");
			printf("variable is a piece of memory we create for storing\n");
			printf("a value, plus we said that in the C programming language\n");
			printf("there can be multiple types of variables:\n\n");

			printf("int: a variable that stores an integer.\n");
			printf("char: a variable that stores a character.\n");
			printf("char *: a variable that stores a string.\n");
			printf("float|double: a variable that stores a decimal.\n\n");

			printf("In the input chapter we mentioned that for inputting\n");
			printf("a variable we have to specify the type of that.\n");
			printf("Let's see what we've got here:\n\n");

			printf("int: %\\d\n");
			printf("char: %\\c\n");
			printf("char *: %\\s\n");
			printf("float|double: %\\f\n\n");

			printf("The easiest way to create a variable is by following\n");
			printf("this simple syntax:\n\n");

			printf("type name = content;\n\n");

			printf("This is an example:\n\n");
			
			printf("char *helloworld = \"Hello, World!\";\n\n");

			break;
		    case 4:
			break;
		    case 5:
			break;
		    default:
			printf("Unknown chapter.\n");

			break;
		}
	    }

	    printf("Exiting docs...\n");
	} else if (strcmp(select, "exit") == 0) {
	    printf("Exiting...\n");
	    return 0;
	} else if (strcmp(select, "9999") == 0) {
	    printf("");    
	} else if (strcmp(select, "clear") == 0) {
	    clearChat();    
    	} else {
	    printf("Unknown command! Try out 'help' to see available commands.\n");
	}
    }
           
    return 0;
}
