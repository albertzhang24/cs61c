#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    return (x & (1 << n)) >> n;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    *x = (*x & ~(1 << n)) ^ (v << n);
}

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned xored_up = get_bit((unsigned) *reg, 0) ^  get_bit((unsigned) *reg, 2) ^ get_bit((unsigned) *reg, 3) ^ get_bit((unsigned) *reg, 5); 
    *reg = *reg >> 1; 
    set_bit((unsigned *) reg, 15, xored_up);
=======
void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
}

int main() {
    int8_t *numbers = (int8_t*) malloc(sizeof(int8_t) * 65535);
    if (numbers == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }

    memset(numbers, 0, sizeof(int8_t) * 65535);
    uint16_t reg = 0x1;
    uint32_t count = 0;
    int i;

    do {
        count++;
        numbers[reg] = 1;
        if (count < 24) {
            printf("My number is: %u\n", reg);
        } else if (count == 24) {
            printf(" ... etc etc ... \n");
        }
        for (i = 0; i < 32; i++)
            lfsr_calculate(&reg);
    } while (numbers[reg] != 1);

    printf("Got %u numbers before cycling!\n", count);

    if (count == 65535) {
        printf("Congratulations! It works!\n");
    } else {
        printf("Did I miss something?\n");
    }

    free(numbers);

    return 0;
}
