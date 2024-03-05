#include <stdio.h>

/*
0.  Write a function to reversed the string
    char name = "fadly" -> "yldaf"
*/

void answerNumber0(){
    int len = 0, index = 0, subtractor = 1;
    char name[] = "w3resource.com";

    while (name[index] != '\0')
    {
        len++;
        index++;
    }
    
    printf("Initial name is %s\n", name);

    for (int i = 0; i < len/2; i++)
    {
        char tmp = name[i];
        name[i] = name[len-subtractor];
        name[len-subtractor] = tmp;
        subtractor++;
    }
    
    printf("Reversed name is %s\n", name);
     
}

/*
<<<<<<< Updated upstream
3. Write a program in C to separate individual characters from a string.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string are : 
w  3  r  e  s  o  u  r  c  e  .  c o m
*/

void answerNumber3(){
    char str[100];
    int index = 0;
    printf("Input the string : ");
    scanf("%s", str);
    
    while(str[index] != '\0'){
        printf("%c ", str[index]);
        index++;
    }
}

void answerNumber4(){
    char str[100];
    int index = 0;
    int len = 0;
    
    printf("Input the string : ");
    scanf("%s", str);
    
    while(str[index] != '\0'){
        len++;
        index++;
    }
    
    while(len >= 0){
        printf("%c ", str[len-1]);
        len--;
    }
}

int main(){
    answerNumber4();
=======
1.  Write a program in C to input a string and print it.
    Test Data :
    Input the string : Welcome, w3resource  
    Expected Output :
    The string you entered is : Welcome, w3resource 
*/

void answerNumber1(){
    char str1[50]; 
    char str2[50];

    printf("Input the string : ");
    scanf("%s", str1);
    scanf("%s", str2);

    printf("The string you entered is : %s %s\n", str1, str2);
}

/*
2.  Write a program in C to find the length of a string without using library functions.
    Test Data :
    Input the string : w3resource.com
    Expected Output :
    Length of the string is : 15 
*/

void answerNumber2(){
    char str[50];
    int index = 0;
    int count = 0;

    printf("Input the string : ");
    scanf("%s", str);

    while (str[index] != '\0')
    {
        index++;
        count++;
    }

    printf("Length of the string is : %d\n", count);
    
}

int main(){
    answerNumber0();
    // answerNumber1();
    // answerNumber2();
>>>>>>> Stashed changes
    return 0;
}