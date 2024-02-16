# include <stdio.h>
# include <stdlib.h>

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
    int* pt1 = &m;
    double* pt2 = &fx;
    char* pt3 = &cht;

    printf("Using & operator :\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    printf("Using & and * operator\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));
    
    printf("Using only pointer variable\n");
    printf("address of m = %p\n", pt1);
    printf("address of fx = %p\n", pt2);
    printf("address of cht = %p\n", pt3);

    printf("Using only pointer operator\n");
    printf("value at address of m = %d\n", *pt1);
    printf("value at address of fx = %f\n", *pt2);
    printf("value at address of cht = %c\n", *pt3);
    printf("\n");
}

/*
4.  Write a program in C to add two numbers using pointers.
    Test Data :
    Input the first number : 5
    Input the second number : 6
    Expected Output :

    The sum of the entered numbers is : 11 
*/

void answerNumber4(){
    int num1, num2, sum;
    int* pt1;
    int* pt2;
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    pt1 = &num1;
    pt2 = &num2;
    sum = *pt1 + *pt2;
    printf("The sum of the entered numbers is : %d\n", sum);
}

/*
5.  Write a program in C to add numbers using call by reference.
    Test Data :
    Input the first number : 5
    Input the second number : 6
    Expected Output :

    The sum of 5 and 6  is 11 
*/

void answerNumber5(){
    int num1, num2, sum;
    int* pt1;
    int* pt2;
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    pt1 = &num1;
    pt2 = &num2;
    sum = *pt1 + *pt2;
    printf("The sum of %d and %d is : %d\n", num1, num2, sum);
}

/*
6.  Write a program in C to find the maximum number between two numbers using a pointer.
    Test Data :
    Input the first number : 5
    Input the second number : 6
    Expected Output :

    6 is the maximum number.  
*/

void answerNumber6(){
    int num1, num2, max;
    int* pt1;
    int* pt2;
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    pt1 = &num1;
    pt2 = &num2;
    if(*pt1 > *pt2){
        max = *pt1;
    }else{
        max = *pt2;
    }
    printf("%d is the maximum number.\n", max);
}

/*
7.  Write a program in C to store n elements in an array and print the elements using a pointer.
    Test Data :
    Input the number of elements to store in the array :5
    Input 5 number of elements in the array :
    element - 0 : 5
    element - 1 : 7
    element - 2 : 2
    element - 3 : 9
    element - 4 : 8
    Expected Output :

    The elements you entered are :                                                                               
    element - 0 : 5                                                                                              
    element - 1 : 7                                                                                              
    element - 2 : 2                                                                                              
    element - 3 : 9                                                                                              
    element - 4 : 8  
*/

void answerNumber7(){
    int enteredLength;
    int enteredNum;
    int* length;
    int* num;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &enteredLength);
    length = &enteredLength;
    int numbers[*length];

    printf("Input %d number of elements in the array :\n", *length);
    for(int i = 0; i < *length; i++){
        printf("element - %d : ", i);
        scanf("%d", &enteredNum);
        num = &enteredNum;
        numbers[i] = *num;
    }

    printf("The elements you entered are : %d\n", *length);
    for(int i = 0; i < *length; i++){
        printf("element - %d : %d\n", i, numbers[i]);
    }
}

/*
8.  Write a program in C to print all permutations of a given string using pointers.
    Expected Output :

    The permutations of the string are :                                                                         
    abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  
    cbad  cbda  cabd  cadb  cdab  cdba  dbca  dbac  dcba  dcab  dacb  dabc
*/

// void answerNumber8(){
//     char* str[4];
//     printf("The permutations of the strng are : ");
//     scanf("%s", &str);
//     printf("This is the ptStr value %s", *str);
// }

/*
9.  Write a program in C to find the largest element using Dynamic Memory Allocation.
    Test Data :
    Input total number of elements(1 to 100): 5

    Number 1: 5
    Number 2: 7
    Number 3: 2
    Number 4: 9
    Number 5: 8
    Expected Output :

    The Largest element is :  9.00 
*/

void answerNumber9(){
    int numElements;
    int enteredNumber;
    int maxNumber = 0;
    int* ptr;
    printf("Input total number of elements(1 to 100): \n");
    scanf("%d", &numElements);

    ptr = (int*)malloc(numElements * sizeof(int));

    if(ptr == NULL){
        exit(0);
    }else {
        for (int i=0; i<numElements; i++){
            printf("Number %d: ", i+1);
            scanf("%d", &enteredNumber);
            ptr[i] = enteredNumber;
            if(maxNumber < ptr[i]){
                maxNumber = ptr[i];
            }
        }
    }
    printf("The Largest element is : %d\n", maxNumber);
    free(ptr);
}

/*
10. Write a program in C to calculate the length of a string using a pointer.
    Test Data :
    Input a string : w3resource
    Expected Output :

    The length of the given string w3resource                                                                    
    is : 10    
*/

void answerNumber10(){
    char string[] = "string";
    char* ptr = string;
    printf("Input a string : %s\n", string);
    scanf("%s", string);
    while(*ptr){
        ptr++;
    }
    int len = ptr - string;
    printf("The length of the given string %s is : %d\n",string, len);
}

/*
11. Write a program in C to swap elements using call by reference.
    Test Data :
    Input the value of 1st element : 5
    Input the value of 2nd element : 6
    Input the value of 3rd element : 7
    Expected Output :

    The value before swapping are :                                                                              
    element 1 = 5                                                                                                
    element 2 = 6                                                                                                
    element 3 = 7                                                                                                
                                                                                                             
    The value after swapping are :                                                                               
    element 1 = 7                                                                                                
    element 2 = 5                                                                                                
    element 3 = 6 
*/

void answerNumber11(){
    int num1, num2, num3;
   
    printf("Input the value of 1st element : ");
    scanf("%d", &num1);

    printf("Input the value of 2nd element : ");
    scanf("%d", &num2);

    printf("Input the value of 3rd element : ");
    scanf("%d", &num3);
    

    printf("The value before swapping are : \n");
    printf("Element 1 = %d\n", num1);
    printf("Element 2 = %d\n", num2);
    printf("Element 3 = %d\n", num3);

    int tmp = num1;
    num1 = num2;
    num2 = num3;
    num3 = tmp;

    printf("The value after swapping are : \n");
    printf("Element 1 = %d\n", num1);
    printf("Element 2 = %d\n", num2);
    printf("Element 3 = %d\n", num3);

}

/*
12. Write a program in C to find the factorial of a given number using pointers.
    Test Data :
    Input a number : 5
    Expected Output :

    The Factorial of 5 is : 120
*/

void answerNumber12(){
    int enteredNumber;
    int factorialNumber = 1;
    printf("Input a number: ");
    scanf("%d", &enteredNumber);

    for(int i = enteredNumber + 1; i > 1; i--){
       factorialNumber = factorialNumber * (i-1);
    }
    
    printf("The Factorial of %d is : %d\n", enteredNumber, factorialNumber);
}

/*
13. Write a program in C to count the number of vowels and consonants in a string using a pointer.
    Test Data :
    Input a string: string
    Expected Output :

    Number of vowels : 1                                                                                         
    Number of constant : 5
*/

void answerNumber13(){
    char vowels[5] = "aiueo";
    char* string;
    char enteredString;
    
    printf("Input a string: ");
    scanf("%s", &enteredString);

    string = &enteredString;
    while (*string)
    {
        string++;
        printf("%c\n", *string);
    }
    
    int len = string - &enteredString;
    printf("value %p\n", &enteredString);
    printf("value %c\n", *(&enteredString));
}


/*
14. Write a program in C to sort an array using a pointer.
    Test Data :
    testdata
    Expected Output :

    Test Data :
    Input the number of elements to store in the array : 5
    Input 5 number of elements in the array :
    element - 1 : 25
    element - 2 : 45
    element - 3 : 89
    element - 4 : 15
    element - 5 : 82
    Expected Output :
                                                                                           
    The elements in the array after sorting :                                                                    
    element - 1 : 15                                                                                             
    element - 2 : 25                                                                                             
    element - 3 : 45                                                                                             
    element - 4 : 82                                                                                             
    element - 5 : 89  
*/

void answerNumber14(){
    // defining variables
    int length, enteredNumber;
    int* numbers;

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &length);
    
    printf("Input %d number of elements in the array : \n", length);
    numbers = (int*) calloc(length, sizeof(int));

    for(int i=0; i<length; i++){
        printf("element - %d : ", i+1);
        scanf("%d", &enteredNumber);
        numbers[i] = enteredNumber;
    }

    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(numbers[i] > numbers[j]){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("The elements in the array after sorting : \n");
    for(int i=0; i<length; i++){
        printf("element - %d : %d\n", i+1, numbers[i]);
    }

    free(numbers);
}

// main function
int main(){
    answerNumber1();
    answerNumber2();
    answerNumber3();
    // answerNumber4();
    // answerNumber5();
    // answerNumber6();
    // answerNumber7();
    // answerNumber8();
    // answerNumber9();
    // answerNumber10();
    // answerNumber11();
    // answerNumber12();
    // answerNumber13();
    answerNumber14();
    return 0;
}