#include <GL/glut.h>
#include <iostream>
#define INC 0.001

float x, y, x1, y1, x2, y2, m, b;

void init (void) {
	glClearColor(1.0, 1.0, 1.0, 1.0);	//White Background
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 100, 0, 100);
}
void draw(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
		glVertex2f(x, y);
	glEnd();
	glFlush();
}
int main(int argc, char** argv) {
	std::cout << "Enter x1, y1, x2, y2: ";
    std::cin >> x1 >> y1 >> x2 >> y2;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("DDA LINE DRAWING ALGORITHM");
	
	init();
	glutDisplayFunc(draw);
	glutMainLoop();
	
}
