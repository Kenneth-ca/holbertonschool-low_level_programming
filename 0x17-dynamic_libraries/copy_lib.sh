#!/bin/bash
find .. -iname \*.c | grep -E '0-isupper|0-memset|0-strcat|1-isdigit|1-memcpy|1-strncat|100-atoi|2-strchr|2-strlen|2-strncpy|3-islower|3-puts|3-strcmp|3-strspn|4-isalpha|4-strpbrk|5-strstr|6-abs|9-strcpy|_putchar' | xargs -d \\n -I file cp file ./
