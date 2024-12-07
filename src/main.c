#include "main.h"
#include <GL/glut.h>

/**
 * display - Handles the rendering of the OpenGL scene
 */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // PlaceHolder for Cube rendering
    glutSwapBuffers();
}

/**
 * main - Code entry point
 * 
 * Return: always 0.
 *  otherwise 1;
 */
int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow(WINDOW_TITLE);

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}