#include "main.h"

/**
 * get_precision - Calculates the precisions for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */

int get_precision(const char *format, int *i, va_list list)
{
<<<<<<< HEAD
        int curr_i = *i + 1; // Corrected to dereference i
        int precision = -1;

        if (format[curr_i] == '.') // Corrected the comparison operator
                return precision;

        precision = 0;

        for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
        {
                if (is_digit(format[curr_i]))
                {
                        precision *= 10;
                        precision += format[curr_i] - '0';
                }
                else if (format[curr_i] == '*')
                {
                        curr_i++;
                        precision = va_arg(list, int);
                        break;
                }
                else
                        break;
        }

        *i = curr_i - 1;

        return precision;
=======
	int curr_in = *i + 1;
	int precisions = -1;

	if (format[curr_in] != '.')
		return (precisions);

	precisions = 0;

	for (curr_in += 1; format[curr_in] != '\0'; curr_in++)
	{
		if (is_digit(format[curr_in]))
		{
			precisions *= 10;
			precisions += format[curr_in] - '0';
		}
		else if (format[curr_in] == '*')
		{
			curr_in++;
			precisions = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_in - 1;

	return (precisions);
>>>>>>> 59ecd8a335cbfc0dbdf0f1d63671280e13c16c24
}
