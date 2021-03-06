#include <stdio.h>

int getMax(int a, int b){
    // Can use a variable to store returned value as follows
    // int c = a > b ? a : b;
    // return c;
    // We can return value generated by an expression directly too
    return a > b ? a : b;
}

int isLowerAlpha(char z){
    return z >= 'a' && z <= 'z';
}

char toUpper(char c){
    if(isLowerAlpha(c))
        return c - 'a' + 'A';
    else
        return c;
}

void printHW(void){
    // Takes no input, gives no output
    // Could also have written void printHW(){ ... }
    printf("Hello World\n");
    // Empty return statement, does not return any value
    // Simply terminates the function
    return;
}

// Can omit empty return statements
// Another way to write the above function
// void printHW(){
//     printf("Hello World\n"); 
// }

int isPrime(int n){
    int i;
    for(i = 2; i < n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

void pointlessFunction(int a, int b){
    // Functions enable function reuse
    if(isPrime(getMax(a,b)))
        printHW();
}

int getMax3(int a, int b, int c){
    // Writing functions makes reusing code very convenient
    return getMax(c, getMax(a,b));
}

int main(void){
    int a = 20, b = 70;
    int n = getMax(b, a);
    // Could also have directly said
    // n = getMax(20, 70);
    // Functions can take expressions as input too
    // n = getMax(a + 10, b * 2);
    printf("Max is %d\n", n);
    // Could have directly said
    // printf("Max is %d", getMax(20, 70));
    // Feel free to use values returned by functions everywhere
    // in expressions, as inputs to other functions
    if(isPrime(12+1))
        printf("PRIME\n");
    else
        printf("NOT PRIME\n");
    pointlessFunction(13, 12);
    printf("Max of 3 numbers %d\n", getMax3(a-10,b,a+10));
    printf("%c\n", toUpper('a'));
    printf("%c\n", toUpper('P'));
    printf("%c\n", toUpper('*'));
    return 0;
}