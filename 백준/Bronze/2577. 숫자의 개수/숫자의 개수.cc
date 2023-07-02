#include <iostream>

int main() {
	int A,B,C;
	int arrCount[10]={0};
	int num=0;
	int mul;

	std::cin >> A >> B >> C ;

	mul = A * B * C;

	for (; mul>0; mul/=10) {
		arrCount[mul % 10]++;
	}
	for (num = 0; num < 10; num++) {
		std::cout << arrCount[num] << std::endl;
	}
}