/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //Definimos Lienas X de referencia
    glColor3d(.9,0,0);
    glPushMatrix();
        glTranslated(-4,0,-4);
        glScalef(10000,1,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lineas Y de referencia
    glColor3d(0,.9,0);
    glPushMatrix();
        glTranslated(0,-4,-4);
        glScalef(1,10000,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lienas XTOP de referencia
    glColor3d(.9,.9,0);
    glPushMatrix();
        glTranslated(-1,1,-4);
        glScalef(1000,1,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lienas XDOWN de referencia
    glColor3d(.9,.9,0);
    glPushMatrix();
        glTranslated(-1,-1,-4);
        glScalef(1000,1,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lineas YLEFT1 de referencia
    glColor3d(0,0,1);
    glPushMatrix();
        glTranslated(-1,-4,-4);
        glScalef(1,10000,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lineas YLEFT2 de referencia
    glColor3d(0,0,1);
    glPushMatrix();
        glTranslated(-2,-4,-4);
        glScalef(1,10000,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lineas YRIGHT1 de referencia
    glColor3d(0,0,1);
    glPushMatrix();
        glTranslated(1,-4,-4);
        glScalef(1,10000,1);
        glutSolidCube(.009);
    glPopMatrix();
    //Definimos Lineas YRIGHT2 de referencia
    glColor3d(0,0,1);
    glPushMatrix();
        glTranslated(2,-4,-4);
        glScalef(1,10000,1);
        glutSolidCube(.009);
    glPopMatrix();



    //Definimos edificios Color AZUL

    //Ni
    glColor3d(0,0,1);
    glPushMatrix();
        glTranslated(0,2.1,-6);
        glScalef(1.5,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //A
    glPushMatrix();
        glTranslated(-2.35,.35,-6);
        glScalef(4,1.4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //B
    glPushMatrix();
        glTranslated(-1.2,.45,-6);
        glScalef(4.5,1.4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //C
    glPushMatrix();
        glTranslated(-1.2,.05,-6);
        glScalef(4.5,1.4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //N
    glPushMatrix();
        glTranslated(-.20,1.25,-6);
        glutSolidCube(.15);
    glPopMatrix();
    //M
    glPushMatrix();
        glTranslated(-.35,.98,-6);
        glutSolidCube(.15);
    glPopMatrix();
    //L
    glPushMatrix();
        glTranslated(.1,.57,-6);
        glScalef(2.5,1.1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //SUM
    glPushMatrix();
        glTranslated(-2.25,-.35,-6);
        glutSolidCube(.18);
    glPopMatrix();
    //E
    glPushMatrix();
        glTranslated(.8,-1.2,-6);
        glScalef(4,1,1);
        glutSolidCube(.14);
    glPopMatrix();
    //D
    glPushMatrix();
        glTranslated(1.6,-.75,-6);
        glScalef(3.4,2.2,1);
        glutSolidCube(.12);
    glPopMatrix();
    //H
    glPushMatrix();
        glTranslated(.07,-1.7,-6);
        glScalef(2.4,1.4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //F
    glPushMatrix();
        glTranslated(1.15,-1.6,-6);
        glScalef(5,1,1);
        glutSolidCube(.14);
    glPopMatrix();
    //G
    glPushMatrix();
        glTranslated(1.25,-1.9,-6);
        glScalef(4,1,1);
        glutSolidCube(.14);
    glPopMatrix();
    //I
    glPushMatrix();
        glTranslated(.67,-2.62,-6);
        glScalef(3,2,1);
        glRotated(-45,1,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //J
    glPushMatrix();
        glTranslated(.97,-2.25,-6);
        glutSolidCube(.13);
    glPopMatrix();
    //K
    glPushMatrix();
        glTranslated(1.9,-1.94,-6);
        glutSolidCube(.15);
    glPopMatrix();

    //DEfinimos Edificios color ROJO
    glColor3d(1,0,0);

    //4
    glPushMatrix();
        glTranslated(-2.55,.02,-6);
        glScalef(3.7,1.5,1);
        glutSolidCube(.12);
    glPopMatrix();
    //23
    glPushMatrix();
        glTranslated(.22,-2,-6);
        glScalef(3.8,1,1);
        glutSolidCube(.12);
    glPopMatrix();

    //Definimos edificios Color GRIS

    //10
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(-.5,2.2,-6);
        glScalef(4,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //9
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(-.84,1.6,-6);
        glScalef(1,1.5,1);
        glutSolidCube(.15);
    glPopMatrix();
    //11
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(-.19,1.6,-6);
        glScalef(4.2,1.1,1);
        glutSolidCube(.13);
    glPopMatrix();
    //12
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(.42,1.6,-6);
        glScalef(4,2,1);
        glutSolidCube(.12);
    glPopMatrix();
    //6
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(-2.9,.7,-6);
        glRotated(-20,1,1,1);
        glutSolidCube(.14);
    glPopMatrix();
    //7
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(-2.1,.75,-6);
        glScalef(2.1,2,1);
        glutSolidCube(.12);
    glPopMatrix();
    //8
    glColor3d(.6,.6,.6);
    glPushMatrix();
        glTranslated(-1.75,.85,-6);
        glScalef(2,3,1);
        glutSolidCube(.12);
    glPopMatrix();
    //5
    glPushMatrix();
        glTranslated(-1.8,.19,-6);
        glScalef(1,4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //13
    glPushMatrix();
        glTranslated(-.52,.75,-6);
        glScalef(1.4,1,1);
        glutSolidCube(.13);
    glPopMatrix();
    //15
    glPushMatrix();
        glTranslated(.17,-.15,-6);
        glScalef(3.4,4.3,1);
        glutSolidCube(.12);
    glPopMatrix();
    //16
    glPushMatrix();
        glTranslated(1.25,-.05,-6);
        glScalef(3.8,5.8,1);
        glutSolidCube(.12);
    glPopMatrix();
    //3
    glPushMatrix();
        glTranslated(-2,-.35,-6);
        glScalef(1.6,1,1);
        glutSolidCube(.18);
    glPopMatrix();
    //2
    glPushMatrix();
        glTranslated(-1.2,-.6,-6);
        glScalef(3,2.7,1);
        glutSolidCube(.12);
    glPopMatrix();
    //1
    glPushMatrix();
        glTranslated(-1.2,-1.1,-6);
        glScalef(3,2.7,1);
        glutSolidCube(.12);
    glPopMatrix();
    //14
    glPushMatrix();
        glTranslated(-.6,-.25,-6);
        glScalef(1.2,1,1);
        glutSolidCube(.18);
    glPopMatrix();
    //17
    glPushMatrix();
        glTranslated(.8,-.8,-6);
        glutSolidCube(.3);
    glPopMatrix();
    //25
    glPushMatrix();
        glTranslated(.2,-1.45,-6);
        glScalef(4.4,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //18
    glPushMatrix();
        glTranslated(2.3,-1.25,-6);
        glScalef(1.5,3,1);
        glutSolidCube(.12);
    glPopMatrix();
    //24
    glPushMatrix();
        glTranslated(.34,-1.7,-6);
        glScalef(2,1.4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //22
    glPushMatrix();
        glTranslated(.65,-2.25,-6);
        glScalef(4.2,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //21
    glPushMatrix();
        glTranslated(1.4,-2.25,-6);
        glScalef(1.8,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //20
    glPushMatrix();
        glTranslated(1.6,-2.1,-6);
        glScalef(2,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //26
    glPushMatrix();
        glTranslated(.49,-2.48,-6);
        glScalef(1.8,1,1);
        glRotated(-45,1,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //27
    glPushMatrix();
        glTranslated(.37,-2.59,-6);
        glScalef(1.8,1,1);
        glRotated(-45,1,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //19
    glPushMatrix();
        glTranslated(1.9,-1.7,-6);
        glScalef(1.3,2.5,1);
        glutSolidCube(.12);
    glPopMatrix();

    //Definimos edificios Color NARANJA
    glColor3d(1,.5,0);

    //Edificio VIII
    glPushMatrix();
        glTranslated(-.5,2.08,-6);
        glScalef(4,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //Edificio II
    glPushMatrix();
        glTranslated(-1.6,1.8,-6);
        glutSolidCube(.15);
    glPopMatrix();
    //Edificio VII
    glPushMatrix();
        glTranslated(-1,1.6,-6);
        glScalef(1,1.5,1);
        glutSolidCube(.15);
    glPopMatrix();
    //Edificio I
    glPushMatrix();
        glTranslated(-1.75,1.3,-6);
        glScalef(2,2,1);
        glutSolidCube(.12);
    glPopMatrix();
    //Edificio IV
    glPushMatrix();
        glTranslated(-1.1,1.1,-6);
        glScalef(2.2,2,1);
        glutSolidCube(.13);
    glPopMatrix();
    //Edificio III
    glPushMatrix();
        glTranslated(-1.1,.83,-6);
        glScalef(2.2,2,1);
        glutSolidCube(.13);
    glPopMatrix();
    //Edificio VI
    glPushMatrix();
        glTranslated(-.5,1.1,-6);
        glScalef(3.7,3.2,1);
        glutSolidCube(.12);
    glPopMatrix();
    //Edificio IX
    glPushMatrix();
        glTranslated(.19,-1.45,-6);
        glScalef(4,1,1);
        glutSolidCube(.12);
    glPopMatrix();
    //V
    glPushMatrix();
        glTranslated(-.65,.3,-6);
        glScalef(1.2,5.3,1);
        glutSolidCube(.12);
    glPopMatrix();
    //Edificio IX
    glPushMatrix();
        glTranslated(.2,1.3,-6);
        glScalef(2.2,1.4,1);
        glutSolidCube(.12);
    glPopMatrix();
    //X
    glPushMatrix();
        glTranslated(2,-1.25,-6);
        glScalef(3,3,1);
        glutSolidCube(.12);
    glPopMatrix();

    //Edificios de Color Morado
    glColor3d(1,0,1);

    //Morado1
    glPushMatrix();
        glTranslated(-1.8,.5,-6);
        glutSolidCube(.12);
    glPopMatrix();
    //O
    glPushMatrix();
        glTranslated(1.2,.85,-6);
        glutSolidCube(.15);
    glPopMatrix();

    //Edificios de Color AMARILLO
    glColor3d(1.1,1.5,.5);
    glPushMatrix();
        glTranslated(1.24,.65,-6);
        glScalef(1.6,1.2,1);
        glutSolidCube(.14);
    glPopMatrix();



    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;

        case '+':
            slices++;
            stacks++;
            break;

        case '-':
            if (slices>3 && stacks>3)
            {
                slices--;
                stacks--;
            }
            break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(3120,4160);
    //glutInitWindowSize(200,200);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Simulacion ITO");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
