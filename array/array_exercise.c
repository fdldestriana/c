#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

/*
6.  Write a program in C to print all unique elements in an array.
    Test Data :
    Print all unique elements of an array:
    ------------------------------------------
    Input the number of elements to be stored in the array: 4
    Input 4 elements in the array :
    element - 0 : 3
    element - 1 : 2
    element - 2 : 2
    element - 3 : 5
    Expected Output :
    The unique elements found in the array are : 3 5
*/

void answerNumber6(){
    // NOT SOLVED YET
    int len;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &len);

    int arr1[len];
    int arr2[len];
    printf("Input %d elements in the array : \n", len);
    for(int i=0; i<len; i++){ 
        printf("element - %d : ", i); 
        scanf("%d", &arr1[i]);
    }

    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr1[i] == arr1[j]){
                break;
            }
        }
        arr2[i] = arr1[i];
        printf("arr1 %d arr2 %d\n", arr1[i], arr2[i]);
    }

    printf("The unique elements found in the array are : ");
    for(int i=0; i<len; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
}

/*
7.  Write a program in C to merge two arrays of the same size sorted in descending order.
    Test Data :
    Input the number of elements to be stored in the first array :3
    Input 3 elements in the array :
    element - 0 : 1
    element - 1 : 2
    element - 2 : 3
    Input the number of elements to be stored in the second array :3
    Input 3 elements in the array :
    element - 0 : 1
    element - 1 : 2
    element - 2 : 3
    Expected Output :
    The merged array in decending order is : 3 3 2 2 1 1
*/

void answerNumber7(){
    int len;
    int totalLength = 0;

    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &len);
    totalLength = totalLength + len;
    printf("Input %d elements in the array : \n", len);
    
    int arr1[len];
    for(int i=0; i<len; i++){ 
        printf("element - %d : ", i); 
        scanf("%d", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &len);
    if(len != (sizeof(arr1)/sizeof(int))){ printf("The number of elements of the second array not as big as the number elements of the first array\n"); exit(0); }
    totalLength = totalLength + len;
    printf("Input %d elements in the array : \n", len);
    
    int arr2[len];
    for(int i=0; i<len; i++){ 
        printf("element - %d : ", i); 
        scanf("%d", &arr2[i]);
    }
    
    int arr3[totalLength];
    for(int i=0; i<totalLength/2; i++){
        arr3[i] = arr1[i];
    }

    int j=0;
    for(int i=totalLength-1; i>=totalLength/2; i--){
        arr3[i] = arr2[j];
        j++;
    }

    for(int i=0; i<totalLength; i++){
        for(int j=i+1; j<totalLength; j++){
            if(arr3[i] < arr3[j]){
                int tmp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = tmp;
            }
        }
    }

    printf("The merged array in descending order is : ");
    for(int i=0; i<totalLength; i++){
        printf("%d ", arr3[i]);
    }
    printf("\n");
}

/*
8.  Write a program in C to count the frequency of each element of an array.
    Test Data :
    Input the number of elements to be stored in the array :3   
    Input 3 elements in the array :
    element - 0 : 25
    element - 1 : 12
    element - 2 : 43
    Expected Output :
    The frequency of all elements of an array :
    25 occurs 1 times
    12 occurs 1 times
    43 occurs 1 times
*/

void answerNumber8(){
    // NOT SOLVED YET
}

/*
9.  Write a program in C to find the maximum and minimum elements in an array.
    Test Data :
    Input the number of elements to be stored in the array :3
    Input 3 elements in the array :
    element - 0 : 45
    element - 1 : 25
    element - 2 : 21
    Expected Output :
    Maximum element is : 45
    Minimum element is : 21
*/

void answerNumber9(){
    int len, min=100, max=0;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &len);

    int arr[len];
    printf("Input %d elements in the array : \n", len);
    for(int i=0; i<len; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i] > arr[j]){
                min = arr[j];
            }
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

}

int main(){
    // answerNumber1();
    // answerNumber2();
    // answerNumber3();
    // answerNumber4();
    // answerNumber5();
    // answerNumber6();
    // answerNumber7();
    // answerNumber8();
    answerNumber9();
    return 0;
}