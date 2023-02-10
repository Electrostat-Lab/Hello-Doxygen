/**
 * @file hello_mod.c
 * @brief test doxygen documentation
 * @author pavl_g
 */
#include <stdio.h>

/**
 * @brief the application main entry point.
 * 
 * @return the exit error
 */
int main() {
    
    int n0 = 2;
    int d0 = 4;
    
    /* can you divide 2 into 4 equally ? */
    /* if no, then evaluate the first operand to the result */
    /* In this case the result is 2 */
    
    printf("%d\n", n0 % d0);
    
    
    /* Example 2 */
    int n1 = 10;
    int d1 = 6;
    
    /** Question in mind: Can you divide 10 equally into 6 */
    /** Yes, then evaluate if (10 / 6) outputs an integer, 10/6 = 1.667, no, 
     * then subtract the numbers to get the remainder = 10 - 6 = 4 
     */
    printf("%d\n", n1 % d1); /* result is 4 */
    printf("%d\n", (6 + 4) % 6);

    /* Example 3 */
    int n2 = 1001;
    int d2 = 500;
    
    printf("%d\n", n2 % d2); /* 1001 % 500 = (500 + 501) % 500 = 500 % 500 + 501 % 500 */
    printf("%d\n", 500 % 500 + 501 % 500);

    return 0;
}
