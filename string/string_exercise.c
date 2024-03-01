#include <stdio.h>


/*
Write a function to rearrange the string
char name = "fadly" -> "yldaf"
*/

void answerNumber1(){
    int len = 0, index = 0, subtractor = 1;
    char name[] = "michael";

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
w  3  r  e  s  o  u  r  c  e  .  c
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

int main(){
    answerNumber1();
    return 0;
}