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
 * @file stats.h 
 * @brief Header file for C-code
 *
 * This file contains forward declarations with descriptions of
 * functions used in the stats.c file.
 *
 * @author TCHOUTEZO TCHINDA WILSON
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void sort_array(unsigned char arr[], unsigned char len);

/**
 * @brief sorts an array of characters from largest to smallest
 *
 * This function takes as input an array and its lengnth: and sorts them in
 * descending order.
 *
 * @param test The array to be sorted
 * @param SIZE The size of the array
 *
 * @return Prints the sorted array
 */

unsigned char find_minimum(unsigned char arr[], unsigned char len);
/**
 * @brief Finds the minimum value of an array of characters
 * 
 * This function takes an array of characters and its length as input and evaluate the 
 * minimum value of that array.
 * 
 * @param test The array to be evaluated
 * @param SIZE The size of the array
 *
 *@return The minimum value of the array
 */

unsigned char find_maximum(unsigned char arr[], unsigned char len);
/**
 * @brief Finds the maximum value of an array of characters
 *
 * This function takes an array of characters and its length as input and evaluate the
 * maximum value of that array.
 *
 * @param test The array to be evaluated
 * @param SIZE The size of the array
 *
 *@return The maximum value of the array
 */

unsigned char find_mean(unsigned char arr[], unsigned char len);
/**
 * @brief Finds the mean of an array of characters
 *
 * This function takes an array of characters and its length as input and evaluate the
 * mean of that array.
 *
 * @param test The array to be evaluated
 * @param SIZE The size of the array
 *
 *@return The mean of the array
 */

unsigned char find_median(unsigned char arr[], unsigned char len);
/**
 * @brief Finds the median of an array of characters
 *
 * This function takes an array of characters and its length as input and evaluate the
 * median of that array.
 *
 * @param test The array to be evaluated
 * @param SIZE The size of the array
 *
 *@return The median of the array
 */

void print_array(unsigned char arr[], unsigned char len);
/**
 * @brief Prints an array of characters
 *
 * This function takes an array of characters and its length as input and prints the
 * array to the screen.
 *
 * @param test The array to be printed
 * @param SIZE The size of the array
 *
 *@return Prints the median of the array
 */

void print_statistics(unsigned char arr[], unsigned char len);
/**
 * @brief Prints the statistics of an array of characters
 *
 * This function takes an array of characters and its length as input and prints the
 * statistics of the array to the screen: including mean, maximum, minimum, median
 *
 * @param test The array whose statistics is to be printed
 * @param SIZE The size of the array
 *
 *@return Prints the statistics of the array
 */


#endif /* __STATS_H__ */
