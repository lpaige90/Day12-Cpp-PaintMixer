#include <iostream>
#include "paint.h"

int main() {
	PaintBucket redBucket(300, "red");
	PaintBucket yellowBucket(250, "yellow");
	PaintBucket blueBucket(325, "blue");
	PaintBucket smallRedBucket(150, "red");
	PaintBucket emptyBucket;

	std::cout << "\n====Available Paints====" << std::endl;
	std::cout << "\n--Bucket 1--" << std::endl;
	printBucket(redBucket);
	std::cout << "\n--Bucket 2--" << std::endl;
	printBucket(yellowBucket);
	std::cout << "\n--Bucket 3--" << std::endl;
	printBucket(blueBucket);
	std::cout << "\n--Bucket 4--" << std::endl;
	printBucket(smallRedBucket);
	std::cout << "\n--Bucket 5--" << std::endl;
	printBucket(emptyBucket);

	if (redBucket == smallRedBucket) {
		std::cout << "\nBucket 1 and Bucket 4 hold the same color paint." << std::endl;
	} else {
		std::cout << "\nBucket 1 and Bucket 4 do not hold the same color paint." << std::endl;
	}

	if (yellowBucket == blueBucket) {
		std::cout << "\nBucket 2 and Bucket 3 hold the same color paint." << std::endl;
	} else {
		std::cout << "\nBucket 2 and Bucket 3 do not hold the same color paint." << std::endl;
	}

	std::cout << "\n================" << std::endl;
	std::cout << "Time to mix!" << std::endl;
	std::cout << "================" << std::endl;

	std::cout << "\nIf we combined Bucket 1 and Bucket 2..." << std::endl;
	std::cout << "\n--Properties of New Bucket--" << std::endl;
	PaintBucket newBucket1 = redBucket + yellowBucket;
	printBucket(newBucket1);

	std::cout << "\nIf we combined Bucket 2 and Bucket 3..." << std::endl;
	std::cout << "\n--Properties of New Bucket--" << std::endl;
	PaintBucket newBucket2 = yellowBucket + blueBucket;
	printBucket(newBucket2);

	std::cout << "\nIf we combined Bucket 3 and Bucket 4..." << std::endl;
	std::cout << "\n--Properties of New Bucket--" << std::endl;
	PaintBucket newBucket3 = blueBucket + smallRedBucket;
	printBucket(newBucket3);

	std::cout << "\nIf we combined Bucket 1 and Bucket 4..." << std::endl;
	std::cout << "\n--Properties of New Bucket--" << std::endl;
	PaintBucket newBucket4 = redBucket + smallRedBucket;
	printBucket(newBucket4);

	std::cout << "\nIf we combined Bucket 2 and Bucket 5..." << std::endl;
	std::cout << "\n--Properties of New Bucket--" << std::endl;
	PaintBucket newBucket5 = yellowBucket + emptyBucket;
	printBucket(newBucket5);
}