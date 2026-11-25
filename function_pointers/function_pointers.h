#ifndef __FUNCPOINTER_H_

#define __FUNCPOINTER_H_

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* ! __FUNCPOINTER_H_ */
