<p align="center"> ✨ For this project we were introduced to the concept of variadic functions ✨ </p>

The printf function is one of the most known and used in the C language to give an output.
It takes a string as an argument, this string may contain some placeholders (like %c for characters or %s for strings) whose original values are passed as arguments. The ft_printf has variable arguments, the only one being mandatory is the string that will be printed, otherwise it depends on how many placeholders are passed in this string. The function's return is the number of characters printed or -1 for error.
    
To create with a function like this, it must be a variadic function (with variable number of arguments), which is possible to achieve using the header <stdarg.h> and parameters like va_arg for the list arguments in order of occurrence or va_start and va_end to start and end the use of the argument list.
For each conversion required by the subject, there's a function that converts the argument and returns the numer of bytes writed:
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_putchar.c">%c</a> print a single character.
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_putstr_fd.c">%s </a>print a string of characters.
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_pointer.c">%p </a>The void * pointer argument is printed in hexadecimal.
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_decimal.c">%d </a>print a decimal (base 10) number.
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_decimal.c">%i </a>print an integer in base 10.
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_uns_decimal.c">%u </a>print an unsigned decimal (base 10) number.
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_hexadecimal.c">%x </a>print a number in hexadecimal (base 16).
    
• <a href="https://github.com/SelinUtku/ft_printf/blob/master/ft_printf.c">%% </a>print a percent sign.
