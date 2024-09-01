/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief implementation file for C-code
 *
 * This file contains the code needed to
 * print the statistics of an array to the 
 * screen
 *
 * @author TCHOUTEZO TCHINDA WILSON
 * @date <01/09/2024 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


/*void print_statistics(unsigned char arr[], unsigned char len);
void sort_array(unsigned char arr[], unsigned char len);
unsigned char find_minimum(unsigned char arr[], unsigned char len);
unsigned char find_maximum(unsigned char arr[], unsigned char len);
unsigned char find_mean(unsigned char arr[], unsigned char len);
unsigned char find_median(unsigned char arr[], unsigned char len);
void print_array(unsigned char arr[], unsigned char len);*/


void main() {

 unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
print_array(test, SIZE);
printf("\nThe median is: %d\n", find_median(test, SIZE));
printf("The mean is: %d\n", find_mean(test, SIZE));
printf("The max value is: %d\n", find_maximum(test, SIZE));
printf("The min value is: %d\n", find_minimum(test, SIZE));
sort_array(test, SIZE);
printf("\n");
print_statistics(test, SIZE);
}
void print_statistics(unsigned char arr[], unsigned char len){
	print_array(arr, SIZE);
printf("\nThe median is: %d\n", find_median(arr, SIZE));
printf("The mean is: %d\n", find_mean(arr, SIZE));
printf("The max value is: %d\n", find_maximum(arr, SIZE));
printf("The min value is: %d\n", find_minimum(arr, SIZE));
sort_array(arr, SIZE);
printf("\n");
}
void sort_array(unsigned char arr[], unsigned char len){
	unsigned char i, j, t;
	for(i=1; i<=len-1; i++){
		for(j=0; j<len-1; j++){
			if(arr[j] < arr[j+1]){
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	for(i=0; i<len; i++){
		printf("%d ", arr[i]);
	}
}
unsigned char find_minimum(unsigned char arr[], unsigned char len){
        unsigned char i, min;
        min = arr[0];
        for(i=0; i<len; i++){
                if(arr[i] < min){
                        min = arr[i];
                }else
                        continue;
        }
        return min;
}

unsigned char find_maximum(unsigned char arr[], unsigned char len){
	unsigned char i, max;
	max = arr[0];
	for(i=0; i<len; i++){
		if(arr[i] > max){
			max = arr[i];
		}else
			continue;
	}
	return max;
}

unsigned char find_mean(unsigned char arr[], unsigned char len){
	unsigned char i, mean;
	int sum = 0;
	for(i=0; i<len; i++){
		sum += arr[i];
	}
	mean = sum/len;
	return mean;
}
unsigned char find_median(unsigned char arr[], unsigned char len){
	int i, j, t , median;
	for(i=1; i<=len-1; i++){
		for(j=0; j<len-1; j++){
			if(arr[j] > arr[j+1]){
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	if(len%2 == 0){
		median = (arr[len/2] + arr[len/2+1])/2-1;
	}else
		median = arr[(len-1)/2];
	}
	return median;
}
void print_array(unsigned char arr[], unsigned char len){
	for(int i=0; i<len; i++){
		printf("%d ", arr[i]);
	}
}
/* Add other Implementation File Code Here */
