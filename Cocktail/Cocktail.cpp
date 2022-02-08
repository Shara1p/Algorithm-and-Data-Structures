#include <iostream>

void shaker(int* Array, int size) {

	int left = 0;
	int right = size - 1;
	int temp;

	while ((left != right - 1)) {
		
		for (int i = left; i < right; i++) {
			if (Array[i + 1] > Array[i]) {
				temp = Array[i];
				Array[i] = Array[i + 1];
				Array[i + 1] = temp;
			}
		}
		right--;

		for (int i = right; i > left; i--) {
			if (Array[i - 1] < Array[i]) {
				temp = Array[i];
				Array[i] = Array[i - 1];
				Array[i - 1] = temp;
			}
		}
		left++;	
	}

	}

int main()
{

	int Array[8]{ 44, 55, 12, 42, 94, 18, 6, 67 };

	shaker(Array, 8);
	std::cout << "Result: " << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << Array[i] << " ";
	}

}

