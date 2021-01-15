// C++ progrma to sort an array
#include <algorithm>
#include <iostream>

using namespace std;

int requiredSumOfTwoNumbers = 17;
int target = requiredSumOfTwoNumbers/2;

bool isLessThenTargetBy2 (int i) { return (i<=target); }

void printArray(int a[], int size, const char *str) {
	 std::cout << str << ": [";
  for (int& x:a) std::cout << ' ' << x;
  std::cout << "]" << '\n';
	}

// Driver code
int main()
{
	std::vector<int> lessOrEqualToTarget;
	std::vector<int> greaterThenTarget;
	
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2};

	// size of the array
	int asize = sizeof(a) / sizeof(a[0]);

	// sort the array
	sort(a, a + asize);
	
	// print contents of Original array:
  printArray(a, asize,"sorted array");

	if(a[0] > 0) {
		auto it = std::partition_point(a, a + asize,IsOdd);
  lessOrEqualToTarget.assign (a,it);

  // print contents of odd:
  printArray(int *a, int size, const char *str)
  for (int& x:odd) std::cout << ' ' << x;
  std::cout << '\n';
	
		odd.assign (it,a+asize);
	
		
	 // print contents of odd:
  std::cout << "second half:";
  for (int& x:odd) std::cout << ' ' << x;
  std::cout << '\n';

	}	
		
	return 0;
}

