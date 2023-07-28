#include <GL/glut.h>

void init(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}
// Function to draw the cube
void drawCube() {
    glBegin(GL_QUADS);
    // Front face
    glColor3f(1.0, 0.0, 0.0);  // Set color to red
    glVertex3f(-0.5, -0.5, 0.5);  // Bottom-left
    glVertex3f(0.5, -0.5, 0.5);   // Bottom-right
    glVertex3f(0.5, 0.5, 0.5);    // Top-right
    glVertex3f(-0.5, 0.5, 0.5);   // Top-left

    // Back face
    glColor3f(0.0, 1.0, 0.0);  // Set color to green
    glVertex3f(-0.5, -0.5, -0.5);  // Bottom-left
    glVertex3f(-0.5, 0.5, -0.5);   // Top-left
    glVertex3f(0.5, 0.5, -0.5);    // Top-right
    glVertex3f(0.5, -0.5, -0.5);   // Bottom-right

    // Remaining faces...
    // ...

    glEnd();
}

// Display callback function
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 3.0,  // Eye position
              0.0, 0.0, 0.0,  // Look-at position
              0.0, 1.0, 0.0); // Up direction

    glRotatef(30.0, 1.0, 1.0, 1.0);  // Rotate the cube

    drawCube();

    glFlush();
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Cube Example");
    init();
    glutDisplayFunc(display);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    return 0;
}
