#ifndef PAINT_H
#define PAINT_H
#include <string>

class PaintBucket {
	int amount;//in mL
	std::string color;//Primary or secondary color

	public:
		friend PaintBucket operator +(const PaintBucket &bucket1, const PaintBucket &bucket2);
		friend bool operator ==(const PaintBucket &bucket1, const PaintBucket &bucket2);
		friend bool operator !=(const PaintBucket &bucket1, const PaintBucket &bucket2);
		friend std::string mixPaint(const PaintBucket &bucket1, const PaintBucket &bucket2);
		friend void printBucket(PaintBucket bucket);

		PaintBucket(int paintAmount, std::string paintColor);
		PaintBucket();
};

#endif