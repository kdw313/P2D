#ifndef COLOR_H
#define COLOR_H

struct Color {
	float r,g,b;
	Color();
	Color(float i, float j, float k);
	Color operator * (float f);
	Color operator +(const Color& c) const;
	void clamp();
};

// COLOR PRESETS
extern Color pastel_red;
extern Color pastel_gray;
extern Color pastel_green;
extern Color pastel_orange;
extern Color pastel_yellow;
extern Color pastel_purple;
extern Color pastel_blue;
extern Color pastel_pink;
extern Color black;
extern Color white;
extern Color red;
extern Color green;
extern Color blue;

extern Color BCKGRND;						// Background color

extern int uniCol;

#endif