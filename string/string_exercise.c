#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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

/*
6.  Write a program in C to compare two strings without using string library functions.

    Test Data :
    Check the length of two strings:
    --------------------------------
    Input the 1st string : aabbcc
    Input the 2nd string : abcdef
    String1: aabbcc
    String2: abcdef
    Expected Output : Strings are not equal.

    Check the length of two strings:
    --------------------------------
    Input the 1st string : aabbcc
    Input the 2nd string : aabbcc
    String1: aabbcc
    String2: aabbcc
    Expected Output : Strings are equal.
*/

void answerNumber6(){
    char string1[50];
    char string2[50];
    int indexString1 = 0;
    int indexString2 = 0;
    int lenString1 = 0;
    int lenString2 = 0;
    bool isEqual = true;

    printf("Check the length of two strings : \n");
    printf("Input the 1st string : ");
    scanf("%s", string1);

    printf("Input the 2nd string : ");
    scanf("%s", string2);

    printf("String1: %s\n", string1);
    printf("String2: %s\n", string2);

    while (string1[indexString1] != '\0')
    {
        lenString1++;
        indexString1++;
    }
    
    while (string2[indexString2] != '\0')
    {
        lenString2++;
        indexString2++;
    }

    if(lenString1 != lenString2){
        isEqual = !isEqual;
    }else{
        for (int i = 0; i < lenString1; i++)
        {
            if (string1[i] == string2[i])
            {
                isEqual = isEqual;
            }else{
                isEqual = !isEqual;
                break;
            }
            
        }
        
    }

    if (isEqual)
    {
        printf("Strings are equal \n");
    }else {
        printf("Strings are not equal \n");
    }
    
}

/*
8.  Write a program in C to copy one string to another string.
    Test Data :
    Input the string : This is a string to be copied.

    Expected Output :

    The First string is : This is a string to be copied.
    The Second string is : This is a string to be copied. 
    Number of characters copied : 31 
*/

void answerNumber8(){
    char inputString[50];
    char *string1[50];
    char *string2[50];
    int len = 0;
    int index = 0;

    printf("Input the string : ");
    scanf("%s", inputString);

    while (inputString[index] != '\0')
    {   
        string1[index] = &inputString[index];
        string2[index] = string1[index];
        index++;
        len++;
    }

    printf("The first string is : %s\n", *string1);
    printf("The second string is : %s\n", *string2);
    printf("Number of characters copied : %d\n", len);
    
}

/*
9.  Write a program in C to count the total number of vowels or consonants in a string.

    Test Data :
    Input the string : Welcome to w3resource.com

    Expected Output :

    The total number of vowel in the string is : 9 
    The total number of consonant in the string is : 12 
*/

void answerNumber9(){
    char *vowels[5] = {"aiueo"};
    char str[50];
    int len = 0;
    int index = 0;

    int vowelsAmount = 0;
    int consonantsAmount = 0;

    printf("Input the string : ");
    scanf("%s", str);

    while (str[index] != '\0')
    {
        len++;
        index++;
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == *(*vowels+j))
            {   
                vowelsAmount++;
            }
            
        }
    }

    consonantsAmount = len - vowelsAmount;
    
    printf("The total number of vowel in the string is : %d\n", vowelsAmount);
    printf("The total number of consonant in the string is : %d\n", consonantsAmount);
    
}

/*
10. Write a program in C to find the maximum number of characters in a string.

    Test Data :
    Input the string : Welcome to w3resource.com.

    Expected Output :

    The Highest frequency of character 'e' appears number of times : 4 
*/

void answerNumber10(){}

/*
11. Write a C program to sort a string array in ascending order.

    Test Data :
    Input the string : w3resource

    Expected Output :

    After sorting the string appears like : 
    3ceeorrsuw 
*/

void answerNumber11(){
    char str[50];
    int index = 0, len = 0;

    printf("Input the string : ");
    scanf("%s", str);

    while (str[index] != '\0')
    {
        len++;
        index++;
    }
    
    for (int i = 0; i < len; i++)
    {   
        for (int j = i+1; j < len; j++)
        {
            if(str[i]+1 > str[j]+1){
                char tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;;
            }
        }
        
    }
    
    printf("After sorting the string appears like : %s\n", str);
}

/*
12. Write a program in C to read a string from the keyboard and sort it using bubble sort.

    Test Data :
    Input number of strings : 3
    Input string 3 :
    zero
    one
    two

    Expected Output :

    The strings appears after sorting : 
    one 
    two 
    zero 
*/

// void answerNumber12(){
//     // int one = 'o'+'n'+'e';
//     // int two = 't' + 'w' + 'o';
//     // int zero = 'z' + 'e' + 'r' + 'o';
//     // printf("%d\n", one);
//     // printf("%d\n", two);
//     // printf("%d\n", zero);

//     int len;
//     char *strings;
//     printf("Input number of strings : ");
//     scanf("%d", &len);

//     // stringAmount is the length of the array of the string
//     // 50 is the lengt of the array of the chars for each index in the array of the string
//     strings = (char*) malloc((50 * len) * sizeof(char));

//     if(strings == NULL){
//         printf("Memory not allocated.\n");
//         exit(0);
//     }else {
//         printf("Memory successfully allocated using malloc.\n");
//         for (int i = 0; i < len; i++)
//         {
//             scanf("%s\n", &strings[i]);
//         }
        
//     }
//     for (int i = 0; i < len; i++)
//     {
//         printf("%s\n", *(*strings[i]));
//     }
// }

/*
    18. Write a program in C to find the frequency of characters.

    Test Data :
    Input the string : This is a test string
    Input the character to find frequency: i

    Expected Output :

    The frequency of 'i' is : 3 
*/

void answerNumber18(){
    char str[100];
    char c;
    int len = 0;
    int index = 0;
    int freq = 0;

    printf("Input the string : ");
    scanf("%s", str);

    while (str[index] != '\0')
    {
        index++;
        len++;
    }
    
    printf("Input the character to find frequency : ");
    // adding whitespace to scanf to instruct the method to remove whitespace
    scanf(" %c", &c);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            freq++;
        }
        
    }
    
    printf("The frequency of %c is : %d\n", c, freq);
}

int main(){
    answerNumber18();
    return 0;
}