#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

/**
 * struct index - indices for format specifers and stdout buffer.
 *
 * @fmt_index: index of format specifer string.
 * @buf_index: index of stdout buffer.
 */
typedef struct index
{
	unsigned int fmt_index;
	unsigned int buf_index;
}
index;

#endif /*MAIN_h*/
