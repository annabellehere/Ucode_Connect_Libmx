#include "../inc/libmx.h"

char *mx_strcat(char *s1, const char *s2) {
    int count1 = mx_strlen(s1);
    for (int i = 0; i < mx_strlen(s2); i++ ) {
        s1[count1+i] = s2[i];
    }
    s1[count1+mx_strlen(s2)] = '\0';
    return s1;
}


