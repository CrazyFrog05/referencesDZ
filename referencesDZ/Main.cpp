#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T>
void fill_arr(T arr[], const T length, T left, T rigth) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (rigth - left) + left;
}
template <typename T>
void print_arr(T arr[], const T length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
void res(int n1, int n2, int n3) {
	for (int i = 0; i < 3; i++) 
		if (n1 > n2 && n1 > n3) {
			n2 = n1;
			n3 = n1;
		}
		else
			if (n2 > n1 && n2 > n3) {
				n1 = n2;
				n3 = n2;
			}
			else
				if (n3 > n2 && n3 > n1) {
					n2 = n3;
					n1 = n3;
				}
	std::cout << n1 << ' ' << n2 << ' ' << n3 << ' ';
}

int ret(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] < 0) {
			std::cout << &arr[i] << ' ' << arr[i] << std::endl;
			break;
		}
		
	return 1;
}

/*void mass2(int* na1, const int length1, int* na2, const int length2) {
	for(int i = 0; i < length1; i++)
		for (int j = 0; j > length2; j++) {
			if (&na1[i] == &na2[j])
				na2[j] = 0;
		}
}*/

int main() {
	setlocale(LC_ALL, "Ru");
	int n, m, q;
	// Task1
	std::cout << " Enter 3 number -> ";
	std::cin >> n >> m >> q;
	res(n, m, q);
	std::cout << std::endl;

	// Task 2
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, -10, 10);
	print_arr(arr, size);
	ret(arr, size);

	// Task 3
	/*const int size1 = 10;
	int arr1[size1];
	int* pa1 = &arr1[0];
	fill_arr(arr1, size1, -10, 10);
	const int size2 = 10;
	int arr2[size2];
	int* pa2 = &arr2[0];
	fill_arr(arr2, size2, -10, 10);
	print_arr(arr1, size1);
	print_arr(arr2, size2);
	mass2(pa1, size1, pa2, size2);
	print_arr(arr2, size2);*/

	return 0;
}