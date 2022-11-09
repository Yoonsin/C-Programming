#pragma once
class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setfill(char f);
	void setSize(int w, int h);
	void draw();
};
