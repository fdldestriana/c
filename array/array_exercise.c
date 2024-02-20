#include <stdio.h>

/*
1. Write a program in C to store elements in an array and print them.
    Test Data :
    Input 10 elements in the array :
    element - 0 : 1
    element - 1 : 1
    element - 2 : 2
    .......
    Expected Output :
    Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

void answerNumber1(){
    int arr[10];
    
    printf("Input 10 elements in the array : \n");
    for(int i=0; i<10; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements in array are : ");
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
2. Write a program in C to read n number of values in an array and display them in reverse order.
    Test Data :
    Input the number of elements to store in the array :3
    Input 3 number of elements in the array :
    element - 0 : 2
    element - 1 : 5
    element - 2 : 7
    Expected Output :
    The values store into the array are : 2 5 7
    The values store into the array in reverse are : 7 5 2
*/

void answerNumber2(){
    int len;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &len);

    printf("Input %d number of elements in the array : \n", len);

    int arr[len];
    for(int i=0; i<len; ++i){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values store into the array are : ");
    for(int i=0; i<len; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The values store into the array in reverse are : ");
    for(int i=len-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
3.  Write a program in C to find the sum of all elements of the array.
    Test Data :
    Input the number of elements to be stored in the array :3
    Input 3 elements in the array :
    element - 0 : 2
    element - 1 : 5
    element - 2 : 8
    Expected Output :
    Sum of all elements stored in the array is : 15
*/

void answerNumber3(){
    int sum = 0, len;

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &len);

    printf("Input %d number of elements in the array : \n", len);
    
    int arr[len];
    for(int i=0; i<len; ++i){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<len; ++i){
        sum = sum + *(arr + i);
    }

    printf("Sum of all elements stored in the array is : %d\n", sum);
}

/*
4.  Write a program in C to copy the elements of one array into another array.
    Test Data :
    Input the number of elements to be stored in the array :3
    Input 3 elements in the array :
    element - 0 : 15
    element - 1 : 10
    element - 2 : 12
    Expected Output :
    The elements stored in the first array are : 15 10 12
    The elements copied into the second array are : 15 10 12
*/

void answerNumber4(){
    int len;

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &len);

    printf("Input %d number of elements in the array : \n", len);
    
    int firstArr[len];
    for(int i=0; i<len; ++i){
        printf("element - %d : ", i);
        scanf("%d", &firstArr[i]);
    }

    int secondArr[len];
    for(int i=0; i<len; ++i){
        secondArr[i] = firstArr[i];
    }

    printf("The elements stored in the first array are : ");
    for(int i=0; i<len; i++){
        printf("%d ", firstArr[i]);
    }
    printf("\n");
    printf("The elements copied into the second array are : ");
    for(int i=0; i<len; i++){
        printf("%d ", secondArr[i]);
    }
    printf("\n");
}

/*
5.  Write a program in C to count the total number of duplicate elements in an array.
    Test Data :
    Input the number of elements to be stored in the array :3
    Input 3 elements in the array :
    element - 0 : 5
    element - 1 : 1
    element - 2 : 1
    Expected Output :
    Total number of duplicate elements found in the array is : 1
*/

void answerNumber5(){
    int totalDuplicate = 0, len;
    printf("Input the number of elements to stored in the array : ");
    scanf("%d", &len);

    printf("Input %d number of elements in the array : \n", len);
    
    int arr[len];
    for(int i=0; i<len; ++i){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<len; ++i){
        for(int j=i+1; j<len; j++){
            if(arr[i] == arr[j]){
                totalDuplicate++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements found in the array is : %d\n", totalDuplicate+1);
}

int main(){
    // answerNumber1();
    // answerNumber2();
    // answerNumber3();
    // answerNumber4();
    answerNumber5();
    return 0;
}