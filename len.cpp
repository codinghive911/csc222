#include <stddef.h>

size_t str_len(const char *str) {
    if (str == NULL) {
        return 0;
    }

    const char *end = str;
    while (*end != '\0') {
        end++;
    }
    
    return (size_t)(end - str);
}
