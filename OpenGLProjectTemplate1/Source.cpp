#include <GL/glut.h>
#include <cmath>
#include <fstream>

#define PI 3.1416

const int screenWidth = 640;
const int screenHeight = 480;

const GLdouble A = screenWidth / 4.0, B = 0.0 , C = screenHeight/2.0, D = C;	//values used for scaling and shifting 

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);		//Background color white
	glColor3f(0.0f, 0.0f, 0.0f);	//Drawing color black
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, screenWidth, 0, screenHeight);
	glClear(GL_COLOR_BUFFER_BIT);
}

////Display lines
//void display(void)
//{
//	glBegin(GL_LINE_LOOP);
//	glVertex2i(20, 10);
//	glVertex2i(50, 10);
//	glVertex2i(20, 80);
//	glVertex2i(50, 80);
//	glEnd();
//	glFlush();
//}

//Dispaly graph of f(x) = pow(e, -x) * cos(2*PI*x) Domain (0, 4)
//GLdouble f(GLdouble x)
//{
//	GLdouble y = (std::exp(-x) * std::cos(2 * PI * x));
//	return y;
//}
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POINTS);
//	for (GLdouble x = 0; x < 4; x += 0.005)
//	{
//		GLdouble y = f(x);
//		glVertex2d(A * x + B, C * y + D);
//	}
//	glEnd();
//	glFlush();
//}

////Display graph of f(x)
//GLdouble f(GLdouble x)
//{
//	GLdouble y = 300 - 
//				(100 * std::cos((2 * PI * x )/ 100) )+
//				(30 * std::cos((4 * PI * x) /100)) +
//				(6 * std::cos((6 * PI * x) / 100));
//	return y;
//}
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POINTS);
//	for (GLdouble x = 0; x < 4; x += 0.005)
//	{
//		GLdouble y = f(x);
//		glVertex2d(A * x + B, C * y + D);
//	}
//	glEnd();
//	glFlush();
//}

//Dino form din.dat
void display(char* filename)
{

}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 150);
	glutInitWindowSize(screenWidth, screenHeight);
	glutCreateWindow("My Window");

	init();
	glutDisplayFunc(display);
	glutMainLoop();
}