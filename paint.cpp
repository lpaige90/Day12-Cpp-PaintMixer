#include <iostream>
#include "paint.h"

//Combine two paint buckets
PaintBucket operator +(const PaintBucket &bucket1, const PaintBucket &bucket2) {
	std::string newColor;
	newColor = mixPaint(bucket1, bucket2);

	return PaintBucket(bucket1.amount+bucket2.amount, newColor);
}

//Are the paint colors the same?
bool operator ==(const PaintBucket &bucket1, const PaintBucket &bucket2) {
	return (bucket1.color == bucket2.color);
}

//Are the paint colors not the same?
bool operator !=(const PaintBucket &bucket1, const PaintBucket &bucket2) {
	return (bucket1.color != bucket2.color);
}

//Print the amount and color of paint in the bucket
void printBucket(PaintBucket bucket) {
	std::cout << "Amount (mL): " << bucket.amount << std::endl;
	std::cout << "Color: " << bucket.color << std::endl;
}

//Constructor
PaintBucket::PaintBucket(int paintAmount, std::string paintColor) {
	amount = paintAmount;
	color = paintColor;
}

//Default constructor
PaintBucket::PaintBucket() {
	amount = 0;
	color = "empty";
}

std::string mixPaint(const PaintBucket &bucket1, const PaintBucket &bucket2) {
	if (bucket1.color == bucket2.color) {
		return bucket1.color;//It doesn't matter if we return the color of bucket1 or bucket2 here
	} else if ((bucket1.color == "red" && bucket2.color == "yellow") || (bucket1.color == "yellow" && bucket2.color == "red")) {
		return "orange";
	} else if ((bucket1.color == "red" && bucket2.color == "blue") || (bucket1.color == "blue" && bucket2.color == "red")) {
		return "purple";
	} else if ((bucket1.color == "blue" && bucket2.color == "yellow") || (bucket1.color == "yellow" && bucket2.color == "blue")) {
		return "green";
	} else if ((bucket1.color == "red") || (bucket1.color == "yellow") || (bucket1.color == "blue") && bucket2.color == "empty") {
		return bucket1.color;
	} else if ((bucket2.color == "red") || (bucket2.color == "yellow") || (bucket2.color == "blue") && bucket1.color == "empty") {
		return bucket2.color;
	} else {
		return "Unrecognized color!";
	}
}