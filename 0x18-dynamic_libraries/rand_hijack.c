#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int rand(void) {
    // Override the behavior of the rand function
    // Return the desired values for the given combination: ./gm 9 8 10 24 75 9
    static int numbers[] = {8, 8, 7, 9, 23, 74};
    static int index = 0;
    int result;

    // Get the original rand function
    int (*original_rand)(void) = dlsym(RTLD_NEXT, "rand");

    // Use the desired numbers for the given combination
    if (index < (sizeof(numbers) / sizeof(numbers[0]))) {
        result = numbers[index];
        index++;
    } else {
        // If all desired numbers have been used, call the original rand function
	result = original_rand();
	/* result = 1; */
    }

    return result;
}
