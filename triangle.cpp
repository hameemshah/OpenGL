#include <GL/glut.h>
void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);	//White Background
	glMatrixMode(GL_PROJECTION);	//Use projection matrix
	gluOrtho2D(0, 500, 0, 600);
}
void draw(void) {
	glClear(GL_COLOR_BUFFER_BIT);		//clear display window
	glColor3f(0.0, 0.0, 1.0);	//Set pencolor to blue
	glBegin(GL_TRIANGLE_STRIP);
		glVertex2i(0,0);
		glVertex2i(0, 100);
		glVertex2i(100, 100);
	glEnd();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(500, 600);
	glutCreateWindow("MY WINDOW");
	init();
	glutDisplayFunc(draw);
	glutMainLoop();
}
