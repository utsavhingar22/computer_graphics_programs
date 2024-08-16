#include<graphics.h>
int main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(300,250,200);
	getch();
	closegraph();
	return 0;
}
