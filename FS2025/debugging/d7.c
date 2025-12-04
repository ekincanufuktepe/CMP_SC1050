#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *msg = "Hello";
    char *buf = NULL;

    buf = (char *)malloc(strlen(msg)); 
    
    if (buf == NULL) {
        return 1;
    }

    strcpy(buf, msg);

    printf("%s\n", buf);

    free(buf);
    return 0;
}
