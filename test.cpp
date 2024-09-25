#include <GL/glut.h>

// Function to render the display
void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the window
    glColor3f(1.0, 0.0, 0.0);      // Set the drawing color to red
    glBegin(GL_POLYGON);           // Draw a polygon (in this case, a square)
        glVertex2f(-0.5, -0.5);
        glVertex2f( 0.5, -0.5);
        glVertex2f( 0.5,  0.5);
        glVertex2f(-0.5,  0.5);
    glEnd();
    glFlush();                     // Finish and display the result
}

int main(int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200, 100);
    glutInitWindowSize(500, 500);

    glutCreateWindow("Window 1");

    glutDisplayFunc(display);

    glutMainLoop();  // Start the main loop
}
