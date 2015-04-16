#ifndef COMMON_DATA_H
#define COMMON_DATA_H

typedef struct common_data_s {
	char *name;
	int size;
	int value;
}common_data_t;

extern common_data_t __common_data_start;
extern common_data_t __common_data_end;

#define COMMON_DATA(name, size, value)	\
common_data_t __common_data##name __attribute__((unused,section(".common_data"))) = \
{#name, size, value}

#endif //COMMON_DATA_H


