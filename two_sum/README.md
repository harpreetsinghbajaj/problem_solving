## Table of contents
* [Problem Statement](#problem-statement)
* [Black Box](#black-box)
* [White Box](#white-box)
* [Pseudo Code](#pseudo-code)

## Problem Statement
https://leetcode.com/explore/interview/card/amazon/76/array-and-strings/508/

### Input Details
- "nums" is the array of integers
- "target" is an integer

### Output Details
- "idx1" is the index of first number in the array
- "idx2" is the index of second number in the array

### Relation between input and output
- nums[idx1] + nums[idx2] = target

### Assumptions
- "nums" can have repetition of integers
- idx1 cannot be equal to idx2
- exactly one pair satisfies the relation between input and output

### Constraints
- 2 <= nums.length <= 105
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Black Box
The system will generate the output using the inputs so that the relation between
input and output is met

### Main Scenario
- Input: nums contain all positive numbers and target is positive
- What the system has to do: The system will select two numbers such that
nums[idx1] >= target/2 and nums[idx2] <= target/2

### Alternative Scenarios
Describe all the possible other scenarios

#### Alternative Scenario 1
- Input: nums contain all negative numbers and target is negative
- What the system has to do: The system has to process main scenario in absolute fashion

#### Alternative Scenario 2
- Input: nums contain both positive and negative numbers and target is positive
- What the system has to do: The system will select one positive and one negative number such that nums[idx1] >= target and nums[idx2] <= 0

#### Alternative Scenario 3
- Input: nums contain both positive and negative numbers and target is negative
- What the system has to do: The system will select one positive and one negative
number such that nums[idx1] <= target and nums[idx2] >= 0

#### Alternative Scenario 4
- Input: nums contain all positive numbers and target is negative
- What the system has to do: This case is not possible based on assumptions

#### Alternative Scenario 5
- Input: nums contain all negative numbers and target is positive
- What the system has to do: This case is not possible based on assumptions

#### Alternative Scenario 6
- Input: nums contain all positive numbers and target is less than the minimum number in nums
- What the system has to do: This case is not possible based on assumptions

#### Alternative Scenario 7
- Input: nums contain all negative numbers and target is greater than the maximum number in nums
- What the system has to do: This case is not possible based on assumptions

## White Box
The system will process the input array to find out the two numbers such that
they sum to target

### Main Scenario
To solve the main scenario in black box section, follow the following steps:-
1. Sort the array nums in ascending order
2. calculate target/2
3. Use binary search to divide the array into parts at target/2
4. Select a number from one part and seach for (target - number) in other part

### Alternative Scenarios
Describe all the possible other scenarios

#### Alternative Scenario 1
To solve this scenario, the solution to main scenario has to be executed in absolute manner that is independent of the sign of numbers.

#### Alternative Scenario 2
To solve this scenario, the main scenario algorithm to be changed to divide the array in positive and negative numbers and then select a number in the negative array and search for target + mod(negative number) in the positive array to find the numbers.

#### Alternative Scenario 3
To solve this scenario, the main scenario algorithm to be changed to divide the array in positive and negative numbers and then select a number in the positive array and search for target - (positive number) in the negative array to find the numbers.

## Pseudo Code
```c++
Sort the array nums in ascending order;

If nums[0] is positive {
//all numbers are positive

Use binary search to divide nums into two parts such that left part is less and right part is greater than target/2;

Set dividerIdx = output of above step;

for (I from 0 to dividerIdx -1) {
Set num1 = nums[i];
Set num2 = target - num1;

Search num2 in array nums[dividerIdx] to nums[length - 1];

If (above step is successful) {
// numbers found
Return;
}
}
} else if nums[length - 1] is negative {
//all numbers are negative 
Use algorithm for all positive numbers with modulus of numbers;
} else {
// array has mix of negative and positive
// numbers 
Use binary search to divide array into positive and negative halfs;

Set dividerIdx = output of above step;

If(target is positive) {
for (I from 0 to dividerIdx -1) {
//select number from negative array 
Set num1 = nums[i];
Set num2 = target + mod(num1);

//search num2 in positive part 
Search num2 in array nums[dividerIdx] to nums[length - 1];

If (above step is successful) {
// numbers found
Return;
}If(target is negative){


for (I from dividerIdx to length - 1) {
//select number from positive array 
Set num1 = nums[i];
Set num2 = target - num1;

//search num2 in negative part 
Search num2 in array nums[0] to nums[dividerIdx];

If (above step is successful) {
// numbers found
Return;

}
}

 ```