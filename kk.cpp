#include "kk.h"
#include <string.h>
int get_FIO_KK(char *buf)
{
	char fio[] = "Krupin KV";
	int count = strlen(fio);
	if (buf != NULL)
	{
		int r = strcpy_s(buf, count + 1, fio);
	}
	return count + 1;
};
int get_group_id()
{
	return 581220;
};