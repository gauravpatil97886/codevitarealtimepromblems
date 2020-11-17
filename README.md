# codevitarealtimepromblems


## 1. Prime time again
Here on earth, our 24-hour day is composed of two parts, each of 12 hours. Each hour in each part has a corresponding hour in the other part separated by 12 hours: the hour essentially measures the duration since the start of the day part. For example, 1 hour in the first part of the day is equivalent to 13, which is 1 hour into the second part of the day.

Now, consider the equivalent hours that are both prime numbers. We have 3 such instances for a 24-hour 2-part day:

5 ~ 17

7 ~ 19

11 ~ 23



Accept two natural numbers D, P >1 corresponding respectively to number of hours per day and number of parts in a day separated by a space. D should be divisible by P, meaning that the number of hours per part (D/P) should be a natural number. Calculate the number of instances of equivalent prime hours. Output zero if there is no such instance. Note that we require each equivalent hour in each part in a day to be a prime number.



## Example:

### Input: 24  2

### Output: 
3 (We have 3 instances of equivalent prime hours: 5 ~ 17, 7 ~ 19 and 11 ~ 23.)

Constraints

10 <= D < 500

2 <= P < 50



### Input

Single line consists of two space separated integers, D and P corresponding to number of. hours per day and number of parts in a day respectively

### Output

Output must be a single number, corresponding to the number of instances of equivalent prime number, as described above



## Example 2

### Input

36  3

### Output

2



## Explanation

In the given test case D = 36 and P = 3

Duration of each day part = 12

2 ~ 14 ~ X

3 ~ 15 ~ X

5 ~ 17 ~ 29 - instance of equivalent prime hours

7 ~ 19 ~ 31 - instance of equivalent prime hours

11 ~ 23 ~ X 

Hence the answers is 2.

------------------------------------------------------------------------

## 2. Minimize the sum

Given an array of integers, perform atmost K operations so that the sum of elements of final array is minimum. An operation is defined as follows -

Consider any 1 element from the array, arr[i].

Replace arr[i] by floor(arr[i]/2).

Perform next operations on updated array.

The task is to minimize the sum after utmost K operations.



Constraints

1 <= N, K <= 10^5.



Input

First line contains two integers N and K representing size of array and maximum numbers of operations that can be performed on the array respectively.

Second line contains N space separated integers denoting the elements of the array, arr.



Output

Print a single integer denoting the minimum sum of the final array.



Input

4 3

20 7 5 4



Output

17



Explanation

Operation 1 -> Select 20. Replace it by 10. New array = [10, 7, 5, 4]

Operation 2 -> Select 10. Replace it by 5. New array = [5, 7, 5, 4].

Operation 3 -> Select 7. Replace it by 3. New array = [5,3,5,4].

Sum = 17.

--------------------------------------------------------------------------------------------

