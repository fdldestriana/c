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

int main(){
    answerNumber1();
    return 0;
}