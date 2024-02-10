# include <stdio.h>

/*
1.  Here is m=10, n and o are two integer variable and *z is an integer                                                                                                                                                      
    z stores the address of m  = 0x7ffd40630d44                                                                                                                                                                               
    *z stores the value of m = 10                                                                                                                                                                                             
    &m is the address of m = 0x7ffd40630d44                                                                                                                                                                                   
    &n stores the address of n = 0x7ffd40630d48                                                                                                                                                                           
    &o  stores the address of o = 0x7ffd40630d4c                                                                                                                                                                           
    &z stores the address of z = 0x7ffd40630d50  
*/

void answerNumber1(){
    int m = 10;
    int n;
    int o;
    int* z = &m;
    printf("This is the address of m: %p\n", &m);
    printf("This is the data value of m: %d\n", m);
    printf("This is the address of n: %p\n", &n);
    printf("This is the data value of n: %d\n", n);
    printf("This is the address of o: %p\n", &o);
    printf("This is the data value of o: %d\n", o);
    printf("This is the address value of z pointing to: %p\n", z);
    printf("This is the data value of z pointing to: %d\n", *z);
    printf("\n");
}

/*
2.  Write a program in C to demonstrate how to handle pointers in a program.
    Expected Output :

    Address of m : 0x7ffcc3ad291c
    Value of m : 29                                                                                              
                                                                                                              
    Now ab is assigned with the address of m.                                                                    
    Address of pointer ab : 0x7ffcc3ad291c                                                                       
    Content of pointer ab : 29                                                                                   
                                                                                                              
    The value of m assigned to 34 now.                                                                           
    Address of pointer ab : 0x7ffcc3ad291c                                                                       
    Content of pointer ab : 34                                                                                   
                                                                                                              
    The pointer variable ab is assigned with the value 7 now.                                                    
    Address of m : 0x7ffcc3ad291c                                                                                
    Value of m : 7
*/

void answerNumber2(){
    int m = 29;
    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n", m);

    int* ab = &m;
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %d\n", *ab);

    m = 34;
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %d\n", *ab);

    m = 7;
    printf("Address of m: %p\n", &m);
    printf("Value of m: %d\n", m);
    printf("\n");
}

/*
3.  Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
    Expected Output :

    Pointer : Demonstrate the use of & and * operator :                                                          
    --------------------------------------------------------                                                      
    m = 300                                                                                                      
    fx = 300.600006                                                                                              
    cht = z                                                                                                      
                                                                                                              
    Using & operator :                                                                                           
    -----------------------                                                                                       
    address of m = 0x7ffda2eeeec8                                                                                
    address of fx = 0x7ffda2eeeecc                                                                               
    address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
    Using & and * operator :                                                                                     
    -----------------------------                                                                                 
    value at address of m = 300                                                                                  
    value at address of fx = 300.600006                                                                          
    value at address of cht = z                      

    Using only pointer variable :                                                                                
    ----------------------------------                                                                            
    address of m = 0x7ffda2eeeec8                                                                                
    address of fx = 0x7ffda2eeeecc                                                                               
    address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
    Using only pointer operator :                                                                                
    ----------------------------------                                                                            
    value at address of m = 300                                                                                  
    value at address of fx= 300.600006                                                                           
    value at address of cht= z
*/

void answerNumber3(){
    int m = 300;                                                                                                      
    double fx = 300.600006;                                                                                              
    char cht = 'z';
    printf("Using & operator :\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    printf("Using & and * operator\n");
    printf("value at address of m = %d\n", m);
    printf("value at address of fx = %f\n", fx);
    printf("value at address of cht = %c\n", cht);
}

// main function
int main(){
    answerNumber1();
    answerNumber2();
    answerNumber3();
    return 0;
}