#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	    int count = 0;
	     va_list args;
	     va_start(args, format);

	       // handle c specifier
	          if (*format == 'c')
		  {
			  char c = va_arg(args, int);
			     putchar(c);
			       count++;
		  }
		    // handle s specifier
		     else if (*format == 's')
		     {
			     char *s = va_arg(args, char*);
			     int i;
			     for (i = 0; s[i] != '\0'; i++)
			     {
				     putchar(s[i]);
				      count++;
			     }
		    }
		     // handle % specifier
		      else if (*format == '%')
		      {
			      putchar('%');
			      count++;
		      }
		        else
			{
				 // do nothing
			}
			va_end(args);
			 return count;
}
