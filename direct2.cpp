#include <GL/glut.h>
#include <iostream>
#define INC 0.001

float x1, y1, x2, y2, m, b;

void init(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0 , 100, 0, 100);
}

void drawLine() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    
    m = (y2 - y1) / (x2 - x1);
    b = y1 - (m * x1);

    glBegin(GL_POINTS);
    if (x1 <= x2 && y1 <= y2) {
        while (x1 <= x2 && y1 <= y2) {
            if (m <= 1) {
                x1 += INC;
                y1 = (m * x1) + b;
                glVertex2f(x1, y1);
            } if(m > 1) {
                y1+= INC;
                x1 = (y1 - b) / m;
                glVertex2f(x1, y1);
            }
        }
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    std::cout << "Enter x1, y1, x2, y2: ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(400, 500);
    glutCreateWindow("Direct Method Of Line Drawing");
    
	init();
    glutDisplayFunc(drawLine);
    glutMainLoop();
}

