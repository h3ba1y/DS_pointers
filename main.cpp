/* 
 * File:   main.cpp
 * Author: heba
 *
 * Created on August 14, 2019, 4:49 PM
 */

#include <cstdlib>
#include <stdio.h>  

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a = 5;  
    int *b;  
    int **c;  // c is pointer of pointer
    b = &a;  // b has address of a
    c = &b;  //c has address of b
    
    printf ("value of a = %d\n", a);  //5
    printf ("value of a = %d\n", *(&a));  //access value in the address of a which is 5
    printf ("value of a = %d\n", *b);  //the same as previous line
    printf ("value of a = %d\n", **c); // *(*c) = *(*(&b)) = *(&a) = 5
    
    printf ("value of b = address of a = %p\n", b);  
    printf ("value of c = address of b = %p\n", c);  
    
    printf ("address of a = %p\n", &a);  
    printf ("address of a = %p\n", b);  
    printf ("address of a = %p\n", *c);  
    
    printf ("address of b = %p\n", &b);  
    printf ("address of b = %p\n", c);  
    
    printf ("address of c = %p\n", &c);  

    return 0;
}

