## Table of contents
* [Problem Statement](#problem-statement)
* [Black Box](#black-box)
* [White Box](#white-box)

## Problem Statement
https://leetcode.com/explore/interview/card/amazon/76/array-and-strings/508/

### Input Details
"nums" is the array of integers
"target" is an integer

### Output Details
"idx1" is the index of first number in the array
"idx2" is the index of second number in the array

### Relation between input and output
nums[idx1] + nums[idx2] = target

### Assumptions
"nums" can have repetition of integers
idx1 cannot be equal to idx2
exactly one pair satisfies the relation between input and output

### Constraints
2 <= nums.length <= 105
-109 <= nums[i] <= 109
-109 <= target <= 109

## Black Box
The system will generate the output using the inputs so that the relation between
input and output is met

### Main Scenario
Input: nums contain all positive numbers and target is positive
What the system has to do: The system will select two numbers such that
nums[idx1] >= target/2 and nums[idx2] <= target/2

### Alternative Scenarios
Describe all the possible sad scenarios

#### Alternative Scenario 1
Input: nums contain all negative numbers and target is negative
What the system has to do: The system has to process main scenario in absolute
fashion

#### Alternative Scenario 2
Input: nums contain both positive and negative numbers and target is positive
What the system has to do: The system will select one positive and one negative
number such that nums[idx1] >= target and nums[idx2] <= 0

#### Alternative Scenario 3
Input: nums contain both positive and negative numbers and target is negative
What the system has to do: The system will select one positive and one negative
number such that nums[idx1] <= target and nums[idx2] >= 0

#### Alternative Scenario 4
Input: nums contain all positive numbers and target is negative
What the system has to do: This case is not possible based on assumptions

#### Alternative Scenario 5
Input: nums contain all negative numbers and target is positive
What the system has to do: This case is not possible based on assumptions

#### Alternative Scenario 6
Input: nums contain all positive numbers and target is less than the minimum number in nums
What the system has to do: This case is not possible based on assumptions

#### Alternative Scenario 7
Input: nums contain all negative numbers and target is greater than the maximum number in nums
What the system has to do: This case is not possible based on assumptions

## White Box
Describe how the system has to do

### Main Scenario
Describe the basic happy scenario

### Alternative Scenarios
Describe all the possible sad scenarios

#### Alternative Scenario 1
Scenario 1

#### Alternative Scenario 2
Scenario 2

