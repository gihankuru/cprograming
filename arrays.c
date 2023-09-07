/* SYSC 2006 Lab 3. 

 * Incomplete implementations of the functions that will be coded during the lab.
 */

#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "arrays.h"
#include "math.h"

/* Exercise 1. */

/* Return the average magnitude of the signal represented by
 * the n doubles in x[]. 
 * This function assumes that parameter n is >= 1.
 */
double sum_array(double x[], int n) /*Helper function*/
{
	double sum = 0;
	for(int i = 0; i<n; i+=1) {
		sum = sum + fabs(x[i]);
	}
	return sum;
}

double avg_magnitude(double x[], int n)
{
	double total;
	total = sum_array(x,n);
	return total/n;
}

/* Exercise 2. */

/* Return the average power of the signal represented by
 * the n doubles in x[].
 * This function assumes that parameter n is >= 1.
 */

double sum_array_squared(double x[], int n) /*Helper function*/
{
	double sum = 0;
	for(int i = 0; i<n; i+=1) {
		sum = sum + fabs(pow(x[i],2));
	}
	return sum;
}


double avg_power(double x[], int n)
{
    double total_squared;
	total_squared = sum_array_squared(x,n);
	return total_squared/n;
}

/* Exercise 3. */

/* Return the largest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */

double max(double arr[], int n)
{
	double max = arr[0];
    for(int i = 0; i<n; i+=1){
		if (max<arr[i]){
			max = arr[i];
		}
	}
	return max;
}

/* Exercise 4. */

/* Return the smallest of the n doubles in arr[]. 
 * This function assumes that parameter n is >= 1.
 */
double min(double arr[], int n)
{
	double min = arr[0];
    for(int i = 0; i<n; i+=1){
		if (min>arr[i]){
			min = arr[i];
		}
	}
	return min;
}

/* Exercise 5. */

/* Normalize the n doubles in x[]. 
 * This function assumes that parameter n is >= 2, and that at least
 * two of the values in x[] are different.
 */
void normalize(double x[], int n)
{
	double minimum = min(x,n);
	double maximum = max(x,n);
	for(int i=0; i<n; i+=1){
		x[i] = (x[i]-minimum)/(maximum-minimum);
	}

}
