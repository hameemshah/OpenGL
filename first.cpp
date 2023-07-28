#include <GL/glut.h>

void init(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode (GL_PROJECTION);
    gluOrtho2D (-1, 1, -1, 1);
}
void lineSegment (void) {
    glClear (GL_COLOR_BUFFER_BIT);      //Clear display window
    glColor3f(0.0, 0.0, 0.2);   //set the line color
    typedef GLint vertex3 [3];
    vertex3 pt [8] = {{0, 0, 0}, {0, 1, 0}, {1,0,0}, {1, 1, 0}, {0, 0, 1}, {0, 1, 1}, {1, 0, 1}, {1, 1,1 }};
    for(int i = 0; i < 5; i++){
  glBegin(GL_QUADS);
    glVertex3iv (pt [1]);
    glVertex3iv (pt [2]);
    glVertex3iv (pt [3]);
    glVertex3iv (pt [4]);
  glEnd();
    }
    glFlush();
}
int main (int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize (400, 300);
    glutCreateWindow("My Winodw");

    init();
    glutDisplayFunc (lineSegment);
    glutMainLoop();
    return 0;
}
