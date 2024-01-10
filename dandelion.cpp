#include <GLUT/glut.h>
#include <math.h>

void init() {
    glClearColor(0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 500.0, 0.0, 500.0, -1, 1);
}

void myDisplay(void) {
    float x, y;
    float a = 150.0, b = 150.0;
    float r = 50, t;
    
    float m, n;
    float c = 300.0, d = 300.0;
    float s = 70, u;

    glClear(GL_COLOR_BUFFER_BIT);

    // 1st Dandelion
    // 1 Line Curve
    glColor3d(1.0, 0.0, 0.0);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    for (t = 0; t < 1000; t++) {
        x = a + (r * cos(t));
        y = b + (r * sin(t));
        glVertex2f(x, y);
    }
    glEnd();

    // 1 Polygon curve
    glColor3d(0.0, 1.4, 1.3);
    glBegin(GL_POLYGON);
    for (t = 0; t < 800; t++) {
        x = a + (r * cos(t));
        y = b + (r * sin(t));
        glVertex2f(x, y);
    }
    glEnd();

    // 1 Line
    glColor3d(0.0, 1.4, 1.3);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f(150, 100);
    glVertex2f(150, 0);
    glEnd();

    // 2nd Dandelion
    // 2 Line Curve
    glColor3d(0.6, 0.4, 0.7);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    for (u = 0; u < 1000; u++) {
        m = c + (s * cos(u));
        n = d + (s * sin(u));
        glVertex2f(m, n);
    }
    glEnd();

    // 2 Polygon curve
    glColor3d(0.98, 0.04, 0.7);
    glBegin(GL_POLYGON);
    for (u = 0; u < 800; u++) {
        m = c + (r * cos(u));
        n = d + (r * sin(u));
        glVertex2f(m, n);
    }
    glEnd();

    // 2 Line
    glColor3d(0.6, 0.4, 0.7);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glVertex2f(300, 230);
    glVertex2f(300, 0);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dandelion");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}

