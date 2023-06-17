## Problem Statement 
This is the two sum problem which is problem 1 on leetcode.com. 

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Simple approach
The brute-force approach is trivial, you compare each element and if it adds up to the target value you push back the respective indices and return the result vector which contains the indices. 

Time complexity: for this approach is O(n^2) since we are comparing each element to find its complement while looping through the rest of the array.

Space complexity: O(1)

The space required does not depend on the size of the input array, so only constant space is used.

## Better approach


## Running program
I have incorporated a argument manager obtained from the following URL: https://drive.google.com/drive/folders/1Yex48TruR1X7wOUskOSSkwMYi4bVaqeX.

The purpose of this argument manager is to simplify the manipulation of command line arguments. I implemented it to enable the passing of various input files through the command line. Subsequently, the driver program within the main() function parses the input file according to the specified format.

Regarding the current input.txt file, it contains test cases for the problem. Each test case consists of a target value followed by an array of integers. To utilize this input file, users only need to specify the input file by assigning it using the following syntax:
```
twosum.exe input=input.txt
```
