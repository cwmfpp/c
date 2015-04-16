#include <stdio.h>
#include <stdlib.h>
#include "common_data.h"

COMMON_DATA(one, 12, 1);
COMMON_DATA(two, 12, 2);
COMMON_DATA(three, 12, 3);
COMMON_DATA(four, 12, 4);
COMMON_DATA(five, 12, 5);
COMMON_DATA(six, 12, 6);

int get_common_data(void)
{

	printf("%s:%s:%d \n", __FILE__, __func__, __LINE__);
	//common_data_t *common_data_ptr = &__common_data_start;
	common_data_t *common_data_ptr = (common_data_t *)0x40000000;
	for(; common_data_ptr != &__common_data_end; common_data_ptr++)
	{
		printf("%s:%d name=%-6s size=%-6d value=%-6d\n", __func__, __LINE__, common_data_ptr->name, common_data_ptr->size, common_data_ptr->value);
	}

	return 0;
}

