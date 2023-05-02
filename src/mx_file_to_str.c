#include "../inc/libmx.h"

char *mx_file_to_str(const char *filename) {
	int file = open(filename, O_RDONLY);
	if(file < 0)
		return NULL;
	char buffer;
	char *str = mx_strnew(0);
	char *temp;
	while (read(file, &buffer, 1)) {
		temp = str;
		str = mx_strjoin(str, &buffer);
		free(temp);
	}
	close(file);
    return str;
}






