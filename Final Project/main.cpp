#include <windows.h>
#include<mmsystem.h>
#include <GL/glut.h>
#include <math.h>
#define PI   3.14159265358979323846

GLfloat position1 = 0.0f;
GLfloat speed = 0.015f;
GLfloat i = 0.05f;
GLfloat speedCloud = 0.013f;
GLfloat speedBird = 0.01f;
GLfloat speedrain = 0.03f;
GLfloat speedsun = 0.0015f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat position5 = 0.0f;
GLfloat position6 = 0.0f;
int w = 0;


//circle function ---MST. MEFTAUL JANNAT
void circle(GLfloat x, GLfloat y, GLfloat r)
{
    int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f( x+(r*cos(i * twicePi / triangleAmount)), y+(r*sin(i * twicePi / triangleAmount)) );
    }
    glEnd();
}

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void rightToLeft(int value)
{
    if(position1 < -2)
    position1 = 1.0f;
    position1 -= speed;
	glutPostRedisplay();
	glutTimerFunc(100, rightToLeft, 0);
}

void leftToRight(int value)
{
    if(position2 > 2)
    position2 = -1.0f;
    position2 += speed;
	glutPostRedisplay();
	glutTimerFunc(100, leftToRight, 0);
}

void rightToLeftCloud(int value)
{
    if(position3 < -2)
    position3 = 1.0f;
    position3 -= speedCloud;
	glutPostRedisplay();
	glutTimerFunc(100, rightToLeftCloud, 0);
}

void leftToRightCloud(int value)
{
    if(position4 > 2)
    position4 = -1.0f;
    position4 += speedCloud;
	glutPostRedisplay();
	glutTimerFunc(100, leftToRightCloud, 0);
}

void rainDrop(int value)
{
    if(position5 < -0.2)
    position5 = 1.0f;
    position5 -= speedrain;
	glutPostRedisplay();
	glutTimerFunc(100, rainDrop, 0);
}

void mSun(int value)
{
    if(position6 < -0.8)
    {
        position6 = 0.55f;
    }
    position6 -= speedsun;
    glutPostRedisplay();
    glutTimerFunc(100, mSun, 0);
}

void eSun(int value)
{
    if(position6 < -0.8)
    {
        position6 = 0.55f;
    }
    position6 -= speedsun;
    glutPostRedisplay();
    glutTimerFunc(100, eSun, 0);
}

void lalbagFort()
{
    /*
                            *******************************************
                            *             Lalbagh Fort Start          *
                            *******************************************
    */
    // Ground -------Abdur Rahman

    glBegin(GL_QUADS);
    glColor3ub(155, 148, 53);
    glVertex2f(-1.0f, -0.5f);
    glVertex2f(1.0f, -0.5f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    //Ground Finished
    //Building Structure  ---YEASER ARAFAT

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(0.57f, -0.1f);
	glVertex2f(0.57f, 0.25f);
	glVertex2f(-0.57f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.285f, 0.2575f);
	glVertex2f(0.285f, 0.2575f);
	glVertex2f(0.285f, 0.3f);
	glVertex2f(-0.285f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(48, 50, 45);
	glVertex2f(-0.57f, -0.1f);
	glVertex2f(0.57f, -0.1f);
	glVertex2f(0.575f, -0.11f);
	glVertex2f(-0.575f, -0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(42, 35, 26);
	glVertex2f(-0.575f, -0.11f);
	glVertex2f(0.575f, -0.11f);
	glVertex2f(0.575f, -0.12f);
	glVertex2f(-0.575f, -0.12f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(169, 153, 137);
	glVertex2f(-0.605f, -0.15f);
	glVertex2f(0.605f, -0.15f);
	glVertex2f(0.575f, -0.12f);
	glVertex2f(-0.575f, -0.12f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(42, 35, 26);
	glVertex2f(-0.17, -0.125f);
	glVertex2f(0.17f, -0.125f);
	glVertex2f(0.18f, -0.135f);
	glVertex2f(-0.18f, -0.135f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(48, 50, 45);
	glVertex2f(-0.605f, -0.16f);
	glVertex2f(0.605f, -0.16f);
	glVertex2f(0.605f, -0.15f);
	glVertex2f(-0.605f, -0.15f);
	glEnd();

	//Building Structure Finished
    // Pillar (Left)  ---YEASER ARAFAT

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.24f, -0.085f);
	glVertex2f(-0.21f, -0.085f);
	glVertex2f(-0.21f, 0.38f);
	glVertex2f(-0.24f, 0.38f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.225f, 0.4f);
	glVertex2f(-0.21f, 0.38f);
	glVertex2f(-0.24f, 0.38f);
	glEnd();

	glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.225f, 0.38f);
    glVertex2f(-0.225,0.42);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.235f, -0.085f);
	glVertex2f(-0.215f, -0.085f);
	glVertex2f(-0.215f, 0.34f);
	glVertex2f(-0.235f, 0.34f);
	glEnd();

	// Pillar (Right) Finished
	// Pillar (Right) ---YEASER ARAFAT

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.24f, -0.085f);
	glVertex2f(0.21f, -0.085f);
	glVertex2f(0.21f, 0.38f);
	glVertex2f(0.24f, 0.38f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(220, 155, 112);
	glVertex2f(0.225f, 0.4f);
	glVertex2f(0.21f, 0.38f);
	glVertex2f(0.24f, 0.38f);
	glEnd();

	glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(220, 155, 112);
    glVertex2f(0.225f, 0.38f);
    glVertex2f(0.225,0.42);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.235f, -0.085f);
	glVertex2f(0.215f, -0.085f);
	glVertex2f(0.215f, 0.34f);
	glVertex2f(0.235f, 0.34f);
	glEnd();

	// Pillar (Right) Finished
    // Tomb 1 (Left) ---YEASER ARAFAT

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.56f, 0.25f);
	glVertex2f(-0.46f, 0.25f);
	glVertex2f(-0.46f, 0.3f);
	glVertex2f(-0.56f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.555f, 0.3f);
	glVertex2f(-0.465f, 0.3f);
	glVertex2f(-0.465f, 0.4f);
	glVertex2f(-0.555f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.57f, 0.4f);
	glVertex2f(-0.45f, 0.4f);
	glVertex2f(-0.46f, 0.415f);
	glVertex2f(-0.56f, 0.415f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.55f, 0.415f);
	glVertex2f(-0.47f, 0.415f);
	glVertex2f(-0.47f, 0.48f);
	glVertex2f(-0.55f, 0.48f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.55f, 0.48f);
	glVertex2f(-0.47f, 0.48f);
	glVertex2f(-0.475f, 0.49f);
	glVertex2f(-0.48f, 0.50f);
	glVertex2f(-0.485f, 0.505f);
	glVertex2f(-0.49f, 0.51f);
	glVertex2f(-0.50f, 0.515f);
	glVertex2f(-0.51f, 0.52f);
	glVertex2f(-0.52f, 0.515f);
	glVertex2f(-0.53f, 0.51f);
	glVertex2f(-0.535f, 0.505f);
	glVertex2f(-0.54f, 0.50f);
	glVertex2f(-0.545f, 0.49f);
	glEnd();

	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.51f, 0.52f);
    glVertex2f(-0.51f,0.56f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.515f, 0.5f);
	glVertex2f(-0.505f, 0.5f);
	glVertex2f(-0.505f, 0.53f);
	glVertex2f(-0.515f, 0.53f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.51f, 0.545f);
	glVertex2f(-0.505f, 0.53f);
	glVertex2f(-0.515f, 0.53f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.55f, 0.31f);
	glVertex2f(-0.53f, 0.31f);
	glVertex2f(-0.53f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.55f, 0.37f);
	glVertex2f(-0.53f, 0.37f);
	glVertex2f(-0.531f, 0.372f);
	glVertex2f(-0.532f, 0.374f);
	glVertex2f(-0.533f, 0.376f);
	glVertex2f(-0.534f, 0.378f);
	glVertex2f(-0.535f, 0.38f);
	glVertex2f(-0.537f, 0.382f);
	glVertex2f(-0.539f, 0.384f);
	glVertex2f(-0.54f, 0.386f);
	glVertex2f(-0.541f, 0.384f);
	glVertex2f(-0.543f, 0.382f);
	glVertex2f(-0.545f, 0.38f);
	glVertex2f(-0.546f, 0.378f);
	glVertex2f(-0.547f, 0.376f);
	glVertex2f(-0.548f, 0.374f);
	glVertex2f(-0.549f, 0.372f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.525f, 0.31f);
	glVertex2f(-0.495f, 0.31f);
	glVertex2f(-0.495f, 0.37f);
	glVertex2f(-0.525f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.525f, 0.37f);
	glVertex2f(-0.495f, 0.37f);
	glVertex2f(-0.497f, 0.373f);
	glVertex2f(-0.499f, 0.376f);
	glVertex2f(-0.501f, 0.379f);
	glVertex2f(-0.503f, 0.382f);
	glVertex2f(-0.505f, 0.385f);
	glVertex2f(-0.507f, 0.388f);
	glVertex2f(-0.509f, 0.391f);
	glVertex2f(-0.51f, 0.394f);
	glVertex2f(-0.511f, 0.391f);
	glVertex2f(-0.513f, 0.388f);
	glVertex2f(-0.515f, 0.385f);
	glVertex2f(-0.517f, 0.382f);
	glVertex2f(-0.519f, 0.379f);
	glVertex2f(-0.521f, 0.376f);
	glVertex2f(-0.523f, 0.373f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.49f, 0.31f);
	glVertex2f(-0.47f, 0.31f);
	glVertex2f(-0.47f, 0.37f);
	glVertex2f(-0.49f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.49f, 0.37f);
	glVertex2f(-0.47f, 0.37f);
	glVertex2f(-0.471f, 0.372f);
	glVertex2f(-0.472f, 0.374f);
	glVertex2f(-0.473f, 0.376f);
	glVertex2f(-0.474f, 0.378f);
	glVertex2f(-0.475f, 0.38f);
	glVertex2f(-0.477f, 0.382f);
	glVertex2f(-0.479f, 0.384f);
	glVertex2f(-0.48f, 0.386f);
	glVertex2f(-0.481f, 0.384f);
	glVertex2f(-0.483f, 0.382f);
	glVertex2f(-0.485f, 0.38f);
	glVertex2f(-0.486f, 0.378f);
	glVertex2f(-0.487f, 0.376f);
	glVertex2f(-0.488f, 0.374f);
	glVertex2f(-0.489f, 0.372f);
	glEnd();

	// Tomb 1 (Left) Finished
	// Tomb 1 (Right) ---YEASER ARAFAT

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.56f, 0.25f);
	glVertex2f(0.46f, 0.25f);
	glVertex2f(0.46f, 0.3f);
	glVertex2f(0.56f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.555f, 0.3f);
	glVertex2f(0.465f, 0.3f);
	glVertex2f(0.465f, 0.4f);
	glVertex2f(0.555f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.57f, 0.4f);
	glVertex2f(0.45f, 0.4f);
	glVertex2f(0.46f, 0.415f);
	glVertex2f(0.56f, 0.415f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.55f, 0.415f);
	glVertex2f(0.47f, 0.415f);
	glVertex2f(0.47f, 0.48f);
	glVertex2f(0.55f, 0.48f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(220, 155, 112);
	glVertex2f(0.55f, 0.48f);
	glVertex2f(0.47f, 0.48f);
	glVertex2f(0.475f, 0.49f);
	glVertex2f(0.48f, 0.50f);
	glVertex2f(0.485f, 0.505f);
	glVertex2f(0.49f, 0.51f);
	glVertex2f(0.50f, 0.515f);
	glVertex2f(0.51f, 0.52f);
	glVertex2f(0.52f, 0.515f);
	glVertex2f(0.53f, 0.51f);
	glVertex2f(0.535f, 0.505f);
	glVertex2f(0.54f, 0.50f);
	glVertex2f(0.545f, 0.49f);
	glEnd();

	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(220, 155, 112);
    glVertex2f(0.51f, 0.52f);
    glVertex2f(0.51f,0.56f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.515f, 0.5f);
	glVertex2f(0.505f, 0.5f);
	glVertex2f(0.505f, 0.53f);
	glVertex2f(0.515f, 0.53f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(220, 155, 112);
	glVertex2f(0.51f, 0.545f);
	glVertex2f(0.505f, 0.53f);
	glVertex2f(0.515f, 0.53f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.55f, 0.31f);
	glVertex2f(0.53f, 0.31f);
	glVertex2f(0.53f, 0.37f);
	glVertex2f(0.55f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 73, 33);
	glVertex2f(0.55f, 0.37f);
	glVertex2f(0.53f, 0.37f);
	glVertex2f(0.531f, 0.372f);
	glVertex2f(0.532f, 0.374f);
	glVertex2f(0.533f, 0.376f);
	glVertex2f(0.534f, 0.378f);
	glVertex2f(0.535f, 0.38f);
	glVertex2f(0.537f, 0.382f);
	glVertex2f(0.539f, 0.384f);
	glVertex2f(0.54f, 0.386f);
	glVertex2f(0.541f, 0.384f);
	glVertex2f(0.543f, 0.382f);
	glVertex2f(0.545f, 0.38f);
	glVertex2f(0.546f, 0.378f);
	glVertex2f(0.547f, 0.376f);
	glVertex2f(0.548f, 0.374f);
	glVertex2f(0.549f, 0.372f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.525f, 0.31f);
	glVertex2f(0.495f, 0.31f);
	glVertex2f(0.495f, 0.37f);
	glVertex2f(0.525f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 73, 33);
	glVertex2f(0.525f, 0.37f);
	glVertex2f(0.495f, 0.37f);
	glVertex2f(0.497f, 0.373f);
	glVertex2f(0.499f, 0.376f);
	glVertex2f(0.501f, 0.379f);
	glVertex2f(0.503f, 0.382f);
	glVertex2f(0.505f, 0.385f);
	glVertex2f(0.507f, 0.388f);
	glVertex2f(0.509f, 0.391f);
	glVertex2f(0.51f, 0.394f);
	glVertex2f(0.511f, 0.391f);
	glVertex2f(0.513f, 0.388f);
	glVertex2f(0.515f, 0.385f);
	glVertex2f(0.517f, 0.382f);
	glVertex2f(0.519f, 0.379f);
	glVertex2f(0.521f, 0.376f);
	glVertex2f(0.523f, 0.373f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.49f, 0.31f);
	glVertex2f(0.47f, 0.31f);
	glVertex2f(0.47f, 0.37f);
	glVertex2f(0.49f, 0.37f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 73, 33);
	glVertex2f(0.49f, 0.37f);
	glVertex2f(0.47f, 0.37f);
	glVertex2f(0.471f, 0.372f);
	glVertex2f(0.472f, 0.374f);
	glVertex2f(0.473f, 0.376f);
	glVertex2f(0.474f, 0.378f);
	glVertex2f(0.475f, 0.38f);
	glVertex2f(0.477f, 0.382f);
	glVertex2f(0.479f, 0.384f);
	glVertex2f(0.48f, 0.386f);
	glVertex2f(0.481f, 0.384f);
	glVertex2f(0.483f, 0.382f);
	glVertex2f(0.485f, 0.38f);
	glVertex2f(0.486f, 0.378f);
	glVertex2f(0.487f, 0.376f);
	glVertex2f(0.488f, 0.374f);
	glVertex2f(0.489f, 0.372f);
	glEnd();

	// Tomb 1 (Right) Finished
	// Tomb 2 (Left) ---YEASER ARAFAT

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.415f, 0.25f);
	glVertex2f(-0.335f, 0.25f);
	glVertex2f(-0.335f, 0.315f);
	glVertex2f(-0.415f, 0.315f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.415f, 0.315f);
	glVertex2f(-0.335f, 0.315f);
	glVertex2f(-0.34f, 0.325f);
	glVertex2f(-0.345f, 0.335f);
	glVertex2f(-0.35f, 0.34f);
	glVertex2f(-0.355f, 0.345f);
	glVertex2f(-0.365f, 0.35f);
	glVertex2f(-0.375f, 0.355f);
	glVertex2f(-0.385f, 0.35f);
	glVertex2f(-0.395f, 0.345f);
	glVertex2f(-0.4f, 0.34f);
	glVertex2f(-0.405f, 0.335f);
	glVertex2f(-0.41f, 0.325f);
	glEnd();

	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.375f, 0.355f);
    glVertex2f(-0.375f,0.395f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.38f, 0.335f);
	glVertex2f(-0.37f, 0.335f);
	glVertex2f(-0.37f, 0.365f);
	glVertex2f(-0.38f, 0.365f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.375f, 0.38f);
	glVertex2f(-0.37f, 0.365f);
	glVertex2f(-0.38f, 0.365f);
	glEnd();

	// Tomb 2 (Left) Finished
    // Tomb 2 (Right) ---YEASER ARAFAT

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.415f, 0.25f);
	glVertex2f(0.335f, 0.25f);
	glVertex2f(0.335f, 0.315f);
	glVertex2f(0.415f, 0.315f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(220, 155, 112);
	glVertex2f(0.415f, 0.315f);
	glVertex2f(0.335f, 0.315f);
	glVertex2f(0.34f, 0.325f);
	glVertex2f(0.345f, 0.335f);
	glVertex2f(0.35f, 0.34f);
	glVertex2f(0.355f, 0.345f);
	glVertex2f(0.365f, 0.35f);
	glVertex2f(0.375f, 0.355f);
	glVertex2f(0.385f, 0.35f);
	glVertex2f(0.395f, 0.345f);
	glVertex2f(0.4f, 0.34f);
	glVertex2f(0.405f, 0.335f);
	glVertex2f(0.41f, 0.325f);
	glEnd();

	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(220, 155, 112);
    glVertex2f(0.375f, 0.355f);
    glVertex2f(0.375f,0.395f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.38f, 0.335f);
	glVertex2f(0.37f, 0.335f);
	glVertex2f(0.37f, 0.365f);
	glVertex2f(0.38f, 0.365f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(220, 155, 112);
	glVertex2f(0.375f, 0.38f);
	glVertex2f(0.37f, 0.365f);
	glVertex2f(0.38f, 0.365f);
	glEnd();

	// Tomb 2 (Right) Finished
    // 1st window line (Left)   --Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.555f, -0.01f);
	glVertex2f(-0.525f, -0.01f);
	glVertex2f(-0.525f, 0.05f);
	glVertex2f(-0.555f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.555f, 0.065f);
	glVertex2f(-0.525f, 0.065f);
	glVertex2f(-0.525f, 0.115f);
	glVertex2f(-0.555f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.555f, 0.13f);
	glVertex2f(-0.525f, 0.13f);
	glVertex2f(-0.525f, 0.175f);
	glVertex2f(-0.555f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.55f, -0.005f);
	glVertex2f(-0.53f, -0.005f);
	glVertex2f(-0.53f, 0.045f);
	glVertex2f(-0.55f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.55f, 0.07f);
	glVertex2f(-0.53f, 0.07f);
	glVertex2f(-0.53f, 0.11f);
	glVertex2f(-0.55f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.55f, 0.135f);
	glVertex2f(-0.53f, 0.135f);
	glVertex2f(-0.53f, 0.17f);
	glVertex2f(-0.55f, 0.17f);
	glEnd();

	// 1st window line (Left) Finished
    // 1st window line (Right)  ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.525f, -0.01f);
	glVertex2f(0.555f, -0.01f);
	glVertex2f(0.555f, 0.05f);
	glVertex2f(0.525f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.525f, 0.065f);
	glVertex2f(0.555f, 0.065f);
	glVertex2f(0.555f, 0.115f);
	glVertex2f(0.525f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.525f, 0.13f);
	glVertex2f(0.555f, 0.13f);
	glVertex2f(0.555f, 0.175f);
	glVertex2f(0.525f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.53f, -0.005f);
	glVertex2f(0.55f, -0.005f);
	glVertex2f(0.55f, 0.045f);
	glVertex2f(0.53f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.53f, 0.07f);
	glVertex2f(0.55f, 0.07f);
	glVertex2f(0.55f, 0.11f);
	glVertex2f(0.53f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.53f, 0.135f);
	glVertex2f(0.55f, 0.135f);
	glVertex2f(0.55f, 0.17f);
	glVertex2f(0.53f, 0.17f);
	glEnd();

	// 1st window line (Right)
	// 2nd window line (Left) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.51f, -0.01f);
	glVertex2f(-0.48f, -0.01f);
	glVertex2f(-0.48f, 0.05f);
	glVertex2f(-0.51f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.51f, 0.065f);
	glVertex2f(-0.48f, 0.065f);
	glVertex2f(-0.48f, 0.115f);
	glVertex2f(-0.51f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.51f, 0.13f);
	glVertex2f(-0.48f, 0.13f);
	glVertex2f(-0.48f, 0.175f);
	glVertex2f(-0.51f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.505f, -0.005f);
	glVertex2f(-0.485f, -0.005f);
	glVertex2f(-0.485f, 0.045f);
	glVertex2f(-0.505f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.505f, 0.07f);
	glVertex2f(-0.485f, 0.07f);
	glVertex2f(-0.485f, 0.11f);
	glVertex2f(-0.505f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.505f, 0.135f);
	glVertex2f(-0.485f, 0.135f);
	glVertex2f(-0.485f, 0.17f);
	glVertex2f(-0.505f, 0.17f);
	glEnd();

	// 2nd window line (Left) Finished
	// 2nd window line (Right) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.51f, -0.01f);
	glVertex2f(0.48f, -0.01f);
	glVertex2f(0.48f, 0.05f);
	glVertex2f(0.51f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.51f, 0.065f);
	glVertex2f(0.48f, 0.065f);
	glVertex2f(0.48f, 0.115f);
	glVertex2f(0.51f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.51f, 0.13f);
	glVertex2f(0.48f, 0.13f);
	glVertex2f(0.48f, 0.175f);
	glVertex2f(0.51f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.505f, -0.005f);
	glVertex2f(0.485f, -0.005f);
	glVertex2f(0.485f, 0.045f);
	glVertex2f(0.505f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.505f, 0.07f);
	glVertex2f(0.485f, 0.07f);
	glVertex2f(0.485f, 0.11f);
	glVertex2f(0.505f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.505f, 0.135f);
	glVertex2f(0.485f, 0.135f);
	glVertex2f(0.485f, 0.17f);
	glVertex2f(0.505f, 0.17f);
	glEnd();

	// 2nd window line (Right) Finished
    // 3rd window line (Left) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.465f, -0.01f);
	glVertex2f(-0.435f, -0.01f);
	glVertex2f(-0.435f, 0.05f);
	glVertex2f(-0.465f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.465f, 0.065f);
	glVertex2f(-0.435f, 0.065f);
	glVertex2f(-0.435f, 0.115f);
	glVertex2f(-0.465f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.465f, 0.13f);
	glVertex2f(-0.435f, 0.13f);
	glVertex2f(-0.435f, 0.175f);
	glVertex2f(-0.465f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.46f, -0.005f);
	glVertex2f(-0.44f, -0.005f);
	glVertex2f(-0.44f, 0.045f);
	glVertex2f(-0.46f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.46f, 0.07f);
	glVertex2f(-0.44f, 0.07f);
	glVertex2f(-0.44f, 0.11f);
	glVertex2f(-0.46f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.46f, 0.135f);
	glVertex2f(-0.44f, 0.135f);
	glVertex2f(-0.44f, 0.17f);
	glVertex2f(-0.46f, 0.17f);
	glEnd();

	// 3rd window line (Left) Finished
    // 3rd window line (Right) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.465f, -0.01f);
	glVertex2f(0.435f, -0.01f);
	glVertex2f(0.435f, 0.05f);
	glVertex2f(0.465f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.465f, 0.065f);
	glVertex2f(0.435f, 0.065f);
	glVertex2f(0.435f, 0.115f);
	glVertex2f(0.465f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.465f, 0.13f);
	glVertex2f(0.435f, 0.13f);
	glVertex2f(0.435f, 0.175f);
	glVertex2f(0.465f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.46f, -0.005f);
	glVertex2f(0.44f, -0.005f);
	glVertex2f(0.44f, 0.045f);
	glVertex2f(0.46f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.46f, 0.07f);
	glVertex2f(0.44f, 0.07f);
	glVertex2f(0.44f, 0.11f);
	glVertex2f(0.46f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.46f, 0.135f);
	glVertex2f(0.44f, 0.135f);
	glVertex2f(0.44f, 0.17f);
	glVertex2f(0.46f, 0.17f);
	glEnd();

	// 3rd window line (Right) Finished
	// Door frame (Left) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.42f, -0.1f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.3f, 0.115f);
	glVertex2f(-0.42f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(179, 96, 43);
	glVertex2f(-0.415f, -0.1f);
	glVertex2f(-0.305f, -0.1f);
	glVertex2f(-0.305f, 0.105f);
	glVertex2f(-0.415f, 0.105f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(203, 208, 209);
	glVertex2f(-0.41f, -0.1f);
	glVertex2f(-0.31f, -0.1f);
	glVertex2f(-0.31f, 0.01f);
	glVertex2f(-0.41f, 0.01f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(203, 208, 209);
	glVertex2f(-0.41f, 0.01f);
	glVertex2f(-0.31f, 0.01f);
	glVertex2f(-0.315f, 0.025f);
	glVertex2f(-0.325f, 0.045f);
	glVertex2f(-0.335f, 0.06f);
	glVertex2f(-0.35f, 0.075f);
	glVertex2f(-0.355f, 0.081f);
	glVertex2f(-0.36f, 0.085f);
	glVertex2f(-0.365f, 0.081f);
	glVertex2f(-0.37f, 0.075f);
	glVertex2f(-0.385f, 0.06f);
	glVertex2f(-0.395f, 0.045f);
	glVertex2f(-0.405f, 0.025f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(34, 36, 37);
	glVertex2f(-0.38f, -0.1f);
	glVertex2f(-0.34f, -0.1f);
	glVertex2f(-0.34f, -0.01f);
	glVertex2f(-0.38f, -0.01f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(34, 36, 37);
	glVertex2f(-0.37f, 0.01f);
	glVertex2f(-0.35f, 0.01f);
	glVertex2f(-0.35f, 0.04f);
	glVertex2f(-0.37f, 0.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(34, 36, 37);
	glVertex2f(-0.36f, 0.055f);
	glVertex2f(-0.35f, 0.04f);
	glVertex2f(-0.37f, 0.04f);
	glEnd();

	// Door frame (Left) Finished
	// Door frame (Right) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.42f, -0.1f);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.3f, 0.115f);
	glVertex2f(0.42f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(179, 96, 43);
	glVertex2f(0.415f, -0.1f);
	glVertex2f(0.305f, -0.1f);
	glVertex2f(0.305f, 0.105f);
	glVertex2f(0.415f, 0.105f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(203, 208, 209);
	glVertex2f(0.41f, -0.1f);
	glVertex2f(0.31f, -0.1f);
	glVertex2f(0.31f, 0.01f);
	glVertex2f(0.41f, 0.01f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(203, 208, 209);
	glVertex2f(0.41f, 0.01f);
	glVertex2f(0.31f, 0.01f);
	glVertex2f(0.315f, 0.025f);
	glVertex2f(0.325f, 0.045f);
	glVertex2f(0.335f, 0.06f);
	glVertex2f(0.35f, 0.075f);
	glVertex2f(0.355f, 0.081f);
	glVertex2f(0.36f, 0.085f);
	glVertex2f(0.365f, 0.081f);
	glVertex2f(0.37f, 0.075f);
	glVertex2f(0.385f, 0.06f);
	glVertex2f(0.395f, 0.045f);
	glVertex2f(0.405f, 0.025f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(34, 36, 37);
	glVertex2f(0.38f, -0.1f);
	glVertex2f(0.34f, -0.1f);
	glVertex2f(0.34f, -0.01f);
	glVertex2f(0.38f, -0.01f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(34, 36, 37);
	glVertex2f(0.37f, 0.01f);
	glVertex2f(0.35f, 0.01f);
	glVertex2f(0.35f, 0.04f);
	glVertex2f(0.37f, 0.04f);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(34, 36, 37);
	glVertex2f(0.36f, 0.055f);
	glVertex2f(0.35f, 0.04f);
	glVertex2f(0.37f, 0.04f);
	glEnd();

	// Door frame (Right) Finished
	// Door window (Left) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.415f, 0.13f);
	glVertex2f(-0.305f, 0.13f);
	glVertex2f(-0.305f, 0.175f);
	glVertex2f(-0.415f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.41f, 0.135f);
	glVertex2f(-0.38f, 0.135f);
	glVertex2f(-0.38f, 0.17f);
	glVertex2f(-0.41f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.375f, 0.135f);
	glVertex2f(-0.345f, 0.135f);
	glVertex2f(-0.345f, 0.17f);
	glVertex2f(-0.375f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.34f, 0.135f);
	glVertex2f(-0.31f, 0.135f);
	glVertex2f(-0.31f, 0.17f);
	glVertex2f(-0.34f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.57f, 0.19f);
	glVertex2f(-0.24f, 0.19f);
	glVertex2f(-0.24f, 0.197f);
	glVertex2f(-0.57f, 0.197f);
	glEnd();

	// Door window (Left) Finished
	// Door window (Right) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.415f, 0.13f);
	glVertex2f(0.305f, 0.13f);
	glVertex2f(0.305f, 0.175f);
	glVertex2f(0.415f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.41f, 0.135f);
	glVertex2f(0.38f, 0.135f);
	glVertex2f(0.38f, 0.17f);
	glVertex2f(0.41f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.375f, 0.135f);
	glVertex2f(0.345f, 0.135f);
	glVertex2f(0.345f, 0.17f);
	glVertex2f(0.375f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.34f, 0.135f);
	glVertex2f(0.31f, 0.135f);
	glVertex2f(0.31f, 0.17f);
	glVertex2f(0.34f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.57f, 0.19f);
	glVertex2f(0.24f, 0.19f);
	glVertex2f(0.24f, 0.197f);
	glVertex2f(0.57f, 0.197f);
	glEnd();

	// Door window (Right) Finished
	// 4th window line (Left) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.285f, -0.01f);
	glVertex2f(-0.255f, -0.01f);
	glVertex2f(-0.255f, 0.05f);
	glVertex2f(-0.285f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.285f, 0.065f);
	glVertex2f(-0.255f, 0.065f);
	glVertex2f(-0.255f, 0.115f);
	glVertex2f(-0.285f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.285f, 0.13f);
	glVertex2f(-0.255f, 0.13f);
	glVertex2f(-0.255f, 0.175f);
	glVertex2f(-0.285f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.28f, -0.005f);
	glVertex2f(-0.26f, -0.005f);
	glVertex2f(-0.26f, 0.045f);
	glVertex2f(-0.28f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.28f, 0.07f);
	glVertex2f(-0.26f, 0.07f);
	glVertex2f(-0.26f, 0.11f);
	glVertex2f(-0.28f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.28f, 0.135f);
	glVertex2f(-0.26f, 0.135f);
	glVertex2f(-0.26f, 0.17f);
	glVertex2f(-0.28f, 0.17f);
	glEnd();

	// 4th window line (Left) Finished
	// 4th window line (Right)  --Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.285f, -0.01f);
	glVertex2f(0.255f, -0.01f);
	glVertex2f(0.255f, 0.05f);
	glVertex2f(0.285f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.285f, 0.065f);
	glVertex2f(0.255f, 0.065f);
	glVertex2f(0.255f, 0.115f);
	glVertex2f(0.285f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.285f, 0.13f);
	glVertex2f(0.255f, 0.13f);
	glVertex2f(0.255f, 0.175f);
	glVertex2f(0.285f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.28f, -0.005f);
	glVertex2f(0.26f, -0.005f);
	glVertex2f(0.26f, 0.045f);
	glVertex2f(0.28f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.28f, 0.07f);
	glVertex2f(0.26f, 0.07f);
	glVertex2f(0.26f, 0.11f);
	glVertex2f(0.28f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.28f, 0.135f);
	glVertex2f(0.26f, 0.135f);
	glVertex2f(0.26f, 0.17f);
	glVertex2f(0.28f, 0.17f);
	glEnd();

	// 4th window line (Right) Finished
    // 5th window line (Left) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.195f, -0.01f);
	glVertex2f(-0.165f, -0.01f);
	glVertex2f(-0.165f, 0.05f);
	glVertex2f(-0.195f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.195f, 0.065f);
	glVertex2f(-0.165f, 0.065f);
	glVertex2f(-0.165f, 0.115f);
	glVertex2f(-0.195f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.195f, 0.13f);
	glVertex2f(-0.165f, 0.13f);
	glVertex2f(-0.165f, 0.175f);
	glVertex2f(-0.195f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.195f, 0.19f);
	glVertex2f(-0.165f, 0.19f);
	glVertex2f(-0.165f, 0.235f);
	glVertex2f(-0.195f, 0.235f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.19f, -0.005f);
	glVertex2f(-0.17f, -0.005f);
	glVertex2f(-0.17f, 0.045f);
	glVertex2f(-0.19f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.19f, 0.07f);
	glVertex2f(-0.17f, 0.07f);
	glVertex2f(-0.17f, 0.11f);
	glVertex2f(-0.19f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.19f, 0.135f);
	glVertex2f(-0.17f, 0.135f);
	glVertex2f(-0.17f, 0.17f);
	glVertex2f(-0.19f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.19f, 0.195f);
	glVertex2f(-0.17f, 0.195f);
	glVertex2f(-0.17f, 0.23f);
	glVertex2f(-0.19f, 0.23f);
	glEnd();

	// 5th window line (Left) Finished
    // 5th window line (Right) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.195f, -0.01f);
	glVertex2f(0.165f, -0.01f);
	glVertex2f(0.165f, 0.05f);
	glVertex2f(0.195f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.195f, 0.065f);
	glVertex2f(0.165f, 0.065f);
	glVertex2f(0.165f, 0.115f);
	glVertex2f(0.195f, 0.115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.195f, 0.13f);
	glVertex2f(0.165f, 0.13f);
	glVertex2f(0.165f, 0.175f);
	glVertex2f(0.195f, 0.175f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(0.195f, 0.19f);
	glVertex2f(0.165f, 0.19f);
	glVertex2f(0.165f, 0.235f);
	glVertex2f(0.195f, 0.235f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.19f, -0.005f);
	glVertex2f(0.17f, -0.005f);
	glVertex2f(0.17f, 0.045f);
	glVertex2f(0.19f, 0.045f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.19f, 0.07f);
	glVertex2f(0.17f, 0.07f);
	glVertex2f(0.17f, 0.11f);
	glVertex2f(0.19f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.19f, 0.135f);
	glVertex2f(0.17f, 0.135f);
	glVertex2f(0.17f, 0.17f);
	glVertex2f(0.19f, 0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.19f, 0.195f);
	glVertex2f(0.17f, 0.195f);
	glVertex2f(0.17f, 0.23f);
	glVertex2f(0.19f, 0.23f);
	glEnd();

	// 5th window line (Right) Finished
    // Borders  ---Noman

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.245f, 0.25f);
	glVertex2f(0.245f, 0.25f);
	glVertex2f(0.245f, 0.2575f);
	glVertex2f(-0.245f, 0.2575f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.245f, 0.197f);
	glVertex2f(-0.24f, 0.197f);
	glVertex2f(-0.24f, 0.2575f);
	glVertex2f(-0.245f, 0.2575f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.245f, 0.197f);
	glVertex2f(0.24f, 0.197f);
	glVertex2f(0.24f, 0.2575f);
	glVertex2f(0.245f, 0.2575f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.285f, 0.25f);
	glVertex2f(-0.245f, 0.25f);
	glVertex2f(-0.245f, 0.2575f);
	glVertex2f(-0.285f, 0.2575f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(0.285f, 0.25f);
	glVertex2f(0.245f, 0.25f);
	glVertex2f(0.245f, 0.2575f);
	glVertex2f(0.285f, 0.2575f);
	glEnd();

	// Borders Finished
	//Door frame (Middle) ---Noman

	glBegin(GL_QUADS);
	glColor3ub(148, 73, 33);
	glVertex2f(-0.155f, -0.01f);
	glVertex2f(0.155f, -0.01f);
	glVertex2f(0.155f, 0.235f);
	glVertex2f(-0.155f, 0.235f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.14f, -0.01f);
	glVertex2f(0.14f, -0.01f);
	glVertex2f(0.14f, 0.21f);
	glVertex2f(-0.14f, 0.21f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(79, 46, 35);
	glVertex2f(-0.13f, -0.1f);
	glVertex2f(0.13f, -0.1f);
	glVertex2f(0.13f, 0.195f);
	glVertex2f(-0.13f, 0.195f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(179, 96, 43);
	glVertex2f(-0.12f, -0.1f);
	glVertex2f(0.12f, -0.1f);
	glVertex2f(0.12f, 0.18f);
	glVertex2f(-0.12f, 0.18f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(203, 208, 209);
	glVertex2f(-0.11f, -0.1f);
	glVertex2f(0.11f, -0.1f);
	glVertex2f(0.11f, 0.07f);
	glVertex2f(-0.11f, 0.07f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(203, 208, 209);
	glVertex2f(-0.11f, 0.07f);
	glVertex2f(0.11f, 0.07f);
	glVertex2f(0.1f, 0.085f);
	glVertex2f(0.09f, 0.1f);
	glVertex2f(0.07f, 0.125f);
	glVertex2f(0.05f, 0.14f);
	glVertex2f(0.03f, 0.15f);
	glVertex2f(0.015f, 0.155f);
	glVertex2f(0.0f, 0.16f);
	glVertex2f(-0.015f, 0.155f);
	glVertex2f(-0.03f, 0.15f);
	glVertex2f(-0.05f, 0.14f);
	glVertex2f(-0.07f, 0.125f);
	glVertex2f(-0.09f, 0.1f);
	glVertex2f(-0.1f, 0.085f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(34, 36, 37);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(-0.05f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(34, 36, 37);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.0475f, 0.01f);
	glVertex2f(0.045f, 0.015f);
	glVertex2f(0.04f, 0.025f);
	glVertex2f(0.03f, 0.04f);
	glVertex2f(0.02f, 0.05f);
	glVertex2f(0.01f, 0.055f);
	glVertex2f(0.0f, 0.06f);
	glVertex2f(-0.01f, 0.055f);
	glVertex2f(-0.02f, 0.05f);
	glVertex2f(-0.03f, 0.04f);
	glVertex2f(-0.04f, 0.025f);
	glVertex2f(-0.045f, 0.015f);
	glVertex2f(-0.0475f, 0.01f);
	glEnd();

	//Door frame (Middle) Finished
	// Tomb (Middle)  ---Yeaser Arafat

    glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.1f, 0.34f);
	glVertex2f(-0.1f, 0.34f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(220, 155, 112);
	glVertex2f(-0.09f, 0.34f);
	glVertex2f(0.09f, 0.34f);
	glVertex2f(0.09f, 0.365f);
	glVertex2f(-0.09f, 0.365f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(87, 86, 88);
	glVertex2f(-0.085f, 0.365f);
	glVertex2f(0.085f, 0.365f);
	glVertex2f(0.085f, 0.43f);
	glVertex2f(-0.085f, 0.43f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(87, 86, 88);
	glVertex2f(-0.085f, 0.43f);
	glVertex2f(0.085f, 0.43f);
	glVertex2f(0.075f, 0.46f);
	glVertex2f(0.065f, 0.48f);
	glVertex2f(0.055f, 0.495f);
	glVertex2f(0.045f, 0.51f);
	glVertex2f(0.025f, 0.53f);
	glVertex2f(0.0f, 0.54f);
	glVertex2f(-0.025f, 0.53f);
	glVertex2f(-0.045f, 0.51f);
	glVertex2f(-0.055f, 0.495f);
	glVertex2f(-0.065f, 0.48f);
	glVertex2f(-0.075f, 0.46f);
	glEnd();

	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(87, 86, 88);
    glVertex2f(0.0f, 0.53f);
    glVertex2f(0.0f,0.59f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(87, 86, 88);
	glVertex2f(-0.0075f, 0.51f);
	glVertex2f(0.0075f, 0.51f);
	glVertex2f(0.0075f, 0.55f);
	glVertex2f(-0.0075f, 0.55f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(87, 86, 88);
	glVertex2f(0.0f, 0.565f);
	glVertex2f(0.0075f, 0.55f);
	glVertex2f(-0.0075f, 0.55f);
	glEnd();

	// Tomb (Middle) Finished
    // Left road ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(178, 147, 138);
    glVertex2f(-0.45f,-0.5f);
    glVertex2f(-0.22f,-0.5f);
    glVertex2f(-0.12f,-0.16f);
    glVertex2f(-0.3f,-0.16f);
    glEnd();

    // Left road Finished
    // Right road ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(178, 147, 138);
    glVertex2f(0.45f,-0.5f);
    glVertex2f(0.22f,-0.5f);
    glVertex2f(0.12f,-0.16f);
    glVertex2f(0.3f,-0.16f);
    glEnd();

    // Right road Finished
    // Middle road ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(178, 147, 138);
    glVertex2f(-0.22f,-0.5f);
    glVertex2f(0.22f,-0.5f);
    glVertex2f(0.22f,-0.43f);
    glVertex2f(-0.22f,-0.43f);
    glEnd();

    // Middle road Finished
    // Middle fountain ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(163, 208, 220);
    glVertex2f(-0.22f,-0.43f);
    glVertex2f(-0.2f,-0.43f);
    glVertex2f(-0.1f,-0.16f);
    glVertex2f(-0.12f,-0.16f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 208, 220);
    glVertex2f(0.22f,-0.43f);
    glVertex2f(0.2f,-0.43f);
    glVertex2f(0.1f,-0.16f);
    glVertex2f(0.12f,-0.16f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 208, 220);
    glVertex2f(-0.12f,-0.21f);
    glVertex2f(0.12f,-0.21f);
    glVertex2f(0.12f,-0.16f);
    glVertex2f(-0.12f,-0.16f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154, 170, 179);
    glVertex2f(-0.2f,-0.43f);
    glVertex2f(0.2f,-0.43f);
    glVertex2f(0.12f,-0.21f);
    glVertex2f(-0.12f,-0.21f);
    glEnd();

    // Middle fountain Finished
    // Small fountain 1 ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.01f,-0.24f);
    glVertex2f(0.01f,-0.24f);
    glVertex2f(0.01f,-0.22f);
    glVertex2f(-0.01f,-0.22f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(220, 155, 112);
    glVertex2f(0.01f,-0.22f);
    glVertex2f(-0.01f,-0.22f);
    glVertex2f(0.0f,-0.17f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.003f,-0.175f);
    glVertex2f(0.003f,-0.175f);
    glVertex2f(0.003f,-0.165f);
    glVertex2f(-0.003f,-0.165f);
    glEnd();

    // Middle fountain Finished
    // Small fountain 2  ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.0125f,-0.33f);
    glVertex2f(0.0125f,-0.33f);
    glVertex2f(0.0125f,-0.31f);
    glVertex2f(-0.0125f,-0.31f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(220, 155, 112);
    glVertex2f(0.0125f,-0.31f);
    glVertex2f(-0.0125f,-0.31f);
    glVertex2f(0.0f,-0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.0035f,-0.265f);
    glVertex2f(0.0035f,-0.265f);
    glVertex2f(0.0035f,-0.255f);
    glVertex2f(-0.0035f,-0.255f);
    glEnd();

    // Small fountain 2 Finished
    // Small fountain 3 ---GOBINDA GOSWAMEE

    glBegin(GL_QUADS);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.0125f,-0.42f);
    glVertex2f(0.0125f,-0.42f);
    glVertex2f(0.0125f,-0.4f);
    glVertex2f(-0.0125f,-0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(220, 155, 112);
    glVertex2f(0.0125f,-0.4f);
    glVertex2f(-0.0125f,-0.4f);
    glVertex2f(0.0f,-0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(220, 155, 112);
    glVertex2f(-0.004f,-0.355f);
    glVertex2f(0.004f,-0.355f);
    glVertex2f(0.004f,-0.345f);
    glVertex2f(-0.004f,-0.345f);
    glEnd();


    // Small fountain 3 Finished
    //Left Tree  ---MST. MEFTAUL JANNAT

    glColor3ub(54,128,45);
    circle(-0.328f,-0.17f,0.022f);
    circle(-0.346f,-0.21f,0.023f);
    circle(-0.365f,-0.25f,0.024f);
    circle(-0.385f,-0.29f,0.026f);
    circle(-0.408f,-0.338f,0.028f);
    circle(-0.432f,-0.388f,0.03f);
    circle(-0.458f,-0.44f,0.032f);

    //Left Tree Finished
    //Right Tree ---MST. MEFTAUL JANNAT

    glColor3ub(54,128,45);
    circle(0.328f,-0.17f,0.022f);
    circle(0.346f,-0.21f,0.023f);
    circle(0.365f,-0.25f,0.024f);
    circle(0.385f,-0.29f,0.026f);
    circle(0.408f,-0.338f,0.028f);
    circle(0.432f,-0.388f,0.03f);
    circle(0.458f,-0.44f,0.032f);

    //Right Tree Finished
    //Left big Tree ---MST. MEFTAUL JANNAT

    glBegin(GL_QUADS);
    glColor3ub(58,28,28);
    glVertex2f(-0.80f,-0.475f);
    glVertex2f(-0.80f,-0.35f);
    glVertex2f(-0.85f,-0.35f);
    glVertex2f(-0.85f,-0.475f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(54,128,45);
	glVertex2f(-0.74f, -0.35f);
	glVertex2f(-0.91f, -0.35f);
	glVertex2f(-0.825f, -0.1f);
	glVertex2f(-0.75f, -0.40f);
	glVertex2f(-0.90f, -0.40f);
	glVertex2f(-0.825f, -0.1f);
	glVertex2f(-0.74f, -0.30f);
	glVertex2f(-0.91f, -0.30f);
	glVertex2f(-0.825f, -0.1f);
	glEnd();

	//Left big Tree Finished
    //Right big tree ---MST. MEFTAUL JANNAT

    glBegin(GL_QUADS);
    glColor3ub(58,28,28);
    glVertex2f(0.80f,-0.475f);
    glVertex2f(0.80f,-0.35f);
    glVertex2f(0.85f,-0.35f);
    glVertex2f(0.85f,-0.475f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(54,128,45);
	glVertex2f(0.74f, -0.35f);
	glVertex2f(0.91f, -0.35f);
	glVertex2f(0.825f, -0.1f);
	glVertex2f(0.75f, -0.40f);
	glVertex2f(0.90f, -0.40f);
	glVertex2f(0.825f, -0.1f);
	glVertex2f(0.74f, -0.30f);
	glVertex2f(0.91f, -0.30f);
	glVertex2f(0.825f, -0.1f);
	glEnd();

	//Right big tree Finished


}

void mainRoad()
{
    // ###### Main Road ###### --Yeaser Arafat

    glBegin(GL_QUADS);
    glColor3ub(84, 84, 84);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,-0.5f);
    glVertex2f(-1.0f,-0.5f);
    glEnd();

    // Main road Divider

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(252, 250, 250);
    glVertex2f(-0.975f,-0.75f);
    glVertex2f(-0.825f,-0.75f);

    glVertex2f(-0.675f,-0.75f);
    glVertex2f(-0.525f,-0.75f);

    glVertex2f(-0.375f,-0.75f);
    glVertex2f(-0.225f,-0.75f);

    glVertex2f(-0.075f,-0.75f);
    glVertex2f(0.075f,-0.75f);

    glVertex2f(0.225f,-0.75f);
    glVertex2f(0.375f,-0.75f);

    glVertex2f(0.525f,-0.75f);
    glVertex2f(0.675f,-0.75f);

    glVertex2f(0.825f,-0.75f);
    glVertex2f(0.975f,-0.75f);
    glEnd();

    // ###### Main Road Finished ######
}

void backgroundBuildings()
{
    // ###### Buildings ######

    // Building 1

    glBegin(GL_QUADS);
    glColor3ub(89, 63, 48);
    glVertex2f(-0.99,0.0);
    glVertex2f(-0.89,0.0);
    glVertex2f(-0.89,0.5);
    glVertex2f(-0.99,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.985,0.01);
    glVertex2f(-0.945,0.01);
    glVertex2f(-0.945,0.12);
    glVertex2f(-0.985,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.935,0.01);
    glVertex2f(-0.895,0.01);
    glVertex2f(-0.895,0.12);
    glVertex2f(-0.935,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.985,0.13);
    glVertex2f(-0.945,0.13);
    glVertex2f(-0.945,0.24);
    glVertex2f(-0.985,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.985,0.25);
    glVertex2f(-0.945,0.25);
    glVertex2f(-0.945,0.36);
    glVertex2f(-0.985,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.985,0.37);
    glVertex2f(-0.945,0.37);
    glVertex2f(-0.945,0.48);
    glVertex2f(-0.985,0.48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.935,0.13);
    glVertex2f(-0.895,0.13);
    glVertex2f(-0.895,0.24);
    glVertex2f(-0.935,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.935,0.25);
    glVertex2f(-0.895,0.25);
    glVertex2f(-0.895,0.36);
    glVertex2f(-0.935,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.935,0.37);
    glVertex2f(-0.895,0.37);
    glVertex2f(-0.895,0.48);
    glVertex2f(-0.935,0.48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 63, 48);
    glVertex2f(-0.89,0.0);
    glVertex2f(-0.87,0.0);
    glVertex2f(-0.87,0.45);
    glVertex2f(-0.89,0.5);
    glEnd();

    // Building 2

    glBegin(GL_QUADS);
    glColor3ub(9, 100, 66);
    glVertex2f(-0.85,0.0);
    glVertex2f(-0.75,0.0);
    glVertex2f(-0.75,0.38);
    glVertex2f(-0.85,0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.845,0.01);
    glVertex2f(-0.805,0.01);
    glVertex2f(-0.805,0.12);
    glVertex2f(-0.845,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.795,0.01);
    glVertex2f(-0.755,0.01);
    glVertex2f(-0.755,0.12);
    glVertex2f(-0.795,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.845,0.13);
    glVertex2f(-0.805,0.13);
    glVertex2f(-0.805,0.24);
    glVertex2f(-0.845,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.845,0.25);
    glVertex2f(-0.805,0.25);
    glVertex2f(-0.805,0.36);
    glVertex2f(-0.845,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.795,0.13);
    glVertex2f(-0.755,0.13);
    glVertex2f(-0.755,0.24);
    glVertex2f(-0.795,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.795,0.25);
    glVertex2f(-0.755,0.25);
    glVertex2f(-0.755,0.36);
    glVertex2f(-0.795,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(9, 100, 66);
    glVertex2f(-0.75,0.0);
    glVertex2f(-0.73,0.0);
    glVertex2f(-0.73,0.33);
    glVertex2f(-0.75,0.38);
    glEnd();

    // Building 3

    glBegin(GL_QUADS);
    glColor3ub(155, 53, 42);
    glVertex2f(-0.71,0.0);
    glVertex2f(-0.61,0.0);
    glVertex2f(-0.61,0.25);
    glVertex2f(-0.71,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.705,0.01);
    glVertex2f(-0.665,0.01);
    glVertex2f(-0.665,0.12);
    glVertex2f(-0.705,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.655,0.01);
    glVertex2f(-0.615,0.01);
    glVertex2f(-0.615,0.12);
    glVertex2f(-0.655,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.705,0.13);
    glVertex2f(-0.665,0.13);
    glVertex2f(-0.665,0.24);
    glVertex2f(-0.705,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.655,0.13);
    glVertex2f(-0.615,0.13);
    glVertex2f(-0.615,0.24);
    glVertex2f(-0.655,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(155, 53, 42);
    glVertex2f(-0.61,0.0);
    glVertex2f(-0.59,0.0);
    glVertex2f(-0.59,0.2);
    glVertex2f(-0.61,0.25);
    glEnd();

    // Building 4

    glBegin(GL_QUADS);
    glColor3ub(193, 113, 73);
    glVertex2f(0.87,0.0);
    glVertex2f(0.97,0.0);
    glVertex2f(0.97,0.62);
    glVertex2f(0.87,0.62);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.915,0.01);
    glVertex2f(0.875,0.01);
    glVertex2f(0.875,0.12);
    glVertex2f(0.915,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.965,0.01);
    glVertex2f(0.925,0.01);
    glVertex2f(0.925,0.12);
    glVertex2f(0.965,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.915,0.13);
    glVertex2f(0.875,0.13);
    glVertex2f(0.875,0.24);
    glVertex2f(0.915,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.915,0.25);
    glVertex2f(0.875,0.25);
    glVertex2f(0.875,0.36);
    glVertex2f(0.915,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.915,0.37);
    glVertex2f(0.875,0.37);
    glVertex2f(0.875,0.48);
    glVertex2f(0.915,0.48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.915,0.49);
    glVertex2f(0.875,0.49);
    glVertex2f(0.875,0.6);
    glVertex2f(0.915,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.965,0.13);
    glVertex2f(0.925,0.13);
    glVertex2f(0.925,0.24);
    glVertex2f(0.965,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.965,0.25);
    glVertex2f(0.925,0.25);
    glVertex2f(0.925,0.36);
    glVertex2f(0.965,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.965,0.37);
    glVertex2f(0.925,0.37);
    glVertex2f(0.925,0.48);
    glVertex2f(0.965,0.48);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.965,0.49);
    glVertex2f(0.925,0.49);
    glVertex2f(0.925,0.6);
    glVertex2f(0.965,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 113, 73);
    glVertex2f(0.97,0.0);
    glVertex2f(0.99,0.0);
    glVertex2f(0.99,0.57);
    glVertex2f(0.97,0.62);
    glEnd();

    // Building 5

    glBegin(GL_QUADS);
    glColor3ub(147, 128, 98);
    glVertex2f(0.73,0.0);
    glVertex2f(0.83,0.0);
    glVertex2f(0.83,0.25);
    glVertex2f(0.73,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.785,0.01);
    glVertex2f(0.825,0.01);
    glVertex2f(0.825,0.12);
    glVertex2f(0.785,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.775,0.01);
    glVertex2f(0.735,0.01);
    glVertex2f(0.735,0.12);
    glVertex2f(0.775,0.12);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.775,0.13);
    glVertex2f(0.735,0.13);
    glVertex2f(0.735,0.24);
    glVertex2f(0.775,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.785,0.13);
    glVertex2f(0.825,0.13);
    glVertex2f(0.825,0.24);
    glVertex2f(0.785,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(147, 128, 98);
    glVertex2f(0.83,0.0);
    glVertex2f(0.85,0.0);
    glVertex2f(0.85,0.2);
    glVertex2f(0.83,0.25);
    glEnd();

    // Building 6

    glBegin(GL_QUADS);
    glColor3ub(255, 241, 221);
    glVertex2f(0.59,0.0);
    glVertex2f(0.69,0.0);
    glVertex2f(0.69,0.38);
    glVertex2f(0.59,0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.595,0.13);
    glVertex2f(0.635,0.13);
    glVertex2f(0.635,0.24);
    glVertex2f(0.595,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.595,0.01);
    glVertex2f(0.635,0.01);
    glVertex2f(0.635,0.12);
    glVertex2f(0.595,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.645,0.01);
    glVertex2f(0.685,0.01);
    glVertex2f(0.685,0.12);
    glVertex2f(0.645,0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.595,0.25);
    glVertex2f(0.635,0.25);
    glVertex2f(0.635,0.36);
    glVertex2f(0.595,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.645,0.13);
    glVertex2f(0.685,0.13);
    glVertex2f(0.685,0.24);
    glVertex2f(0.645,0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.645,0.25);
    glVertex2f(0.685,0.25);
    glVertex2f(0.685,0.36);
    glVertex2f(0.645,0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 241, 221);
    glVertex2f(0.69,0.0);
    glVertex2f(0.71,0.0);
    glVertex2f(0.71,0.33);
    glVertex2f(0.69,0.38);
    glEnd();
}

void moveCar()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(124,10,2);
    glVertex2f(0.7f, -0.67f);
    glVertex2f(0.98f, -0.67f);
    glVertex2f(0.98f, -0.615f);
    glVertex2f(0.945f, -0.59f);
    glVertex2f(0.9f, -0.51f);
    glVertex2f(0.8f, -0.51f);
    glVertex2f(0.76f, -0.59f);
    glVertex2f(0.7f, -0.615f);
    glEnd();

    //Head light

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.697f, -0.65f);
    glVertex2f(0.703f, -0.65f);
    glVertex2f(0.703f, -0.63f);
    glVertex2f(0.697f, -0.63f);
    glEnd();

    // Left window

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.775f,-0.58f);
    glVertex2f(0.845f,-0.58f);
    glVertex2f(0.845f,-0.525f);
    glVertex2f(0.805f,-0.525f);
    glEnd();

    // Right window

    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.855f,-0.58f);
    glVertex2f(0.925f,-0.58f);
    glVertex2f(0.895f,-0.525f);
    glVertex2f(0.855f,-0.525f);
    glEnd();

    //Wheel

    glColor3ub(84, 84, 84);
	circle(0.77f,-0.67f,0.036f);
	circle(0.92f,-0.67f,0.036f);

    glColor3ub(0, 0, 0);
	circle(0.77f,-0.67f,0.033f);
	circle(0.92f,-0.67f,0.033f);

	glColor3ub(37, 35, 36);
	circle(0.77f,-0.67f,0.025f);
	circle(0.92f,-0.67f,0.025f);

    glPopMatrix();
}

void leftCloud()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4, 0.0f, 0.0f);

    glColor3ub(239, 238, 237);
    circle(-0.84f,0.8f,0.07f);
	circle(-0.865f,0.855f,0.07f);
	circle(-0.92f,0.76f,0.07f);
	circle(-0.955f,0.81f,0.07f);
	circle(-1.0f,0.72f,0.07f);

	glPopMatrix();
}

void rightCloud()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position3, 0.0f, 0.0f);

    glColor3ub(239, 238, 237);
    circle(0.84f,0.64f,0.07f);
	circle(0.865f,0.73f,0.07f);
	circle(0.92f,0.68f,0.07f);
	circle(0.955f,0.775f,0.07f);
	circle(1.0f,0.72f,0.07f);

	glPopMatrix();
}


void sun1()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0, position6, 0.0);

    glColor3ub(252, 209, 77);
    circle(-0.435, 1.0, 0.06);

    glPopMatrix();
}

void sun2()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0, position6, 0.0);
    glColor3ub(239, 142, 56);
    circle(-0.435, 1.0, 0.06);

    glPopMatrix();
}

void moon()
{
    glColor3ub(244, 241, 201);
    circle(-0.435, 0.8, 0.06);
}

void rain()
{
    // ###### Sky Rain  ######

    glBegin(GL_QUADS);
    glColor3ub(28, 27, 27);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3ub(115, 115, 115);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);
    glEnd();

    // ###### Sky Rain Finished ######

    backgroundBuildings();
    lalbagFort();
    mainRoad();
    moveCar();

    // ###### Rain Drop ###### -- Yeaser Arafat

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f, position5, 0.0f);

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(-0.95,1.15);
    glVertex2f(-0.96,1.1);
    glVertex2f(-0.9,1.15);
    glVertex2f(-0.91,1.1);
    glVertex2f(-0.85,1.15);
    glVertex2f(-0.86,1.1);
    glVertex2f(-0.8,1.15);
    glVertex2f(-0.81,1.1);
    glVertex2f(-0.75,1.15);
    glVertex2f(-0.76,1.1);
    glVertex2f(-0.7,1.15);
    glVertex2f(-0.71,1.1);
    glVertex2f(-0.65,1.15);
    glVertex2f(-0.66,1.1);
    glVertex2f(-0.6,1.15);
    glVertex2f(-0.61,1.1);
    glVertex2f(-0.55,1.15);
    glVertex2f(-0.56,1.1);
    glVertex2f(-0.5,1.15);
    glVertex2f(-0.51,1.1);
    glVertex2f(-0.45,1.15);
    glVertex2f(-0.46,1.1);
    glVertex2f(-0.4,1.15);
    glVertex2f(-0.41,1.1);
    glVertex2f(-0.35,1.15);
    glVertex2f(-0.36,1.1);
    glVertex2f(-0.3,1.15);
    glVertex2f(-0.31,1.1);
    glVertex2f(-0.25,1.15);
    glVertex2f(-0.26,1.1);
    glVertex2f(-0.2,1.15);
    glVertex2f(-0.21,1.1);
    glVertex2f(-0.15,1.15);
    glVertex2f(-0.16,1.1);
    glVertex2f(-0.1,1.15);
    glVertex2f(-0.11,1.1);
    glVertex2f(-0.05,1.15);
    glVertex2f(-0.06,1.1);
    glVertex2f(0.0,1.15);
    glVertex2f(-0.01,1.1);
    glVertex2f(0.95,1.15);
    glVertex2f(0.94,1.1);
    glVertex2f(0.9,1.15);
    glVertex2f(0.89,1.1);
    glVertex2f(0.85,1.15);
    glVertex2f(0.84,1.1);
    glVertex2f(0.8,1.15);
    glVertex2f(0.79,1.1);
    glVertex2f(0.75,1.15);
    glVertex2f(0.74,1.1);
    glVertex2f(0.7,1.15);
    glVertex2f(0.69,1.1);
    glVertex2f(0.65,1.15);
    glVertex2f(0.64,1.1);
    glVertex2f(0.6,1.15);
    glVertex2f(0.59,1.1);
    glVertex2f(0.55,1.15);
    glVertex2f(0.54,1.1);
    glVertex2f(0.5,1.15);
    glVertex2f(0.49,1.1);
    glVertex2f(0.45,1.15);
    glVertex2f(0.44,1.1);
    glVertex2f(0.4,1.15);
    glVertex2f(0.39,1.1);
    glVertex2f(0.35,1.15);
    glVertex2f(0.34,1.1);
    glVertex2f(0.3,1.15);
    glVertex2f(0.29,1.1);
    glVertex2f(0.25,1.15);
    glVertex2f(0.24,1.1);
    glVertex2f(0.2,1.15);
    glVertex2f(0.19,1.1);
    glVertex2f(0.15,1.15);
    glVertex2f(0.14,1.1);
    glVertex2f(0.1,1.15);
    glVertex2f(0.09,1.1);
    glVertex2f(0.05,1.15);
    glVertex2f(0.04,1.1);

    glVertex2f(-0.95,1.05);
    glVertex2f(-0.96,1.0);
    glVertex2f(-0.9,1.05);
    glVertex2f(-0.91,1.0);
    glVertex2f(-0.85,1.05);
    glVertex2f(-0.86,1.0);
    glVertex2f(-0.8,1.05);
    glVertex2f(-0.81,1.0);
    glVertex2f(-0.75,1.05);
    glVertex2f(-0.76,1.0);
    glVertex2f(-0.7,1.05);
    glVertex2f(-0.71,1.0);
    glVertex2f(-0.65,1.05);
    glVertex2f(-0.66,1.0);
    glVertex2f(-0.6,1.05);
    glVertex2f(-0.61,1.0);
    glVertex2f(-0.55,1.05);
    glVertex2f(-0.56,1.0);
    glVertex2f(-0.5,1.05);
    glVertex2f(-0.51,1.0);
    glVertex2f(-0.45,1.05);
    glVertex2f(-0.46,1.0);
    glVertex2f(-0.4,1.05);
    glVertex2f(-0.41,1.0);
    glVertex2f(-0.35,1.05);
    glVertex2f(-0.36,1.0);
    glVertex2f(-0.3,1.05);
    glVertex2f(-0.31,1.0);
    glVertex2f(-0.25,1.05);
    glVertex2f(-0.26,1.0);
    glVertex2f(-0.2,1.05);
    glVertex2f(-0.21,1.0);
    glVertex2f(-0.15,1.05);
    glVertex2f(-0.16,1.0);
    glVertex2f(-0.1,1.05);
    glVertex2f(-0.11,1.0);
    glVertex2f(-0.05,1.05);
    glVertex2f(-0.06,1.0);
    glVertex2f(0.0,1.05);
    glVertex2f(-0.01,1.0);
    glVertex2f(0.95,1.05);
    glVertex2f(0.94,1.0);
    glVertex2f(0.9,1.05);
    glVertex2f(0.89,1.0);
    glVertex2f(0.85,1.05);
    glVertex2f(0.84,1.0);
    glVertex2f(0.8,1.05);
    glVertex2f(0.79,1.0);
    glVertex2f(0.75,1.05);
    glVertex2f(0.74,1.0);
    glVertex2f(0.7,1.05);
    glVertex2f(0.69,1.0);
    glVertex2f(0.65,1.05);
    glVertex2f(0.64,1.0);
    glVertex2f(0.6,1.05);
    glVertex2f(0.59,1.0);
    glVertex2f(0.55,1.05);
    glVertex2f(0.54,1.0);
    glVertex2f(0.5,1.05);
    glVertex2f(0.49,1.0);
    glVertex2f(0.45,1.05);
    glVertex2f(0.44,1.0);
    glVertex2f(0.4,1.05);
    glVertex2f(0.39,1.0);
    glVertex2f(0.35,1.05);
    glVertex2f(0.34,1.0);
    glVertex2f(0.3,1.05);
    glVertex2f(0.29,1.0);
    glVertex2f(0.25,1.05);
    glVertex2f(0.24,1.0);
    glVertex2f(0.2,1.05);
    glVertex2f(0.19,1.0);
    glVertex2f(0.15,1.05);
    glVertex2f(0.14,1.0);
    glVertex2f(0.1,1.05);
    glVertex2f(0.09,1.0);
    glVertex2f(0.05,1.05);
    glVertex2f(0.04,1.0);

    glVertex2f(-0.95,0.95);
    glVertex2f(-0.96,0.9);
    glVertex2f(-0.9,0.95);
    glVertex2f(-0.91,0.9);
    glVertex2f(-0.85,0.95);
    glVertex2f(-0.86,0.9);
    glVertex2f(-0.8,0.95);
    glVertex2f(-0.81,0.9);
    glVertex2f(-0.75,0.95);
    glVertex2f(-0.76,0.9);
    glVertex2f(-0.7,0.95);
    glVertex2f(-0.71,0.9);
    glVertex2f(-0.65,0.95);
    glVertex2f(-0.66,0.9);
    glVertex2f(-0.6,0.95);
    glVertex2f(-0.61,0.9);
    glVertex2f(-0.55,0.95);
    glVertex2f(-0.56,0.9);
    glVertex2f(-0.5,0.95);
    glVertex2f(-0.51,0.9);
    glVertex2f(-0.45,0.95);
    glVertex2f(-0.46,0.9);
    glVertex2f(-0.4,0.95);
    glVertex2f(-0.41,0.9);
    glVertex2f(-0.35,0.95);
    glVertex2f(-0.36,0.9);
    glVertex2f(-0.3,0.95);
    glVertex2f(-0.31,0.9);
    glVertex2f(-0.25,0.95);
    glVertex2f(-0.26,0.9);
    glVertex2f(-0.2,0.95);
    glVertex2f(-0.21,0.9);
    glVertex2f(-0.15,0.95);
    glVertex2f(-0.16,0.9);
    glVertex2f(-0.1,0.95);
    glVertex2f(-0.11,0.9);
    glVertex2f(-0.05,0.95);
    glVertex2f(-0.06,0.9);
    glVertex2f(0.0,0.95);
    glVertex2f(-0.01,0.9);
    glVertex2f(0.95,0.95);
    glVertex2f(0.94,0.9);
    glVertex2f(0.9,0.95);
    glVertex2f(0.89,0.9);
    glVertex2f(0.85,0.95);
    glVertex2f(0.84,0.9);
    glVertex2f(0.8,0.95);
    glVertex2f(0.79,0.9);
    glVertex2f(0.75,0.95);
    glVertex2f(0.74,0.9);
    glVertex2f(0.7,0.95);
    glVertex2f(0.69,0.9);
    glVertex2f(0.65,0.95);
    glVertex2f(0.64,0.9);
    glVertex2f(0.6,0.95);
    glVertex2f(0.59,0.9);
    glVertex2f(0.55,0.95);
    glVertex2f(0.54,0.9);
    glVertex2f(0.5,0.95);
    glVertex2f(0.49,0.9);
    glVertex2f(0.45,0.95);
    glVertex2f(0.44,0.9);
    glVertex2f(0.4,0.95);
    glVertex2f(0.39,0.9);
    glVertex2f(0.35,0.95);
    glVertex2f(0.34,0.9);
    glVertex2f(0.3,0.95);
    glVertex2f(0.29,0.9);
    glVertex2f(0.25,0.95);
    glVertex2f(0.24,0.9);
    glVertex2f(0.2,0.95);
    glVertex2f(0.19,0.9);
    glVertex2f(0.15,0.95);
    glVertex2f(0.14,0.9);
    glVertex2f(0.1,0.95);
    glVertex2f(0.09,0.9);
    glVertex2f(0.05,0.95);
    glVertex2f(0.04,0.9);

    glVertex2f(-0.95,0.85);
    glVertex2f(-0.96,0.8);
    glVertex2f(-0.9,0.85);
    glVertex2f(-0.91,0.8);
    glVertex2f(-0.85,0.85);
    glVertex2f(-0.86,0.8);
    glVertex2f(-0.8,0.85);
    glVertex2f(-0.81,0.8);
    glVertex2f(-0.75,0.85);
    glVertex2f(-0.76,0.8);
    glVertex2f(-0.7,0.85);
    glVertex2f(-0.71,0.8);
    glVertex2f(-0.65,0.85);
    glVertex2f(-0.66,0.8);
    glVertex2f(-0.6,0.85);
    glVertex2f(-0.61,0.8);
    glVertex2f(-0.55,0.85);
    glVertex2f(-0.56,0.8);
    glVertex2f(-0.5,0.85);
    glVertex2f(-0.51,0.8);
    glVertex2f(-0.45,0.85);
    glVertex2f(-0.46,0.8);
    glVertex2f(-0.4,0.85);
    glVertex2f(-0.41,0.8);
    glVertex2f(-0.35,0.85);
    glVertex2f(-0.36,0.8);
    glVertex2f(-0.3,0.85);
    glVertex2f(-0.31,0.8);
    glVertex2f(-0.25,0.85);
    glVertex2f(-0.26,0.8);
    glVertex2f(-0.2,0.85);
    glVertex2f(-0.21,0.8);
    glVertex2f(-0.15,0.85);
    glVertex2f(-0.16,0.8);
    glVertex2f(-0.1,0.85);
    glVertex2f(-0.11,0.8);
    glVertex2f(-0.05,0.85);
    glVertex2f(-0.06,0.8);
    glVertex2f(0.0,0.85);
    glVertex2f(-0.01,0.8);
    glVertex2f(0.95,0.85);
    glVertex2f(0.94,0.8);
    glVertex2f(0.9,0.85);
    glVertex2f(0.89,0.8);
    glVertex2f(0.85,0.85);
    glVertex2f(0.84,0.8);
    glVertex2f(0.8,0.85);
    glVertex2f(0.79,0.8);
    glVertex2f(0.75,0.85);
    glVertex2f(0.74,0.8);
    glVertex2f(0.7,0.85);
    glVertex2f(0.69,0.8);
    glVertex2f(0.65,0.85);
    glVertex2f(0.64,0.8);
    glVertex2f(0.6,0.85);
    glVertex2f(0.59,0.8);
    glVertex2f(0.55,0.85);
    glVertex2f(0.54,0.8);
    glVertex2f(0.5,0.85);
    glVertex2f(0.49,0.8);
    glVertex2f(0.45,0.85);
    glVertex2f(0.44,0.8);
    glVertex2f(0.4,0.85);
    glVertex2f(0.39,0.8);
    glVertex2f(0.35,0.85);
    glVertex2f(0.34,0.8);
    glVertex2f(0.3,0.85);
    glVertex2f(0.29,0.8);
    glVertex2f(0.25,0.85);
    glVertex2f(0.24,0.8);
    glVertex2f(0.2,0.85);
    glVertex2f(0.19,0.8);
    glVertex2f(0.15,0.85);
    glVertex2f(0.14,0.8);
    glVertex2f(0.1,0.85);
    glVertex2f(0.09,0.8);
    glVertex2f(0.05,0.85);
    glVertex2f(0.04,0.8);

    glVertex2f(-0.95,0.75);
    glVertex2f(-0.96,0.7);
    glVertex2f(-0.9,0.75);
    glVertex2f(-0.91,0.7);
    glVertex2f(-0.85,0.75);
    glVertex2f(-0.86,0.7);
    glVertex2f(-0.8,0.75);
    glVertex2f(-0.81,0.7);
    glVertex2f(-0.75,0.75);
    glVertex2f(-0.76,0.7);
    glVertex2f(-0.7,0.75);
    glVertex2f(-0.71,0.7);
    glVertex2f(-0.65,0.75);
    glVertex2f(-0.66,0.7);
    glVertex2f(-0.6,0.75);
    glVertex2f(-0.61,0.7);
    glVertex2f(-0.55,0.75);
    glVertex2f(-0.56,0.7);
    glVertex2f(-0.5,0.75);
    glVertex2f(-0.51,0.7);
    glVertex2f(-0.45,0.75);
    glVertex2f(-0.46,0.7);
    glVertex2f(-0.4,0.75);
    glVertex2f(-0.41,0.7);
    glVertex2f(-0.35,0.75);
    glVertex2f(-0.36,0.7);
    glVertex2f(-0.3,0.75);
    glVertex2f(-0.31,0.7);
    glVertex2f(-0.25,0.75);
    glVertex2f(-0.26,0.7);
    glVertex2f(-0.2,0.75);
    glVertex2f(-0.21,0.7);
    glVertex2f(-0.15,0.75);
    glVertex2f(-0.16,0.7);
    glVertex2f(-0.1,0.75);
    glVertex2f(-0.11,0.7);
    glVertex2f(-0.05,0.75);
    glVertex2f(-0.06,0.7);
    glVertex2f(0.0,0.75);
    glVertex2f(-0.01,0.7);
    glVertex2f(0.95,0.75);
    glVertex2f(0.94,0.7);
    glVertex2f(0.9,0.75);
    glVertex2f(0.89,0.7);
    glVertex2f(0.85,0.75);
    glVertex2f(0.84,0.7);
    glVertex2f(0.8,0.75);
    glVertex2f(0.79,0.7);
    glVertex2f(0.75,0.75);
    glVertex2f(0.74,0.7);
    glVertex2f(0.7,0.75);
    glVertex2f(0.69,0.7);
    glVertex2f(0.65,0.75);
    glVertex2f(0.64,0.7);
    glVertex2f(0.6,0.75);
    glVertex2f(0.59,0.7);
    glVertex2f(0.55,0.75);
    glVertex2f(0.54,0.7);
    glVertex2f(0.5,0.75);
    glVertex2f(0.49,0.7);
    glVertex2f(0.45,0.75);
    glVertex2f(0.44,0.7);
    glVertex2f(0.4,0.75);
    glVertex2f(0.39,0.7);
    glVertex2f(0.35,0.75);
    glVertex2f(0.34,0.7);
    glVertex2f(0.3,0.75);
    glVertex2f(0.29,0.7);
    glVertex2f(0.25,0.75);
    glVertex2f(0.24,0.7);
    glVertex2f(0.2,0.75);
    glVertex2f(0.19,0.7);
    glVertex2f(0.15,0.75);
    glVertex2f(0.14,0.7);
    glVertex2f(0.1,0.75);
    glVertex2f(0.09,0.7);
    glVertex2f(0.05,0.75);
    glVertex2f(0.04,0.7);

    glVertex2f(-0.95,0.65);
    glVertex2f(-0.96,0.6);
    glVertex2f(-0.9,0.65);
    glVertex2f(-0.91,0.6);
    glVertex2f(-0.85,0.65);
    glVertex2f(-0.86,0.6);
    glVertex2f(-0.8,0.65);
    glVertex2f(-0.81,0.6);
    glVertex2f(-0.75,0.65);
    glVertex2f(-0.76,0.6);
    glVertex2f(-0.7,0.65);
    glVertex2f(-0.71,0.6);
    glVertex2f(-0.65,0.65);
    glVertex2f(-0.66,0.6);
    glVertex2f(-0.6,0.65);
    glVertex2f(-0.61,0.6);
    glVertex2f(-0.55,0.65);
    glVertex2f(-0.56,0.6);
    glVertex2f(-0.5,0.65);
    glVertex2f(-0.51,0.6);
    glVertex2f(-0.45,0.65);
    glVertex2f(-0.46,0.6);
    glVertex2f(-0.4,0.65);
    glVertex2f(-0.41,0.6);
    glVertex2f(-0.35,0.65);
    glVertex2f(-0.36,0.6);
    glVertex2f(-0.3,0.65);
    glVertex2f(-0.31,0.6);
    glVertex2f(-0.25,0.65);
    glVertex2f(-0.26,0.6);
    glVertex2f(-0.2,0.65);
    glVertex2f(-0.21,0.6);
    glVertex2f(-0.15,0.65);
    glVertex2f(-0.16,0.6);
    glVertex2f(-0.1,0.65);
    glVertex2f(-0.11,0.6);
    glVertex2f(-0.05,0.65);
    glVertex2f(-0.06,0.6);
    glVertex2f(0.0,0.65);
    glVertex2f(-0.01,0.6);
    glVertex2f(0.95,0.65);
    glVertex2f(0.94,0.6);
    glVertex2f(0.9,0.65);
    glVertex2f(0.89,0.6);
    glVertex2f(0.85,0.65);
    glVertex2f(0.84,0.6);
    glVertex2f(0.8,0.65);
    glVertex2f(0.79,0.6);
    glVertex2f(0.75,0.65);
    glVertex2f(0.74,0.6);
    glVertex2f(0.7,0.65);
    glVertex2f(0.69,0.6);
    glVertex2f(0.65,0.65);
    glVertex2f(0.64,0.6);
    glVertex2f(0.6,0.65);
    glVertex2f(0.59,0.6);
    glVertex2f(0.55,0.65);
    glVertex2f(0.54,0.6);
    glVertex2f(0.5,0.65);
    glVertex2f(0.49,0.6);
    glVertex2f(0.45,0.65);
    glVertex2f(0.44,0.6);
    glVertex2f(0.4,0.65);
    glVertex2f(0.39,0.6);
    glVertex2f(0.35,0.65);
    glVertex2f(0.34,0.6);
    glVertex2f(0.3,0.65);
    glVertex2f(0.29,0.6);
    glVertex2f(0.25,0.65);
    glVertex2f(0.24,0.6);
    glVertex2f(0.2,0.65);
    glVertex2f(0.19,0.6);
    glVertex2f(0.15,0.65);
    glVertex2f(0.14,0.6);
    glVertex2f(0.1,0.65);
    glVertex2f(0.09,0.6);
    glVertex2f(0.05,0.65);
    glVertex2f(0.04,0.6);

    glVertex2f(-0.95,0.55);
    glVertex2f(-0.96,0.5);
    glVertex2f(-0.9,0.55);
    glVertex2f(-0.91,0.5);
    glVertex2f(-0.85,0.55);
    glVertex2f(-0.86,0.5);
    glVertex2f(-0.8,0.55);
    glVertex2f(-0.81,0.5);
    glVertex2f(-0.75,0.55);
    glVertex2f(-0.76,0.5);
    glVertex2f(-0.7,0.55);
    glVertex2f(-0.71,0.5);
    glVertex2f(-0.65,0.55);
    glVertex2f(-0.66,0.5);
    glVertex2f(-0.6,0.55);
    glVertex2f(-0.61,0.5);
    glVertex2f(-0.55,0.55);
    glVertex2f(-0.56,0.5);
    glVertex2f(-0.5,0.55);
    glVertex2f(-0.51,0.5);
    glVertex2f(-0.45,0.55);
    glVertex2f(-0.46,0.5);
    glVertex2f(-0.4,0.55);
    glVertex2f(-0.41,0.5);
    glVertex2f(-0.35,0.55);
    glVertex2f(-0.36,0.5);
    glVertex2f(-0.3,0.55);
    glVertex2f(-0.31,0.5);
    glVertex2f(-0.25,0.55);
    glVertex2f(-0.26,0.5);
    glVertex2f(-0.2,0.55);
    glVertex2f(-0.21,0.5);
    glVertex2f(-0.15,0.55);
    glVertex2f(-0.16,0.5);
    glVertex2f(-0.1,0.55);
    glVertex2f(-0.11,0.5);
    glVertex2f(-0.05,0.55);
    glVertex2f(-0.06,0.5);
    glVertex2f(0.0,0.55);
    glVertex2f(-0.01,0.5);
    glVertex2f(0.95,0.55);
    glVertex2f(0.94,0.5);
    glVertex2f(0.9,0.55);
    glVertex2f(0.89,0.5);
    glVertex2f(0.85,0.55);
    glVertex2f(0.84,0.5);
    glVertex2f(0.8,0.55);
    glVertex2f(0.79,0.5);
    glVertex2f(0.75,0.55);
    glVertex2f(0.74,0.5);
    glVertex2f(0.7,0.55);
    glVertex2f(0.69,0.5);
    glVertex2f(0.65,0.55);
    glVertex2f(0.64,0.5);
    glVertex2f(0.6,0.55);
    glVertex2f(0.59,0.5);
    glVertex2f(0.55,0.55);
    glVertex2f(0.54,0.5);
    glVertex2f(0.5,0.55);
    glVertex2f(0.49,0.5);
    glVertex2f(0.45,0.55);
    glVertex2f(0.44,0.5);
    glVertex2f(0.4,0.55);
    glVertex2f(0.39,0.5);
    glVertex2f(0.35,0.55);
    glVertex2f(0.34,0.5);
    glVertex2f(0.3,0.55);
    glVertex2f(0.29,0.5);
    glVertex2f(0.25,0.55);
    glVertex2f(0.24,0.5);
    glVertex2f(0.2,0.55);
    glVertex2f(0.19,0.5);
    glVertex2f(0.15,0.55);
    glVertex2f(0.14,0.5);
    glVertex2f(0.1,0.55);
    glVertex2f(0.09,0.5);
    glVertex2f(0.05,0.55);
    glVertex2f(0.04,0.5);

    glVertex2f(-0.95,0.45);
    glVertex2f(-0.96,0.4);
    glVertex2f(-0.9,0.45);
    glVertex2f(-0.91,0.4);
    glVertex2f(-0.85,0.45);
    glVertex2f(-0.86,0.4);
    glVertex2f(-0.8,0.45);
    glVertex2f(-0.81,0.4);
    glVertex2f(-0.75,0.45);
    glVertex2f(-0.76,0.4);
    glVertex2f(-0.7,0.45);
    glVertex2f(-0.71,0.4);
    glVertex2f(-0.65,0.45);
    glVertex2f(-0.66,0.4);
    glVertex2f(-0.6,0.45);
    glVertex2f(-0.61,0.4);
    glVertex2f(-0.55,0.45);
    glVertex2f(-0.56,0.4);
    glVertex2f(-0.5,0.45);
    glVertex2f(-0.51,0.4);
    glVertex2f(-0.45,0.45);
    glVertex2f(-0.46,0.4);
    glVertex2f(-0.4,0.45);
    glVertex2f(-0.41,0.4);
    glVertex2f(-0.35,0.45);
    glVertex2f(-0.36,0.4);
    glVertex2f(-0.3,0.45);
    glVertex2f(-0.31,0.4);
    glVertex2f(-0.25,0.45);
    glVertex2f(-0.26,0.4);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.21,0.4);
    glVertex2f(-0.15,0.45);
    glVertex2f(-0.16,0.4);
    glVertex2f(-0.1,0.45);
    glVertex2f(-0.11,0.4);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.06,0.4);
    glVertex2f(0.0,0.45);
    glVertex2f(-0.01,0.4);
    glVertex2f(0.95,0.45);
    glVertex2f(0.94,0.4);
    glVertex2f(0.9,0.45);
    glVertex2f(0.89,0.4);
    glVertex2f(0.85,0.45);
    glVertex2f(0.84,0.4);
    glVertex2f(0.8,0.45);
    glVertex2f(0.79,0.4);
    glVertex2f(0.75,0.45);
    glVertex2f(0.74,0.4);
    glVertex2f(0.7,0.45);
    glVertex2f(0.69,0.4);
    glVertex2f(0.65,0.45);
    glVertex2f(0.64,0.4);
    glVertex2f(0.6,0.45);
    glVertex2f(0.59,0.4);
    glVertex2f(0.55,0.45);
    glVertex2f(0.54,0.4);
    glVertex2f(0.5,0.45);
    glVertex2f(0.49,0.4);
    glVertex2f(0.45,0.45);
    glVertex2f(0.44,0.4);
    glVertex2f(0.4,0.45);
    glVertex2f(0.39,0.4);
    glVertex2f(0.35,0.45);
    glVertex2f(0.34,0.4);
    glVertex2f(0.3,0.45);
    glVertex2f(0.29,0.4);
    glVertex2f(0.25,0.45);
    glVertex2f(0.24,0.4);
    glVertex2f(0.2,0.45);
    glVertex2f(0.19,0.4);
    glVertex2f(0.15,0.45);
    glVertex2f(0.14,0.4);
    glVertex2f(0.1,0.45);
    glVertex2f(0.09,0.4);
    glVertex2f(0.05,0.45);
    glVertex2f(0.04,0.4);

    glVertex2f(-0.95,0.35);
    glVertex2f(-0.96,0.3);
    glVertex2f(-0.9,0.35);
    glVertex2f(-0.91,0.3);
    glVertex2f(-0.85,0.35);
    glVertex2f(-0.86,0.3);
    glVertex2f(-0.8,0.35);
    glVertex2f(-0.81,0.3);
    glVertex2f(-0.75,0.35);
    glVertex2f(-0.76,0.3);
    glVertex2f(-0.7,0.35);
    glVertex2f(-0.71,0.3);
    glVertex2f(-0.65,0.35);
    glVertex2f(-0.66,0.3);
    glVertex2f(-0.6,0.35);
    glVertex2f(-0.61,0.3);
    glVertex2f(-0.55,0.35);
    glVertex2f(-0.56,0.3);
    glVertex2f(-0.5,0.35);
    glVertex2f(-0.51,0.3);
    glVertex2f(-0.45,0.35);
    glVertex2f(-0.46,0.3);
    glVertex2f(-0.4,0.35);
    glVertex2f(-0.41,0.3);
    glVertex2f(-0.35,0.35);
    glVertex2f(-0.36,0.3);
    glVertex2f(-0.3,0.35);
    glVertex2f(-0.31,0.3);
    glVertex2f(-0.25,0.35);
    glVertex2f(-0.26,0.3);
    glVertex2f(-0.2,0.35);
    glVertex2f(-0.21,0.3);
    glVertex2f(-0.15,0.35);
    glVertex2f(-0.16,0.3);
    glVertex2f(-0.1,0.35);
    glVertex2f(-0.11,0.3);
    glVertex2f(-0.05,0.35);
    glVertex2f(-0.06,0.3);
    glVertex2f(0.0,0.35);
    glVertex2f(-0.01,0.3);
    glVertex2f(0.95,0.35);
    glVertex2f(0.94,0.3);
    glVertex2f(0.9,0.35);
    glVertex2f(0.89,0.3);
    glVertex2f(0.85,0.35);
    glVertex2f(0.84,0.3);
    glVertex2f(0.8,0.35);
    glVertex2f(0.79,0.3);
    glVertex2f(0.75,0.35);
    glVertex2f(0.74,0.3);
    glVertex2f(0.7,0.35);
    glVertex2f(0.69,0.3);
    glVertex2f(0.65,0.35);
    glVertex2f(0.64,0.3);
    glVertex2f(0.6,0.35);
    glVertex2f(0.59,0.3);
    glVertex2f(0.55,0.35);
    glVertex2f(0.54,0.3);
    glVertex2f(0.5,0.35);
    glVertex2f(0.49,0.3);
    glVertex2f(0.45,0.35);
    glVertex2f(0.44,0.3);
    glVertex2f(0.4,0.35);
    glVertex2f(0.39,0.3);
    glVertex2f(0.35,0.35);
    glVertex2f(0.34,0.3);
    glVertex2f(0.3,0.35);
    glVertex2f(0.29,0.3);
    glVertex2f(0.25,0.35);
    glVertex2f(0.24,0.3);
    glVertex2f(0.2,0.35);
    glVertex2f(0.19,0.3);
    glVertex2f(0.15,0.35);
    glVertex2f(0.14,0.3);
    glVertex2f(0.1,0.35);
    glVertex2f(0.09,0.3);
    glVertex2f(0.05,0.35);
    glVertex2f(0.04,0.3);

    glVertex2f(-0.95,0.25);
    glVertex2f(-0.96,0.2);
    glVertex2f(-0.9,0.25);
    glVertex2f(-0.91,0.2);
    glVertex2f(-0.85,0.25);
    glVertex2f(-0.86,0.2);
    glVertex2f(-0.8,0.25);
    glVertex2f(-0.81,0.2);
    glVertex2f(-0.75,0.25);
    glVertex2f(-0.76,0.2);
    glVertex2f(-0.7,0.25);
    glVertex2f(-0.71,0.2);
    glVertex2f(-0.65,0.25);
    glVertex2f(-0.66,0.2);
    glVertex2f(-0.6,0.25);
    glVertex2f(-0.61,0.2);
    glVertex2f(-0.55,0.25);
    glVertex2f(-0.56,0.2);
    glVertex2f(-0.5,0.25);
    glVertex2f(-0.51,0.2);
    glVertex2f(-0.45,0.25);
    glVertex2f(-0.46,0.2);
    glVertex2f(-0.4,0.25);
    glVertex2f(-0.41,0.2);
    glVertex2f(-0.35,0.25);
    glVertex2f(-0.36,0.2);
    glVertex2f(-0.3,0.25);
    glVertex2f(-0.31,0.2);
    glVertex2f(-0.25,0.25);
    glVertex2f(-0.26,0.2);
    glVertex2f(-0.2,0.25);
    glVertex2f(-0.21,0.2);
    glVertex2f(-0.15,0.25);
    glVertex2f(-0.16,0.2);
    glVertex2f(-0.1,0.25);
    glVertex2f(-0.11,0.2);
    glVertex2f(-0.05,0.25);
    glVertex2f(-0.06,0.2);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.01,0.2);
    glVertex2f(0.95,0.25);
    glVertex2f(0.94,0.2);
    glVertex2f(0.9,0.25);
    glVertex2f(0.89,0.2);
    glVertex2f(0.85,0.25);
    glVertex2f(0.84,0.2);
    glVertex2f(0.8,0.25);
    glVertex2f(0.79,0.2);
    glVertex2f(0.75,0.25);
    glVertex2f(0.74,0.2);
    glVertex2f(0.7,0.25);
    glVertex2f(0.69,0.2);
    glVertex2f(0.65,0.25);
    glVertex2f(0.64,0.2);
    glVertex2f(0.6,0.25);
    glVertex2f(0.59,0.2);
    glVertex2f(0.55,0.25);
    glVertex2f(0.54,0.2);
    glVertex2f(0.5,0.25);
    glVertex2f(0.49,0.2);
    glVertex2f(0.45,0.25);
    glVertex2f(0.44,0.2);
    glVertex2f(0.4,0.25);
    glVertex2f(0.39,0.2);
    glVertex2f(0.35,0.25);
    glVertex2f(0.34,0.2);
    glVertex2f(0.3,0.25);
    glVertex2f(0.29,0.2);
    glVertex2f(0.25,0.25);
    glVertex2f(0.24,0.2);
    glVertex2f(0.2,0.25);
    glVertex2f(0.19,0.2);
    glVertex2f(0.15,0.25);
    glVertex2f(0.14,0.2);
    glVertex2f(0.1,0.25);
    glVertex2f(0.09,0.2);
    glVertex2f(0.05,0.25);
    glVertex2f(0.04,0.2);

    glVertex2f(-0.95,0.15);
    glVertex2f(-0.96,0.1);
    glVertex2f(-0.9,0.15);
    glVertex2f(-0.91,0.1);
    glVertex2f(-0.85,0.15);
    glVertex2f(-0.86,0.1);
    glVertex2f(-0.8,0.15);
    glVertex2f(-0.81,0.1);
    glVertex2f(-0.75,0.15);
    glVertex2f(-0.76,0.1);
    glVertex2f(-0.7,0.15);
    glVertex2f(-0.71,0.1);
    glVertex2f(-0.65,0.15);
    glVertex2f(-0.66,0.1);
    glVertex2f(-0.6,0.15);
    glVertex2f(-0.61,0.1);
    glVertex2f(-0.55,0.15);
    glVertex2f(-0.56,0.1);
    glVertex2f(-0.5,0.15);
    glVertex2f(-0.51,0.1);
    glVertex2f(-0.45,0.15);
    glVertex2f(-0.46,0.1);
    glVertex2f(-0.4,0.15);
    glVertex2f(-0.41,0.1);
    glVertex2f(-0.35,0.15);
    glVertex2f(-0.36,0.1);
    glVertex2f(-0.3,0.15);
    glVertex2f(-0.31,0.1);
    glVertex2f(-0.25,0.15);
    glVertex2f(-0.26,0.1);
    glVertex2f(-0.2,0.15);
    glVertex2f(-0.21,0.1);
    glVertex2f(-0.15,0.15);
    glVertex2f(-0.16,0.1);
    glVertex2f(-0.1,0.15);
    glVertex2f(-0.11,0.1);
    glVertex2f(-0.05,0.15);
    glVertex2f(-0.06,0.1);
    glVertex2f(0.0,0.15);
    glVertex2f(-0.01,0.1);
    glVertex2f(0.95,0.15);
    glVertex2f(0.94,0.1);
    glVertex2f(0.9,0.15);
    glVertex2f(0.89,0.1);
    glVertex2f(0.85,0.15);
    glVertex2f(0.84,0.1);
    glVertex2f(0.8,0.15);
    glVertex2f(0.79,0.1);
    glVertex2f(0.75,0.15);
    glVertex2f(0.74,0.1);
    glVertex2f(0.7,0.15);
    glVertex2f(0.69,0.1);
    glVertex2f(0.65,0.15);
    glVertex2f(0.64,0.1);
    glVertex2f(0.6,0.15);
    glVertex2f(0.59,0.1);
    glVertex2f(0.55,0.15);
    glVertex2f(0.54,0.1);
    glVertex2f(0.5,0.15);
    glVertex2f(0.49,0.1);
    glVertex2f(0.45,0.15);
    glVertex2f(0.44,0.1);
    glVertex2f(0.4,0.15);
    glVertex2f(0.39,0.1);
    glVertex2f(0.35,0.15);
    glVertex2f(0.34,0.1);
    glVertex2f(0.3,0.15);
    glVertex2f(0.29,0.1);
    glVertex2f(0.25,0.15);
    glVertex2f(0.24,0.1);
    glVertex2f(0.2,0.15);
    glVertex2f(0.19,0.1);
    glVertex2f(0.15,0.15);
    glVertex2f(0.14,0.1);
    glVertex2f(0.1,0.15);
    glVertex2f(0.09,0.1);
    glVertex2f(0.05,0.15);
    glVertex2f(0.04,0.1);

    glVertex2f(-0.95,0.025);
    glVertex2f(-0.96,-0.025);
    glVertex2f(-0.9,0.025);
    glVertex2f(-0.91,-0.025);
    glVertex2f(-0.85,0.025);
    glVertex2f(-0.86,-0.025);
    glVertex2f(-0.8,0.025);
    glVertex2f(-0.81,-0.025);
    glVertex2f(-0.75,0.025);
    glVertex2f(-0.76,-0.025);
    glVertex2f(-0.7,0.025);
    glVertex2f(-0.71,-0.025);
    glVertex2f(-0.65,0.025);
    glVertex2f(-0.66,-0.025);
    glVertex2f(-0.6,0.025);
    glVertex2f(-0.61,-0.025);
    glVertex2f(-0.55,0.025);
    glVertex2f(-0.56,-0.025);
    glVertex2f(-0.5,0.025);
    glVertex2f(-0.51,-0.025);
    glVertex2f(-0.45,0.025);
    glVertex2f(-0.46,-0.025);
    glVertex2f(-0.4,0.025);
    glVertex2f(-0.41,-0.025);
    glVertex2f(-0.35,0.025);
    glVertex2f(-0.36,-0.025);
    glVertex2f(-0.3,0.025);
    glVertex2f(-0.31,-0.025);
    glVertex2f(-0.25,0.025);
    glVertex2f(-0.26,-0.025);
    glVertex2f(-0.2,0.025);
    glVertex2f(-0.21,-0.025);
    glVertex2f(-0.15,0.025);
    glVertex2f(-0.16,-0.025);
    glVertex2f(-0.1,0.025);
    glVertex2f(-0.11,-0.025);
    glVertex2f(-0.05,0.025);
    glVertex2f(-0.06,-0.025);
    glVertex2f(0.0,0.025);
    glVertex2f(-0.01,-0.025);
    glVertex2f(0.95,0.025);
    glVertex2f(0.94,-0.025);
    glVertex2f(0.9,0.025);
    glVertex2f(0.89,-0.025);
    glVertex2f(0.85,0.025);
    glVertex2f(0.84,-0.025);
    glVertex2f(0.8,0.025);
    glVertex2f(0.79,-0.025);
    glVertex2f(0.75,0.025);
    glVertex2f(0.74,-0.025);
    glVertex2f(0.7,0.025);
    glVertex2f(0.69,-0.025);
    glVertex2f(0.65,0.025);
    glVertex2f(0.64,-0.025);
    glVertex2f(0.6,0.025);
    glVertex2f(0.59,-0.025);
    glVertex2f(0.55,0.025);
    glVertex2f(0.54,-0.025);
    glVertex2f(0.5,0.025);
    glVertex2f(0.49,-0.025);
    glVertex2f(0.45,0.025);
    glVertex2f(0.44,-0.025);
    glVertex2f(0.4,0.025);
    glVertex2f(0.39,-0.025);
    glVertex2f(0.35,0.025);
    glVertex2f(0.34,-0.025);
    glVertex2f(0.3,0.025);
    glVertex2f(0.29,-0.025);
    glVertex2f(0.25,0.025);
    glVertex2f(0.24,-0.025);
    glVertex2f(0.2,0.025);
    glVertex2f(0.19,-0.025);
    glVertex2f(0.15,0.025);
    glVertex2f(0.14,-0.025);
    glVertex2f(0.1,0.025);
    glVertex2f(0.09,-0.025);
    glVertex2f(0.05,0.025);
    glVertex2f(0.04,-0.025);

    glVertex2f(-0.95,-0.1);
    glVertex2f(-0.96,-0.15);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.91,-0.15);
    glVertex2f(-0.85,-0.1);
    glVertex2f(-0.86,-0.15);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.81,-0.15);
    glVertex2f(-0.75,-0.1);
    glVertex2f(-0.76,-0.15);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.71,-0.15);
    glVertex2f(-0.65,-0.1);
    glVertex2f(-0.66,-0.15);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.61,-0.15);
    glVertex2f(-0.55,-0.1);
    glVertex2f(-0.56,-0.15);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.51,-0.15);
    glVertex2f(-0.45,-0.1);
    glVertex2f(-0.46,-0.15);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.41,-0.15);
    glVertex2f(-0.35,-0.1);
    glVertex2f(-0.36,-0.15);
    glVertex2f(-0.3,-0.1);
    glVertex2f(-0.31,-0.15);
    glVertex2f(-0.25,-0.1);
    glVertex2f(-0.26,-0.15);
    glVertex2f(-0.2,-0.1);
    glVertex2f(-0.21,-0.15);
    glVertex2f(-0.15,-0.1);
    glVertex2f(-0.16,-0.15);
    glVertex2f(-0.1,-0.1);
    glVertex2f(-0.11,-0.15);
    glVertex2f(-0.05,-0.1);
    glVertex2f(-0.06,-0.15);
    glVertex2f(0.0,-0.1);
    glVertex2f(-0.01,-0.15);
    glVertex2f(0.95,-0.1);
    glVertex2f(0.94,-0.15);
    glVertex2f(0.9,-0.1);
    glVertex2f(0.89,-0.15);
    glVertex2f(0.85,-0.1);
    glVertex2f(0.84,-0.15);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.79,-0.15);
    glVertex2f(0.75,-0.1);
    glVertex2f(0.74,-0.15);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.69,-0.15);
    glVertex2f(0.65,-0.1);
    glVertex2f(0.64,-0.15);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.59,-0.15);
    glVertex2f(0.55,-0.1);
    glVertex2f(0.54,-0.15);
    glVertex2f(0.5,-0.1);
    glVertex2f(0.49,-0.15);
    glVertex2f(0.45,-0.1);
    glVertex2f(0.44,-0.15);
    glVertex2f(0.4,-0.1);
    glVertex2f(0.39,-0.15);
    glVertex2f(0.35,-0.1);
    glVertex2f(0.34,-0.15);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.29,-0.15);
    glVertex2f(0.25,-0.1);
    glVertex2f(0.24,-0.15);
    glVertex2f(0.2,-0.1);
    glVertex2f(0.19,-0.15);
    glVertex2f(0.15,-0.1);
    glVertex2f(0.14,-0.15);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.09,-0.15);
    glVertex2f(0.05,-0.1);
    glVertex2f(0.04,-0.15);

    glVertex2f(-0.95,-0.2);
    glVertex2f(-0.96,-0.25);
    glVertex2f(-0.9,-0.2);
    glVertex2f(-0.91,-0.25);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.86,-0.25);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.81,-0.25);
    glVertex2f(-0.75,-0.2);
    glVertex2f(-0.76,-0.25);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.71,-0.25);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.66,-0.25);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.61,-0.25);
    glVertex2f(-0.55,-0.2);
    glVertex2f(-0.56,-0.25);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.51,-0.25);
    glVertex2f(-0.45,-0.2);
    glVertex2f(-0.46,-0.25);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.41,-0.25);
    glVertex2f(-0.35,-0.2);
    glVertex2f(-0.36,-0.25);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.31,-0.25);
    glVertex2f(-0.25,-0.2);
    glVertex2f(-0.26,-0.25);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.21,-0.25);
    glVertex2f(-0.15,-0.2);
    glVertex2f(-0.16,-0.25);
    glVertex2f(-0.1,-0.2);
    glVertex2f(-0.11,-0.25);
    glVertex2f(-0.05,-0.2);
    glVertex2f(-0.06,-0.25);
    glVertex2f(0.0,-0.2);
    glVertex2f(-0.01,-0.25);
    glVertex2f(0.95,-0.2);
    glVertex2f(0.94,-0.25);
    glVertex2f(0.9,-0.2);
    glVertex2f(0.89,-0.25);
    glVertex2f(0.85,-0.2);
    glVertex2f(0.84,-0.25);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.79,-0.25);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.74,-0.25);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.69,-0.25);
    glVertex2f(0.65,-0.2);
    glVertex2f(0.64,-0.25);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.59,-0.25);
    glVertex2f(0.55,-0.2);
    glVertex2f(0.54,-0.25);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.49,-0.25);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.44,-0.25);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.39,-0.25);
    glVertex2f(0.35,-0.2);
    glVertex2f(0.34,-0.25);
    glVertex2f(0.3,-0.2);
    glVertex2f(0.29,-0.25);
    glVertex2f(0.25,-0.2);
    glVertex2f(0.24,-0.25);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.19,-0.25);
    glVertex2f(0.15,-0.2);
    glVertex2f(0.14,-0.25);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.09,-0.25);
    glVertex2f(0.05,-0.2);
    glVertex2f(0.04,-0.25);

    glVertex2f(-0.95,-0.3);
    glVertex2f(-0.96,-0.35);
    glVertex2f(-0.9,-0.3);
    glVertex2f(-0.91,-0.35);
    glVertex2f(-0.85,-0.3);
    glVertex2f(-0.86,-0.35);
    glVertex2f(-0.8,-0.3);
    glVertex2f(-0.81,-0.35);
    glVertex2f(-0.75,-0.3);
    glVertex2f(-0.76,-0.35);
    glVertex2f(-0.7,-0.3);
    glVertex2f(-0.71,-0.35);
    glVertex2f(-0.65,-0.3);
    glVertex2f(-0.66,-0.35);
    glVertex2f(-0.6,-0.3);
    glVertex2f(-0.61,-0.35);
    glVertex2f(-0.55,-0.3);
    glVertex2f(-0.56,-0.35);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.51,-0.35);
    glVertex2f(-0.45,-0.3);
    glVertex2f(-0.46,-0.35);
    glVertex2f(-0.4,-0.3);
    glVertex2f(-0.41,-0.35);
    glVertex2f(-0.35,-0.3);
    glVertex2f(-0.36,-0.35);
    glVertex2f(-0.3,-0.3);
    glVertex2f(-0.31,-0.35);
    glVertex2f(-0.25,-0.3);
    glVertex2f(-0.26,-0.35);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.21,-0.35);
    glVertex2f(-0.15,-0.3);
    glVertex2f(-0.16,-0.35);
    glVertex2f(-0.1,-0.3);
    glVertex2f(-0.11,-0.35);
    glVertex2f(-0.05,-0.3);
    glVertex2f(-0.06,-0.35);
    glVertex2f(0.0,-0.3);
    glVertex2f(-0.01,-0.35);
    glVertex2f(0.95,-0.3);
    glVertex2f(0.94,-0.35);
    glVertex2f(0.9,-0.3);
    glVertex2f(0.89,-0.35);
    glVertex2f(0.85,-0.3);
    glVertex2f(0.84,-0.35);
    glVertex2f(0.8,-0.3);
    glVertex2f(0.79,-0.35);
    glVertex2f(0.75,-0.3);
    glVertex2f(0.74,-0.35);
    glVertex2f(0.7,-0.3);
    glVertex2f(0.69,-0.35);
    glVertex2f(0.65,-0.3);
    glVertex2f(0.64,-0.35);
    glVertex2f(0.6,-0.3);
    glVertex2f(0.59,-0.35);
    glVertex2f(0.55,-0.3);
    glVertex2f(0.54,-0.35);
    glVertex2f(0.5,-0.3);
    glVertex2f(0.49,-0.35);
    glVertex2f(0.45,-0.3);
    glVertex2f(0.44,-0.35);
    glVertex2f(0.4,-0.3);
    glVertex2f(0.39,-0.35);
    glVertex2f(0.35,-0.3);
    glVertex2f(0.34,-0.35);
    glVertex2f(0.3,-0.3);
    glVertex2f(0.29,-0.35);
    glVertex2f(0.25,-0.3);
    glVertex2f(0.24,-0.35);
    glVertex2f(0.2,-0.3);
    glVertex2f(0.19,-0.35);
    glVertex2f(0.15,-0.3);
    glVertex2f(0.14,-0.35);
    glVertex2f(0.1,-0.3);
    glVertex2f(0.09,-0.35);
    glVertex2f(0.05,-0.3);
    glVertex2f(0.04,-0.35);

    glVertex2f(-0.95,-0.4);
    glVertex2f(-0.96,-0.45);
    glVertex2f(-0.9,-0.4);
    glVertex2f(-0.91,-0.45);
    glVertex2f(-0.85,-0.4);
    glVertex2f(-0.86,-0.45);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.81,-0.45);
    glVertex2f(-0.75,-0.4);
    glVertex2f(-0.76,-0.45);
    glVertex2f(-0.7,-0.4);
    glVertex2f(-0.71,-0.45);
    glVertex2f(-0.65,-0.4);
    glVertex2f(-0.66,-0.45);
    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.61,-0.45);
    glVertex2f(-0.55,-0.4);
    glVertex2f(-0.56,-0.45);
    glVertex2f(-0.5,-0.4);
    glVertex2f(-0.51,-0.45);
    glVertex2f(-0.45,-0.4);
    glVertex2f(-0.46,-0.45);
    glVertex2f(-0.4,-0.4);
    glVertex2f(-0.41,-0.45);
    glVertex2f(-0.35,-0.4);
    glVertex2f(-0.36,-0.45);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.31,-0.45);
    glVertex2f(-0.25,-0.4);
    glVertex2f(-0.26,-0.45);
    glVertex2f(-0.2,-0.4);
    glVertex2f(-0.21,-0.45);
    glVertex2f(-0.15,-0.4);
    glVertex2f(-0.16,-0.45);
    glVertex2f(-0.1,-0.4);
    glVertex2f(-0.11,-0.45);
    glVertex2f(-0.05,-0.4);
    glVertex2f(-0.06,-0.45);
    glVertex2f(0.0,-0.4);
    glVertex2f(-0.01,-0.45);
    glVertex2f(0.95,-0.4);
    glVertex2f(0.94,-0.45);
    glVertex2f(0.9,-0.4);
    glVertex2f(0.89,-0.45);
    glVertex2f(0.85,-0.4);
    glVertex2f(0.84,-0.45);
    glVertex2f(0.8,-0.4);
    glVertex2f(0.79,-0.45);
    glVertex2f(0.75,-0.4);
    glVertex2f(0.74,-0.45);
    glVertex2f(0.7,-0.4);
    glVertex2f(0.69,-0.45);
    glVertex2f(0.65,-0.4);
    glVertex2f(0.64,-0.45);
    glVertex2f(0.6,-0.4);
    glVertex2f(0.59,-0.45);
    glVertex2f(0.55,-0.4);
    glVertex2f(0.54,-0.45);
    glVertex2f(0.5,-0.4);
    glVertex2f(0.49,-0.45);
    glVertex2f(0.45,-0.4);
    glVertex2f(0.44,-0.45);
    glVertex2f(0.4,-0.4);
    glVertex2f(0.39,-0.45);
    glVertex2f(0.35,-0.4);
    glVertex2f(0.34,-0.45);
    glVertex2f(0.3,-0.4);
    glVertex2f(0.29,-0.45);
    glVertex2f(0.25,-0.4);
    glVertex2f(0.24,-0.45);
    glVertex2f(0.2,-0.4);
    glVertex2f(0.19,-0.45);
    glVertex2f(0.15,-0.4);
    glVertex2f(0.14,-0.45);
    glVertex2f(0.1,-0.4);
    glVertex2f(0.09,-0.45);
    glVertex2f(0.05,-0.4);
    glVertex2f(0.04,-0.45);

    glVertex2f(-0.95,-0.5);
    glVertex2f(-0.96,-0.55);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.91,-0.55);
    glVertex2f(-0.85,-0.5);
    glVertex2f(-0.86,-0.55);
    glVertex2f(-0.8,-0.5);
    glVertex2f(-0.81,-0.55);
    glVertex2f(-0.75,-0.5);
    glVertex2f(-0.76,-0.55);
    glVertex2f(-0.7,-0.5);
    glVertex2f(-0.71,-0.55);
    glVertex2f(-0.65,-0.5);
    glVertex2f(-0.66,-0.55);
    glVertex2f(-0.6,-0.5);
    glVertex2f(-0.61,-0.55);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.56,-0.55);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.51,-0.55);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.46,-0.55);
    glVertex2f(-0.4,-0.5);
    glVertex2f(-0.41,-0.55);
    glVertex2f(-0.35,-0.5);
    glVertex2f(-0.36,-0.55);
    glVertex2f(-0.3,-0.5);
    glVertex2f(-0.31,-0.55);
    glVertex2f(-0.25,-0.5);
    glVertex2f(-0.26,-0.55);
    glVertex2f(-0.2,-0.5);
    glVertex2f(-0.21,-0.55);
    glVertex2f(-0.15,-0.5);
    glVertex2f(-0.16,-0.55);
    glVertex2f(-0.1,-0.5);
    glVertex2f(-0.11,-0.55);
    glVertex2f(-0.05,-0.5);
    glVertex2f(-0.06,-0.55);
    glVertex2f(0.0,-0.5);
    glVertex2f(-0.01,-0.55);
    glVertex2f(0.95,-0.5);
    glVertex2f(0.94,-0.55);
    glVertex2f(0.9,-0.5);
    glVertex2f(0.89,-0.55);
    glVertex2f(0.85,-0.5);
    glVertex2f(0.84,-0.55);
    glVertex2f(0.8,-0.5);
    glVertex2f(0.79,-0.55);
    glVertex2f(0.75,-0.5);
    glVertex2f(0.74,-0.55);
    glVertex2f(0.7,-0.5);
    glVertex2f(0.69,-0.55);
    glVertex2f(0.65,-0.5);
    glVertex2f(0.64,-0.55);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.59,-0.55);
    glVertex2f(0.55,-0.5);
    glVertex2f(0.54,-0.55);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.49,-0.55);
    glVertex2f(0.45,-0.5);
    glVertex2f(0.44,-0.55);
    glVertex2f(0.4,-0.5);
    glVertex2f(0.39,-0.55);
    glVertex2f(0.35,-0.5);
    glVertex2f(0.34,-0.55);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.29,-0.55);
    glVertex2f(0.25,-0.5);
    glVertex2f(0.24,-0.55);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.19,-0.55);
    glVertex2f(0.15,-0.5);
    glVertex2f(0.14,-0.55);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.09,-0.55);
    glVertex2f(0.05,-0.5);
    glVertex2f(0.04,-0.55);

    glVertex2f(-0.95,-0.6);
    glVertex2f(-0.96,-0.65);
    glVertex2f(-0.9,-0.6);
    glVertex2f(-0.91,-0.65);
    glVertex2f(-0.85,-0.6);
    glVertex2f(-0.86,-0.65);
    glVertex2f(-0.8,-0.6);
    glVertex2f(-0.81,-0.65);
    glVertex2f(-0.75,-0.6);
    glVertex2f(-0.76,-0.65);
    glVertex2f(-0.7,-0.6);
    glVertex2f(-0.71,-0.65);
    glVertex2f(-0.65,-0.6);
    glVertex2f(-0.66,-0.65);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.61,-0.65);
    glVertex2f(-0.55,-0.6);
    glVertex2f(-0.56,-0.65);
    glVertex2f(-0.5,-0.6);
    glVertex2f(-0.51,-0.65);
    glVertex2f(-0.45,-0.6);
    glVertex2f(-0.46,-0.65);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.41,-0.65);
    glVertex2f(-0.35,-0.6);
    glVertex2f(-0.36,-0.65);
    glVertex2f(-0.3,-0.6);
    glVertex2f(-0.31,-0.65);
    glVertex2f(-0.25,-0.6);
    glVertex2f(-0.26,-0.65);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.21,-0.65);
    glVertex2f(-0.15,-0.6);
    glVertex2f(-0.16,-0.65);
    glVertex2f(-0.1,-0.6);
    glVertex2f(-0.11,-0.65);
    glVertex2f(-0.05,-0.6);
    glVertex2f(-0.06,-0.65);
    glVertex2f(0.0,-0.6);
    glVertex2f(-0.01,-0.65);
    glVertex2f(0.95,-0.6);
    glVertex2f(0.94,-0.65);
    glVertex2f(0.9,-0.6);
    glVertex2f(0.89,-0.65);
    glVertex2f(0.85,-0.6);
    glVertex2f(0.84,-0.65);
    glVertex2f(0.8,-0.6);
    glVertex2f(0.79,-0.65);
    glVertex2f(0.75,-0.6);
    glVertex2f(0.74,-0.65);
    glVertex2f(0.7,-0.6);
    glVertex2f(0.69,-0.65);
    glVertex2f(0.65,-0.6);
    glVertex2f(0.64,-0.65);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.59,-0.65);
    glVertex2f(0.55,-0.6);
    glVertex2f(0.54,-0.65);
    glVertex2f(0.5,-0.6);
    glVertex2f(0.49,-0.65);
    glVertex2f(0.45,-0.6);
    glVertex2f(0.44,-0.65);
    glVertex2f(0.4,-0.6);
    glVertex2f(0.39,-0.65);
    glVertex2f(0.35,-0.6);
    glVertex2f(0.34,-0.65);
    glVertex2f(0.3,-0.6);
    glVertex2f(0.29,-0.65);
    glVertex2f(0.25,-0.6);
    glVertex2f(0.24,-0.65);
    glVertex2f(0.2,-0.6);
    glVertex2f(0.19,-0.65);
    glVertex2f(0.15,-0.6);
    glVertex2f(0.14,-0.65);
    glVertex2f(0.1,-0.6);
    glVertex2f(0.09,-0.65);
    glVertex2f(0.05,-0.6);
    glVertex2f(0.04,-0.65);

    glVertex2f(-0.95,-0.7);
    glVertex2f(-0.96,-0.75);
    glVertex2f(-0.9,-0.7);
    glVertex2f(-0.91,-0.75);
    glVertex2f(-0.85,-0.7);
    glVertex2f(-0.86,-0.75);
    glVertex2f(-0.8,-0.7);
    glVertex2f(-0.81,-0.75);
    glVertex2f(-0.75,-0.7);
    glVertex2f(-0.76,-0.75);
    glVertex2f(-0.7,-0.7);
    glVertex2f(-0.71,-0.75);
    glVertex2f(-0.65,-0.7);
    glVertex2f(-0.66,-0.75);
    glVertex2f(-0.6,-0.7);
    glVertex2f(-0.61,-0.75);
    glVertex2f(-0.55,-0.7);
    glVertex2f(-0.56,-0.75);
    glVertex2f(-0.5,-0.7);
    glVertex2f(-0.51,-0.75);
    glVertex2f(-0.45,-0.7);
    glVertex2f(-0.46,-0.75);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.41,-0.75);
    glVertex2f(-0.35,-0.7);
    glVertex2f(-0.36,-0.75);
    glVertex2f(-0.3,-0.7);
    glVertex2f(-0.31,-0.75);
    glVertex2f(-0.25,-0.7);
    glVertex2f(-0.26,-0.75);
    glVertex2f(-0.2,-0.7);
    glVertex2f(-0.21,-0.75);
    glVertex2f(-0.15,-0.7);
    glVertex2f(-0.16,-0.75);
    glVertex2f(-0.1,-0.7);
    glVertex2f(-0.11,-0.75);
    glVertex2f(-0.05,-0.7);
    glVertex2f(-0.06,-0.75);
    glVertex2f(0.0,-0.7);
    glVertex2f(-0.01,-0.75);
    glVertex2f(0.95,-0.7);
    glVertex2f(0.94,-0.75);
    glVertex2f(0.9,-0.7);
    glVertex2f(0.89,-0.75);
    glVertex2f(0.85,-0.7);
    glVertex2f(0.84,-0.75);
    glVertex2f(0.8,-0.7);
    glVertex2f(0.79,-0.75);
    glVertex2f(0.75,-0.7);
    glVertex2f(0.74,-0.75);
    glVertex2f(0.7,-0.7);
    glVertex2f(0.69,-0.75);
    glVertex2f(0.65,-0.7);
    glVertex2f(0.64,-0.75);
    glVertex2f(0.6,-0.7);
    glVertex2f(0.59,-0.75);
    glVertex2f(0.55,-0.7);
    glVertex2f(0.54,-0.75);
    glVertex2f(0.5,-0.7);
    glVertex2f(0.49,-0.75);
    glVertex2f(0.45,-0.7);
    glVertex2f(0.44,-0.75);
    glVertex2f(0.4,-0.7);
    glVertex2f(0.39,-0.75);
    glVertex2f(0.35,-0.7);
    glVertex2f(0.34,-0.75);
    glVertex2f(0.3,-0.7);
    glVertex2f(0.29,-0.75);
    glVertex2f(0.25,-0.7);
    glVertex2f(0.24,-0.75);
    glVertex2f(0.2,-0.7);
    glVertex2f(0.19,-0.75);
    glVertex2f(0.15,-0.7);
    glVertex2f(0.14,-0.75);
    glVertex2f(0.1,-0.7);
    glVertex2f(0.09,-0.75);
    glVertex2f(0.05,-0.7);
    glVertex2f(0.04,-0.75);

    glVertex2f(-0.95,-0.8);
    glVertex2f(-0.96,-0.85);
    glVertex2f(-0.9,-0.8);
    glVertex2f(-0.91,-0.85);
    glVertex2f(-0.85,-0.8);
    glVertex2f(-0.86,-0.85);
    glVertex2f(-0.8,-0.8);
    glVertex2f(-0.81,-0.85);
    glVertex2f(-0.75,-0.8);
    glVertex2f(-0.76,-0.85);
    glVertex2f(-0.7,-0.8);
    glVertex2f(-0.71,-0.85);
    glVertex2f(-0.65,-0.8);
    glVertex2f(-0.66,-0.85);
    glVertex2f(-0.6,-0.8);
    glVertex2f(-0.61,-0.85);
    glVertex2f(-0.55,-0.8);
    glVertex2f(-0.56,-0.85);
    glVertex2f(-0.5,-0.8);
    glVertex2f(-0.51,-0.85);
    glVertex2f(-0.45,-0.8);
    glVertex2f(-0.46,-0.85);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.41,-0.85);
    glVertex2f(-0.35,-0.8);
    glVertex2f(-0.36,-0.85);
    glVertex2f(-0.3,-0.8);
    glVertex2f(-0.31,-0.85);
    glVertex2f(-0.25,-0.8);
    glVertex2f(-0.26,-0.85);
    glVertex2f(-0.2,-0.8);
    glVertex2f(-0.21,-0.85);
    glVertex2f(-0.15,-0.8);
    glVertex2f(-0.16,-0.85);
    glVertex2f(-0.1,-0.8);
    glVertex2f(-0.11,-0.85);
    glVertex2f(-0.05,-0.8);
    glVertex2f(-0.06,-0.85);
    glVertex2f(0.0,-0.8);
    glVertex2f(-0.01,-0.85);
    glVertex2f(0.95,-0.8);
    glVertex2f(0.94,-0.85);
    glVertex2f(0.9,-0.8);
    glVertex2f(0.89,-0.85);
    glVertex2f(0.85,-0.8);
    glVertex2f(0.84,-0.85);
    glVertex2f(0.8,-0.8);
    glVertex2f(0.79,-0.85);
    glVertex2f(0.75,-0.8);
    glVertex2f(0.74,-0.85);
    glVertex2f(0.7,-0.8);
    glVertex2f(0.69,-0.85);
    glVertex2f(0.65,-0.8);
    glVertex2f(0.64,-0.85);
    glVertex2f(0.6,-0.8);
    glVertex2f(0.59,-0.85);
    glVertex2f(0.55,-0.8);
    glVertex2f(0.54,-0.85);
    glVertex2f(0.5,-0.8);
    glVertex2f(0.49,-0.85);
    glVertex2f(0.45,-0.8);
    glVertex2f(0.44,-0.85);
    glVertex2f(0.4,-0.8);
    glVertex2f(0.39,-0.85);
    glVertex2f(0.35,-0.8);
    glVertex2f(0.34,-0.85);
    glVertex2f(0.3,-0.8);
    glVertex2f(0.29,-0.85);
    glVertex2f(0.25,-0.8);
    glVertex2f(0.24,-0.85);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.19,-0.85);
    glVertex2f(0.15,-0.8);
    glVertex2f(0.14,-0.85);
    glVertex2f(0.1,-0.8);
    glVertex2f(0.09,-0.85);
    glVertex2f(0.05,-0.8);
    glVertex2f(0.04,-0.85);

    glVertex2f(-0.95,-0.9);
    glVertex2f(-0.96,-0.95);
    glVertex2f(-0.9,-0.9);
    glVertex2f(-0.91,-0.95);
    glVertex2f(-0.85,-0.9);
    glVertex2f(-0.86,-0.95);
    glVertex2f(-0.8,-0.9);
    glVertex2f(-0.81,-0.95);
    glVertex2f(-0.75,-0.9);
    glVertex2f(-0.76,-0.95);
    glVertex2f(-0.7,-0.9);
    glVertex2f(-0.71,-0.95);
    glVertex2f(-0.65,-0.9);
    glVertex2f(-0.66,-0.95);
    glVertex2f(-0.6,-0.9);
    glVertex2f(-0.61,-0.95);
    glVertex2f(-0.55,-0.9);
    glVertex2f(-0.56,-0.95);
    glVertex2f(-0.5,-0.9);
    glVertex2f(-0.51,-0.95);
    glVertex2f(-0.45,-0.9);
    glVertex2f(-0.46,-0.95);
    glVertex2f(-0.4,-0.9);
    glVertex2f(-0.41,-0.95);
    glVertex2f(-0.35,-0.9);
    glVertex2f(-0.36,-0.95);
    glVertex2f(-0.3,-0.9);
    glVertex2f(-0.31,-0.95);
    glVertex2f(-0.25,-0.9);
    glVertex2f(-0.26,-0.95);
    glVertex2f(-0.2,-0.9);
    glVertex2f(-0.21,-0.95);
    glVertex2f(-0.15,-0.9);
    glVertex2f(-0.16,-0.95);
    glVertex2f(-0.1,-0.9);
    glVertex2f(-0.11,-0.95);
    glVertex2f(-0.05,-0.9);
    glVertex2f(-0.06,-0.95);
    glVertex2f(0.0,-0.9);
    glVertex2f(-0.01,-0.95);
    glVertex2f(0.95,-0.9);
    glVertex2f(0.94,-0.95);
    glVertex2f(0.9,-0.9);
    glVertex2f(0.89,-0.95);
    glVertex2f(0.85,-0.9);
    glVertex2f(0.84,-0.95);
    glVertex2f(0.8,-0.9);
    glVertex2f(0.79,-0.95);
    glVertex2f(0.75,-0.9);
    glVertex2f(0.74,-0.95);
    glVertex2f(0.7,-0.9);
    glVertex2f(0.69,-0.95);
    glVertex2f(0.65,-0.9);
    glVertex2f(0.64,-0.95);
    glVertex2f(0.6,-0.9);
    glVertex2f(0.59,-0.95);
    glVertex2f(0.55,-0.9);
    glVertex2f(0.54,-0.95);
    glVertex2f(0.5,-0.9);
    glVertex2f(0.49,-0.95);
    glVertex2f(0.45,-0.9);
    glVertex2f(0.44,-0.95);
    glVertex2f(0.4,-0.9);
    glVertex2f(0.39,-0.95);
    glVertex2f(0.35,-0.9);
    glVertex2f(0.34,-0.95);
    glVertex2f(0.3,-0.9);
    glVertex2f(0.29,-0.95);
    glVertex2f(0.25,-0.9);
    glVertex2f(0.24,-0.95);
    glVertex2f(0.2,-0.9);
    glVertex2f(0.19,-0.95);
    glVertex2f(0.15,-0.9);
    glVertex2f(0.14,-0.95);
    glVertex2f(0.1,-0.9);
    glVertex2f(0.09,-0.95);
    glVertex2f(0.05,-0.9);
    glVertex2f(0.04,-0.95);

    glVertex2f(-0.95,-1.0);
    glVertex2f(-0.96,-1.05);
    glVertex2f(-0.9,-1.0);
    glVertex2f(-0.91,-1.05);
    glVertex2f(-0.85,-1.0);
    glVertex2f(-0.86,-1.05);
    glVertex2f(-0.8,-1.0);
    glVertex2f(-0.81,-1.05);
    glVertex2f(-0.75,-1.0);
    glVertex2f(-0.76,-1.05);
    glVertex2f(-0.7,-1.0);
    glVertex2f(-0.71,-1.05);
    glVertex2f(-0.65,-1.0);
    glVertex2f(-0.66,-1.05);
    glVertex2f(-0.6,-1.0);
    glVertex2f(-0.61,-1.05);
    glVertex2f(-0.55,-1.0);
    glVertex2f(-0.56,-1.05);
    glVertex2f(-0.5,-1.0);
    glVertex2f(-0.51,-1.05);
    glVertex2f(-0.45,-1.0);
    glVertex2f(-0.46,-1.05);
    glVertex2f(-0.4,-1.0);
    glVertex2f(-0.41,-1.05);
    glVertex2f(-0.35,-1.0);
    glVertex2f(-0.36,-1.05);
    glVertex2f(-0.3,-1.0);
    glVertex2f(-0.31,-1.05);
    glVertex2f(-0.25,-1.0);
    glVertex2f(-0.26,-1.05);
    glVertex2f(-0.2,-1.0);
    glVertex2f(-0.21,-1.05);
    glVertex2f(-0.15,-1.0);
    glVertex2f(-0.16,-1.05);
    glVertex2f(-0.1,-1.0);
    glVertex2f(-0.11,-1.05);
    glVertex2f(-0.05,-1.0);
    glVertex2f(-0.06,-1.05);
    glVertex2f(0.0,-1.0);
    glVertex2f(-0.01,-1.05);
    glVertex2f(0.95,-1.0);
    glVertex2f(0.94,-1.05);
    glVertex2f(0.9,-1.0);
    glVertex2f(0.89,-1.05);
    glVertex2f(0.85,-1.0);
    glVertex2f(0.84,-1.05);
    glVertex2f(0.8,-1.0);
    glVertex2f(0.79,-1.05);
    glVertex2f(0.75,-1.0);
    glVertex2f(0.74,-1.05);
    glVertex2f(0.7,-1.0);
    glVertex2f(0.69,-1.05);
    glVertex2f(0.65,-1.0);
    glVertex2f(0.64,-1.05);
    glVertex2f(0.6,-1.0);
    glVertex2f(0.59,-1.05);
    glVertex2f(0.55,-1.0);
    glVertex2f(0.54,-1.05);
    glVertex2f(0.5,-1.0);
    glVertex2f(0.49,-1.05);
    glVertex2f(0.45,-1.0);
    glVertex2f(0.44,-1.05);
    glVertex2f(0.4,-1.0);
    glVertex2f(0.39,-1.05);
    glVertex2f(0.35,-1.0);
    glVertex2f(0.34,-1.05);
    glVertex2f(0.3,-1.0);
    glVertex2f(0.29,-1.05);
    glVertex2f(0.25,-1.0);
    glVertex2f(0.24,-1.05);
    glVertex2f(0.2,-1.0);
    glVertex2f(0.19,-1.05);
    glVertex2f(0.15,-1.0);
    glVertex2f(0.14,-1.05);
    glVertex2f(0.1,-1.0);
    glVertex2f(0.09,-1.05);
    glVertex2f(0.05,-1.0);
    glVertex2f(0.04,-1.05);

    glVertex2f(-0.95,-1.1);
    glVertex2f(-0.96,-1.15);
    glVertex2f(-0.9,-1.1);
    glVertex2f(-0.91,-1.15);
    glVertex2f(-0.85,-1.1);
    glVertex2f(-0.86,-1.15);
    glVertex2f(-0.8,-1.1);
    glVertex2f(-0.81,-1.15);
    glVertex2f(-0.75,-1.1);
    glVertex2f(-0.76,-1.15);
    glVertex2f(-0.7,-1.1);
    glVertex2f(-0.71,-1.15);
    glVertex2f(-0.65,-1.1);
    glVertex2f(-0.66,-1.15);
    glVertex2f(-0.6,-1.1);
    glVertex2f(-0.61,-1.15);
    glVertex2f(-0.55,-1.1);
    glVertex2f(-0.56,-1.15);
    glVertex2f(-0.5,-1.1);
    glVertex2f(-0.51,-1.15);
    glVertex2f(-0.45,-1.1);
    glVertex2f(-0.46,-1.15);
    glVertex2f(-0.4,-1.1);
    glVertex2f(-0.41,-1.15);
    glVertex2f(-0.35,-1.1);
    glVertex2f(-0.36,-1.15);
    glVertex2f(-0.3,-1.1);
    glVertex2f(-0.31,-1.15);
    glVertex2f(-0.25,-1.1);
    glVertex2f(-0.26,-1.15);
    glVertex2f(-0.2,-1.1);
    glVertex2f(-0.21,-1.15);
    glVertex2f(-0.15,-1.1);
    glVertex2f(-0.16,-1.15);
    glVertex2f(-0.1,-1.1);
    glVertex2f(-0.11,-1.15);
    glVertex2f(-0.05,-1.1);
    glVertex2f(-0.06,-1.15);
    glVertex2f(0.0,-1.1);
    glVertex2f(-0.01,-1.15);
    glVertex2f(0.95,-1.1);
    glVertex2f(0.94,-1.15);
    glVertex2f(0.9,-1.1);
    glVertex2f(0.89,-1.15);
    glVertex2f(0.85,-1.1);
    glVertex2f(0.84,-1.15);
    glVertex2f(0.8,-1.1);
    glVertex2f(0.79,-1.15);
    glVertex2f(0.75,-1.1);
    glVertex2f(0.74,-1.15);
    glVertex2f(0.7,-1.1);
    glVertex2f(0.69,-1.15);
    glVertex2f(0.65,-1.1);
    glVertex2f(0.64,-1.15);
    glVertex2f(0.6,-1.1);
    glVertex2f(0.59,-1.15);
    glVertex2f(0.55,-1.1);
    glVertex2f(0.54,-1.15);
    glVertex2f(0.5,-1.1);
    glVertex2f(0.49,-1.15);
    glVertex2f(0.45,-1.1);
    glVertex2f(0.44,-1.15);
    glVertex2f(0.4,-1.1);
    glVertex2f(0.39,-1.15);
    glVertex2f(0.35,-1.1);
    glVertex2f(0.34,-1.15);
    glVertex2f(0.3,-1.1);
    glVertex2f(0.29,-1.15);
    glVertex2f(0.25,-1.1);
    glVertex2f(0.24,-1.15);
    glVertex2f(0.2,-1.1);
    glVertex2f(0.19,-1.15);
    glVertex2f(0.15,-1.1);
    glVertex2f(0.14,-1.15);
    glVertex2f(0.1,-1.1);
    glVertex2f(0.09,-1.15);
    glVertex2f(0.05,-1.1);
    glVertex2f(0.04,-1.15);

    glVertex2f(-0.95,-1.2);
    glVertex2f(-0.96,-1.25);
    glVertex2f(-0.9,-1.2);
    glVertex2f(-0.91,-1.25);
    glVertex2f(-0.85,-1.2);
    glVertex2f(-0.86,-1.25);
    glVertex2f(-0.8,-1.2);
    glVertex2f(-0.81,-1.25);
    glVertex2f(-0.75,-1.2);
    glVertex2f(-0.76,-1.25);
    glVertex2f(-0.7,-1.2);
    glVertex2f(-0.71,-1.25);
    glVertex2f(-0.65,-1.2);
    glVertex2f(-0.66,-1.25);
    glVertex2f(-0.6,-1.2);
    glVertex2f(-0.61,-1.25);
    glVertex2f(-0.55,-1.2);
    glVertex2f(-0.56,-1.25);
    glVertex2f(-0.5,-1.2);
    glVertex2f(-0.51,-1.25);
    glVertex2f(-0.45,-1.2);
    glVertex2f(-0.46,-1.25);
    glVertex2f(-0.4,-1.2);
    glVertex2f(-0.41,-1.25);
    glVertex2f(-0.35,-1.2);
    glVertex2f(-0.36,-1.25);
    glVertex2f(-0.3,-1.2);
    glVertex2f(-0.31,-1.25);
    glVertex2f(-0.25,-1.2);
    glVertex2f(-0.26,-1.25);
    glVertex2f(-0.2,-1.2);
    glVertex2f(-0.21,-1.25);
    glVertex2f(-0.15,-1.2);
    glVertex2f(-0.16,-1.25);
    glVertex2f(-0.1,-1.2);
    glVertex2f(-0.11,-1.25);
    glVertex2f(-0.05,-1.2);
    glVertex2f(-0.06,-1.25);
    glVertex2f(0.0,-1.2);
    glVertex2f(-0.01,-1.25);
    glVertex2f(0.95,-1.2);
    glVertex2f(0.94,-1.25);
    glVertex2f(0.9,-1.2);
    glVertex2f(0.89,-1.25);
    glVertex2f(0.85,-1.2);
    glVertex2f(0.84,-1.25);
    glVertex2f(0.8,-1.2);
    glVertex2f(0.79,-1.25);
    glVertex2f(0.75,-1.2);
    glVertex2f(0.74,-1.25);
    glVertex2f(0.7,-1.2);
    glVertex2f(0.69,-1.25);
    glVertex2f(0.65,-1.2);
    glVertex2f(0.64,-1.25);
    glVertex2f(0.6,-1.2);
    glVertex2f(0.59,-1.25);
    glVertex2f(0.55,-1.2);
    glVertex2f(0.54,-1.25);
    glVertex2f(0.5,-1.2);
    glVertex2f(0.49,-1.25);
    glVertex2f(0.45,-1.2);
    glVertex2f(0.44,-1.25);
    glVertex2f(0.4,-1.2);
    glVertex2f(0.39,-1.25);
    glVertex2f(0.35,-1.2);
    glVertex2f(0.34,-1.25);
    glVertex2f(0.3,-1.2);
    glVertex2f(0.29,-1.25);
    glVertex2f(0.25,-1.2);
    glVertex2f(0.24,-1.25);
    glVertex2f(0.2,-1.2);
    glVertex2f(0.19,-1.25);
    glVertex2f(0.15,-1.2);
    glVertex2f(0.14,-1.25);
    glVertex2f(0.1,-1.2);
    glVertex2f(0.09,-1.25);
    glVertex2f(0.05,-1.2);
    glVertex2f(0.04,-1.25);

    glVertex2f(-0.95,-1.3);
    glVertex2f(-0.96,-1.35);
    glVertex2f(-0.9,-1.3);
    glVertex2f(-0.91,-1.35);
    glVertex2f(-0.85,-1.3);
    glVertex2f(-0.86,-1.35);
    glVertex2f(-0.8,-1.3);
    glVertex2f(-0.81,-1.35);
    glVertex2f(-0.75,-1.3);
    glVertex2f(-0.76,-1.35);
    glVertex2f(-0.7,-1.3);
    glVertex2f(-0.71,-1.35);
    glVertex2f(-0.65,-1.3);
    glVertex2f(-0.66,-1.35);
    glVertex2f(-0.6,-1.3);
    glVertex2f(-0.61,-1.35);
    glVertex2f(-0.55,-1.3);
    glVertex2f(-0.56,-1.35);
    glVertex2f(-0.5,-1.3);
    glVertex2f(-0.51,-1.35);
    glVertex2f(-0.45,-1.3);
    glVertex2f(-0.46,-1.35);
    glVertex2f(-0.4,-1.3);
    glVertex2f(-0.41,-1.35);
    glVertex2f(-0.35,-1.3);
    glVertex2f(-0.36,-1.35);
    glVertex2f(-0.3,-1.3);
    glVertex2f(-0.31,-1.35);
    glVertex2f(-0.25,-1.3);
    glVertex2f(-0.26,-1.35);
    glVertex2f(-0.2,-1.3);
    glVertex2f(-0.21,-1.35);
    glVertex2f(-0.15,-1.3);
    glVertex2f(-0.16,-1.35);
    glVertex2f(-0.1,-1.3);
    glVertex2f(-0.11,-1.35);
    glVertex2f(-0.05,-1.3);
    glVertex2f(-0.06,-1.35);
    glVertex2f(0.0,-1.3);
    glVertex2f(-0.01,-1.35);
    glVertex2f(0.95,-1.3);
    glVertex2f(0.94,-1.35);
    glVertex2f(0.9,-1.3);
    glVertex2f(0.89,-1.35);
    glVertex2f(0.85,-1.3);
    glVertex2f(0.84,-1.35);
    glVertex2f(0.8,-1.3);
    glVertex2f(0.79,-1.35);
    glVertex2f(0.75,-1.3);
    glVertex2f(0.74,-1.35);
    glVertex2f(0.7,-1.3);
    glVertex2f(0.69,-1.35);
    glVertex2f(0.65,-1.3);
    glVertex2f(0.64,-1.35);
    glVertex2f(0.6,-1.3);
    glVertex2f(0.59,-1.35);
    glVertex2f(0.55,-1.3);
    glVertex2f(0.54,-1.35);
    glVertex2f(0.5,-1.3);
    glVertex2f(0.49,-1.35);
    glVertex2f(0.45,-1.3);
    glVertex2f(0.44,-1.35);
    glVertex2f(0.4,-1.3);
    glVertex2f(0.39,-1.35);
    glVertex2f(0.35,-1.3);
    glVertex2f(0.34,-1.35);
    glVertex2f(0.3,-1.3);
    glVertex2f(0.29,-1.35);
    glVertex2f(0.25,-1.3);
    glVertex2f(0.24,-1.35);
    glVertex2f(0.2,-1.3);
    glVertex2f(0.19,-1.35);
    glVertex2f(0.15,-1.3);
    glVertex2f(0.14,-1.35);
    glVertex2f(0.1,-1.3);
    glVertex2f(0.09,-1.35);
    glVertex2f(0.05,-1.3);
    glVertex2f(0.04,-1.35);

    glVertex2f(-0.95,-1.4);
    glVertex2f(-0.96,-1.45);
    glVertex2f(-0.9,-1.4);
    glVertex2f(-0.91,-1.45);
    glVertex2f(-0.85,-1.4);
    glVertex2f(-0.86,-1.45);
    glVertex2f(-0.8,-1.4);
    glVertex2f(-0.81,-1.45);
    glVertex2f(-0.75,-1.4);
    glVertex2f(-0.76,-1.45);
    glVertex2f(-0.7,-1.4);
    glVertex2f(-0.71,-1.45);
    glVertex2f(-0.65,-1.4);
    glVertex2f(-0.66,-1.45);
    glVertex2f(-0.6,-1.4);
    glVertex2f(-0.61,-1.45);
    glVertex2f(-0.55,-1.4);
    glVertex2f(-0.56,-1.45);
    glVertex2f(-0.5,-1.4);
    glVertex2f(-0.51,-1.45);
    glVertex2f(-0.45,-1.4);
    glVertex2f(-0.46,-1.45);
    glVertex2f(-0.4,-1.4);
    glVertex2f(-0.41,-1.45);
    glVertex2f(-0.35,-1.4);
    glVertex2f(-0.36,-1.45);
    glVertex2f(-0.3,-1.4);
    glVertex2f(-0.31,-1.45);
    glVertex2f(-0.25,-1.4);
    glVertex2f(-0.26,-1.45);
    glVertex2f(-0.2,-1.4);
    glVertex2f(-0.21,-1.45);
    glVertex2f(-0.15,-1.4);
    glVertex2f(-0.16,-1.45);
    glVertex2f(-0.1,-1.4);
    glVertex2f(-0.11,-1.45);
    glVertex2f(-0.05,-1.4);
    glVertex2f(-0.06,-1.45);
    glVertex2f(0.0,-1.4);
    glVertex2f(-0.01,-1.45);
    glVertex2f(0.95,-1.4);
    glVertex2f(0.94,-1.45);
    glVertex2f(0.9,-1.4);
    glVertex2f(0.89,-1.45);
    glVertex2f(0.85,-1.4);
    glVertex2f(0.84,-1.45);
    glVertex2f(0.8,-1.4);
    glVertex2f(0.79,-1.45);
    glVertex2f(0.75,-1.4);
    glVertex2f(0.74,-1.45);
    glVertex2f(0.7,-1.4);
    glVertex2f(0.69,-1.45);
    glVertex2f(0.65,-1.4);
    glVertex2f(0.64,-1.45);
    glVertex2f(0.6,-1.4);
    glVertex2f(0.59,-1.45);
    glVertex2f(0.55,-1.4);
    glVertex2f(0.54,-1.45);
    glVertex2f(0.5,-1.4);
    glVertex2f(0.49,-1.45);
    glVertex2f(0.45,-1.4);
    glVertex2f(0.44,-1.45);
    glVertex2f(0.4,-1.4);
    glVertex2f(0.39,-1.45);
    glVertex2f(0.35,-1.4);
    glVertex2f(0.34,-1.45);
    glVertex2f(0.3,-1.4);
    glVertex2f(0.29,-1.45);
    glVertex2f(0.25,-1.4);
    glVertex2f(0.24,-1.45);
    glVertex2f(0.2,-1.4);
    glVertex2f(0.19,-1.45);
    glVertex2f(0.15,-1.4);
    glVertex2f(0.14,-1.45);
    glVertex2f(0.1,-1.4);
    glVertex2f(0.09,-1.45);
    glVertex2f(0.05,-1.4);
    glVertex2f(0.04,-1.45);

    glVertex2f(-0.95,-1.5);
    glVertex2f(-0.96,-1.55);
    glVertex2f(-0.9,-1.5);
    glVertex2f(-0.91,-1.55);
    glVertex2f(-0.85,-1.5);
    glVertex2f(-0.86,-1.55);
    glVertex2f(-0.8,-1.5);
    glVertex2f(-0.81,-1.55);
    glVertex2f(-0.75,-1.5);
    glVertex2f(-0.76,-1.55);
    glVertex2f(-0.7,-1.5);
    glVertex2f(-0.71,-1.55);
    glVertex2f(-0.65,-1.5);
    glVertex2f(-0.66,-1.55);
    glVertex2f(-0.6,-1.5);
    glVertex2f(-0.61,-1.55);
    glVertex2f(-0.55,-1.5);
    glVertex2f(-0.56,-1.55);
    glVertex2f(-0.5,-1.5);
    glVertex2f(-0.51,-1.55);
    glVertex2f(-0.45,-1.5);
    glVertex2f(-0.46,-1.55);
    glVertex2f(-0.4,-1.5);
    glVertex2f(-0.41,-1.55);
    glVertex2f(-0.35,-1.5);
    glVertex2f(-0.36,-1.55);
    glVertex2f(-0.3,-1.5);
    glVertex2f(-0.31,-1.55);
    glVertex2f(-0.25,-1.5);
    glVertex2f(-0.26,-1.55);
    glVertex2f(-0.2,-1.5);
    glVertex2f(-0.21,-1.55);
    glVertex2f(-0.15,-1.5);
    glVertex2f(-0.16,-1.55);
    glVertex2f(-0.1,-1.5);
    glVertex2f(-0.11,-1.55);
    glVertex2f(-0.05,-1.5);
    glVertex2f(-0.06,-1.55);
    glVertex2f(0.0,-1.5);
    glVertex2f(-0.01,-1.55);
    glVertex2f(0.95,-1.5);
    glVertex2f(0.94,-1.55);
    glVertex2f(0.9,-1.5);
    glVertex2f(0.89,-1.55);
    glVertex2f(0.85,-1.5);
    glVertex2f(0.84,-1.55);
    glVertex2f(0.8,-1.5);
    glVertex2f(0.79,-1.55);
    glVertex2f(0.75,-1.5);
    glVertex2f(0.74,-1.55);
    glVertex2f(0.7,-1.5);
    glVertex2f(0.69,-1.55);
    glVertex2f(0.65,-1.5);
    glVertex2f(0.64,-1.55);
    glVertex2f(0.6,-1.5);
    glVertex2f(0.59,-1.55);
    glVertex2f(0.55,-1.5);
    glVertex2f(0.54,-1.55);
    glVertex2f(0.5,-1.5);
    glVertex2f(0.49,-1.55);
    glVertex2f(0.45,-1.5);
    glVertex2f(0.44,-1.55);
    glVertex2f(0.4,-1.5);
    glVertex2f(0.39,-1.55);
    glVertex2f(0.35,-1.5);
    glVertex2f(0.34,-1.55);
    glVertex2f(0.3,-1.5);
    glVertex2f(0.29,-1.55);
    glVertex2f(0.25,-1.5);
    glVertex2f(0.24,-1.55);
    glVertex2f(0.2,-1.5);
    glVertex2f(0.19,-1.55);
    glVertex2f(0.15,-1.5);
    glVertex2f(0.14,-1.55);
    glVertex2f(0.1,-1.5);
    glVertex2f(0.09,-1.55);
    glVertex2f(0.05,-1.5);
    glVertex2f(0.04,-1.55);

    glVertex2f(-0.95,-1.6);
    glVertex2f(-0.96,-1.65);
    glVertex2f(-0.9,-1.6);
    glVertex2f(-0.91,-1.65);
    glVertex2f(-0.85,-1.6);
    glVertex2f(-0.86,-1.65);
    glVertex2f(-0.8,-1.6);
    glVertex2f(-0.81,-1.65);
    glVertex2f(-0.75,-1.6);
    glVertex2f(-0.76,-1.65);
    glVertex2f(-0.7,-1.6);
    glVertex2f(-0.71,-1.65);
    glVertex2f(-0.65,-1.6);
    glVertex2f(-0.66,-1.65);
    glVertex2f(-0.6,-1.6);
    glVertex2f(-0.61,-1.65);
    glVertex2f(-0.55,-1.6);
    glVertex2f(-0.56,-1.65);
    glVertex2f(-0.5,-1.6);
    glVertex2f(-0.51,-1.65);
    glVertex2f(-0.45,-1.6);
    glVertex2f(-0.46,-1.65);
    glVertex2f(-0.4,-1.6);
    glVertex2f(-0.41,-1.65);
    glVertex2f(-0.35,-1.6);
    glVertex2f(-0.36,-1.65);
    glVertex2f(-0.3,-1.6);
    glVertex2f(-0.31,-1.65);
    glVertex2f(-0.25,-1.6);
    glVertex2f(-0.26,-1.65);
    glVertex2f(-0.2,-1.6);
    glVertex2f(-0.21,-1.65);
    glVertex2f(-0.15,-1.6);
    glVertex2f(-0.16,-1.65);
    glVertex2f(-0.1,-1.6);
    glVertex2f(-0.11,-1.65);
    glVertex2f(-0.05,-1.6);
    glVertex2f(-0.06,-1.65);
    glVertex2f(0.0,-1.6);
    glVertex2f(-0.01,-1.65);
    glVertex2f(0.95,-1.6);
    glVertex2f(0.94,-1.65);
    glVertex2f(0.9,-1.6);
    glVertex2f(0.89,-1.65);
    glVertex2f(0.85,-1.6);
    glVertex2f(0.84,-1.65);
    glVertex2f(0.8,-1.6);
    glVertex2f(0.79,-1.65);
    glVertex2f(0.75,-1.6);
    glVertex2f(0.74,-1.65);
    glVertex2f(0.7,-1.6);
    glVertex2f(0.69,-1.65);
    glVertex2f(0.65,-1.6);
    glVertex2f(0.64,-1.65);
    glVertex2f(0.6,-1.6);
    glVertex2f(0.59,-1.65);
    glVertex2f(0.55,-1.6);
    glVertex2f(0.54,-1.65);
    glVertex2f(0.5,-1.6);
    glVertex2f(0.49,-1.65);
    glVertex2f(0.45,-1.6);
    glVertex2f(0.44,-1.65);
    glVertex2f(0.4,-1.6);
    glVertex2f(0.39,-1.65);
    glVertex2f(0.35,-1.6);
    glVertex2f(0.34,-1.65);
    glVertex2f(0.3,-1.6);
    glVertex2f(0.29,-1.65);
    glVertex2f(0.25,-1.6);
    glVertex2f(0.24,-1.65);
    glVertex2f(0.2,-1.6);
    glVertex2f(0.19,-1.65);
    glVertex2f(0.15,-1.6);
    glVertex2f(0.14,-1.65);
    glVertex2f(0.1,-1.6);
    glVertex2f(0.09,-1.65);
    glVertex2f(0.05,-1.6);
    glVertex2f(0.04,-1.65);

    glVertex2f(-0.95,-1.7);
    glVertex2f(-0.96,-1.75);
    glVertex2f(-0.9,-1.7);
    glVertex2f(-0.91,-1.75);
    glVertex2f(-0.85,-1.7);
    glVertex2f(-0.86,-1.75);
    glVertex2f(-0.8,-1.7);
    glVertex2f(-0.81,-1.75);
    glVertex2f(-0.75,-1.7);
    glVertex2f(-0.76,-1.75);
    glVertex2f(-0.7,-1.7);
    glVertex2f(-0.71,-1.75);
    glVertex2f(-0.65,-1.7);
    glVertex2f(-0.66,-1.75);
    glVertex2f(-0.6,-1.7);
    glVertex2f(-0.61,-1.75);
    glVertex2f(-0.55,-1.7);
    glVertex2f(-0.56,-1.75);
    glVertex2f(-0.5,-1.7);
    glVertex2f(-0.51,-1.75);
    glVertex2f(-0.45,-1.7);
    glVertex2f(-0.46,-1.75);
    glVertex2f(-0.4,-1.7);
    glVertex2f(-0.41,-1.75);
    glVertex2f(-0.35,-1.7);
    glVertex2f(-0.36,-1.75);
    glVertex2f(-0.3,-1.7);
    glVertex2f(-0.31,-1.75);
    glVertex2f(-0.25,-1.7);
    glVertex2f(-0.26,-1.75);
    glVertex2f(-0.2,-1.7);
    glVertex2f(-0.21,-1.75);
    glVertex2f(-0.15,-1.7);
    glVertex2f(-0.16,-1.75);
    glVertex2f(-0.1,-1.7);
    glVertex2f(-0.11,-1.75);
    glVertex2f(-0.05,-1.7);
    glVertex2f(-0.06,-1.75);
    glVertex2f(0.0,-1.7);
    glVertex2f(-0.01,-1.75);
    glVertex2f(0.95,-1.7);
    glVertex2f(0.94,-1.75);
    glVertex2f(0.9,-1.7);
    glVertex2f(0.89,-1.75);
    glVertex2f(0.85,-1.7);
    glVertex2f(0.84,-1.75);
    glVertex2f(0.8,-1.7);
    glVertex2f(0.79,-1.75);
    glVertex2f(0.75,-1.7);
    glVertex2f(0.74,-1.75);
    glVertex2f(0.7,-1.7);
    glVertex2f(0.69,-1.75);
    glVertex2f(0.65,-1.7);
    glVertex2f(0.64,-1.75);
    glVertex2f(0.6,-1.7);
    glVertex2f(0.59,-1.75);
    glVertex2f(0.55,-1.7);
    glVertex2f(0.54,-1.75);
    glVertex2f(0.5,-1.7);
    glVertex2f(0.49,-1.75);
    glVertex2f(0.45,-1.7);
    glVertex2f(0.44,-1.75);
    glVertex2f(0.4,-1.7);
    glVertex2f(0.39,-1.75);
    glVertex2f(0.35,-1.7);
    glVertex2f(0.34,-1.75);
    glVertex2f(0.3,-1.7);
    glVertex2f(0.29,-1.75);
    glVertex2f(0.25,-1.7);
    glVertex2f(0.24,-1.75);
    glVertex2f(0.2,-1.7);
    glVertex2f(0.19,-1.75);
    glVertex2f(0.15,-1.7);
    glVertex2f(0.14,-1.75);
    glVertex2f(0.1,-1.7);
    glVertex2f(0.09,-1.75);
    glVertex2f(0.05,-1.7);
    glVertex2f(0.04,-1.75);

    glVertex2f(-0.95,-1.8);
    glVertex2f(-0.96,-1.85);
    glVertex2f(-0.9,-1.8);
    glVertex2f(-0.91,-1.85);
    glVertex2f(-0.85,-1.8);
    glVertex2f(-0.86,-1.85);
    glVertex2f(-0.8,-1.8);
    glVertex2f(-0.81,-1.85);
    glVertex2f(-0.75,-1.8);
    glVertex2f(-0.76,-1.85);
    glVertex2f(-0.7,-1.8);
    glVertex2f(-0.71,-1.85);
    glVertex2f(-0.65,-1.8);
    glVertex2f(-0.66,-1.85);
    glVertex2f(-0.6,-1.8);
    glVertex2f(-0.61,-1.85);
    glVertex2f(-0.55,-1.8);
    glVertex2f(-0.56,-1.85);
    glVertex2f(-0.5,-1.8);
    glVertex2f(-0.51,-1.85);
    glVertex2f(-0.45,-1.8);
    glVertex2f(-0.46,-1.85);
    glVertex2f(-0.4,-1.8);
    glVertex2f(-0.41,-1.85);
    glVertex2f(-0.35,-1.8);
    glVertex2f(-0.36,-1.85);
    glVertex2f(-0.3,-1.8);
    glVertex2f(-0.31,-1.85);
    glVertex2f(-0.25,-1.8);
    glVertex2f(-0.26,-1.85);
    glVertex2f(-0.2,-1.8);
    glVertex2f(-0.21,-1.85);
    glVertex2f(-0.15,-1.8);
    glVertex2f(-0.16,-1.85);
    glVertex2f(-0.1,-1.8);
    glVertex2f(-0.11,-1.85);
    glVertex2f(-0.05,-1.8);
    glVertex2f(-0.06,-1.85);
    glVertex2f(0.0,-1.8);
    glVertex2f(-0.01,-1.85);
    glVertex2f(0.95,-1.8);
    glVertex2f(0.94,-1.85);
    glVertex2f(0.9,-1.8);
    glVertex2f(0.89,-1.85);
    glVertex2f(0.85,-1.8);
    glVertex2f(0.84,-1.85);
    glVertex2f(0.8,-1.8);
    glVertex2f(0.79,-1.85);
    glVertex2f(0.75,-1.8);
    glVertex2f(0.74,-1.85);
    glVertex2f(0.7,-1.8);
    glVertex2f(0.69,-1.85);
    glVertex2f(0.65,-1.8);
    glVertex2f(0.64,-1.85);
    glVertex2f(0.6,-1.8);
    glVertex2f(0.59,-1.85);
    glVertex2f(0.55,-1.8);
    glVertex2f(0.54,-1.85);
    glVertex2f(0.5,-1.8);
    glVertex2f(0.49,-1.85);
    glVertex2f(0.45,-1.8);
    glVertex2f(0.44,-1.85);
    glVertex2f(0.4,-1.8);
    glVertex2f(0.39,-1.85);
    glVertex2f(0.35,-1.8);
    glVertex2f(0.34,-1.85);
    glVertex2f(0.3,-1.8);
    glVertex2f(0.29,-1.85);
    glVertex2f(0.25,-1.8);
    glVertex2f(0.24,-1.85);
    glVertex2f(0.2,-1.8);
    glVertex2f(0.19,-1.85);
    glVertex2f(0.15,-1.8);
    glVertex2f(0.14,-1.85);
    glVertex2f(0.1,-1.8);
    glVertex2f(0.09,-1.85);
    glVertex2f(0.05,-1.8);
    glVertex2f(0.04,-1.85);

    glVertex2f(-0.95,-1.9);
    glVertex2f(-0.96,-1.95);
    glVertex2f(-0.9,-1.9);
    glVertex2f(-0.91,-1.95);
    glVertex2f(-0.85,-1.9);
    glVertex2f(-0.86,-1.95);
    glVertex2f(-0.8,-1.9);
    glVertex2f(-0.81,-1.95);
    glVertex2f(-0.75,-1.9);
    glVertex2f(-0.76,-1.95);
    glVertex2f(-0.7,-1.9);
    glVertex2f(-0.71,-1.95);
    glVertex2f(-0.65,-1.9);
    glVertex2f(-0.66,-1.95);
    glVertex2f(-0.6,-1.9);
    glVertex2f(-0.61,-1.95);
    glVertex2f(-0.55,-1.9);
    glVertex2f(-0.56,-1.95);
    glVertex2f(-0.5,-1.9);
    glVertex2f(-0.51,-1.95);
    glVertex2f(-0.45,-1.9);
    glVertex2f(-0.46,-1.95);
    glVertex2f(-0.4,-1.9);
    glVertex2f(-0.41,-1.95);
    glVertex2f(-0.35,-1.9);
    glVertex2f(-0.36,-1.95);
    glVertex2f(-0.3,-1.9);
    glVertex2f(-0.31,-1.95);
    glVertex2f(-0.25,-1.9);
    glVertex2f(-0.26,-1.95);
    glVertex2f(-0.2,-1.9);
    glVertex2f(-0.21,-1.95);
    glVertex2f(-0.15,-1.9);
    glVertex2f(-0.16,-1.95);
    glVertex2f(-0.1,-1.9);
    glVertex2f(-0.11,-1.95);
    glVertex2f(-0.05,-1.9);
    glVertex2f(-0.06,-1.95);
    glVertex2f(0.0,-1.9);
    glVertex2f(-0.01,-1.95);
    glVertex2f(0.95,-1.9);
    glVertex2f(0.94,-1.95);
    glVertex2f(0.9,-1.9);
    glVertex2f(0.89,-1.95);
    glVertex2f(0.85,-1.9);
    glVertex2f(0.84,-1.95);
    glVertex2f(0.8,-1.9);
    glVertex2f(0.79,-1.95);
    glVertex2f(0.75,-1.9);
    glVertex2f(0.74,-1.95);
    glVertex2f(0.7,-1.9);
    glVertex2f(0.69,-1.95);
    glVertex2f(0.65,-1.9);
    glVertex2f(0.64,-1.95);
    glVertex2f(0.6,-1.9);
    glVertex2f(0.59,-1.95);
    glVertex2f(0.55,-1.9);
    glVertex2f(0.54,-1.95);
    glVertex2f(0.5,-1.9);
    glVertex2f(0.49,-1.95);
    glVertex2f(0.45,-1.9);
    glVertex2f(0.44,-1.95);
    glVertex2f(0.4,-1.9);
    glVertex2f(0.39,-1.95);
    glVertex2f(0.35,-1.9);
    glVertex2f(0.34,-1.95);
    glVertex2f(0.3,-1.9);
    glVertex2f(0.29,-1.95);
    glVertex2f(0.25,-1.9);
    glVertex2f(0.24,-1.95);
    glVertex2f(0.2,-1.9);
    glVertex2f(0.19,-1.95);
    glVertex2f(0.15,-1.9);
    glVertex2f(0.14,-1.95);
    glVertex2f(0.1,-1.9);
    glVertex2f(0.09,-1.95);
    glVertex2f(0.05,-1.9);
    glVertex2f(0.04,-1.95);

    glEnd();

    glPopMatrix();

    // ###### Rain Drop Finished ######

	glColor3ub(148, 73, 33);
    renderBitmapString(-0.08f, 0.30f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Lalbag Fort");
	glFlush();
}

void morning()
{
    // ###### Sky Morning ######

    glBegin(GL_QUADS);
    glColor3ub(135, 206, 250);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glColor3ub(0, 133, 255);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3ub(115, 115, 115);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);
    glEnd();

    // ###### Sky Morning Finished ######

    sun1();
    leftCloud();
    rightCloud();
    backgroundBuildings();
    lalbagFort();
    mainRoad();
    moveCar();


    glColor3ub(148, 73, 33);
    renderBitmapString(-0.08f, 0.30f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Lalbag Fort");
	glFlush();
}

void evening()
{
    // ###### Sky Evening ######

    glBegin(GL_QUADS);
    glColor3ub(132, 99, 105);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glColor3ub(118, 162, 197);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3ub(115, 115, 115);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);
    glEnd();

    // ###### Sky Evening Finished ######
    sun2();
    backgroundBuildings();
    lalbagFort();
    mainRoad();
    moveCar();
	glColor3ub(148, 73, 33);
    renderBitmapString(-0.08f, 0.30f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Lalbag Fort");
	glFlush();
}

void night()
{
    // ###### Sky Night ######

    glBegin(GL_QUADS);
    glColor3ub(3, 0, 46);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3ub(115, 115, 115);
    glVertex2f(-1.0,0.0);
    glVertex2f(1.0,0.0);
    glEnd();

    // Stars

    glPointSize(3);
    glBegin(GL_POINTS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.85,0.85);
    glVertex2f(-0.8,0.75);
    glVertex2f(-0.75,0.85);
    glVertex2f(-0.78,0.75);
    glVertex2f(-0.65,0.75);
    glVertex2f(-0.6,0.9);
    glVertex2f(-0.55,0.85);
    glVertex2f(-0.45,0.85);
    glVertex2f(-0.38,0.75);
    glVertex2f(-0.2,0.9);
    glVertex2f(-0.15,0.85);
    glVertex2f(-0.1,0.85);
    glVertex2f(-0.0,0.75);
    glVertex2f(-0.7,0.9);
    glVertex2f(-0.3,0.85);
    glVertex2f(-0.48,0.85);
    glVertex2f(-0.25,0.75);
    glVertex2f(-0.32,0.75);
    glVertex2f(-0.18,0.75);
    glVertex2f(0.32,0.75);
    glVertex2f(0.18,0.75);
    glVertex2f(0.9,0.9);
    glVertex2f(0.85,0.85);
    glVertex2f(0.75,0.85);
    glVertex2f(0.78,0.75);
    glVertex2f(0.6,0.9);
    glVertex2f(0.55,0.85);
    glVertex2f(0.45,0.85);
    glVertex2f(0.38,0.75);
    glVertex2f(0.2,0.9);
    glVertex2f(0.15,0.85);
    glVertex2f(0.1,0.85);
    glVertex2f(0.0,0.75);
    glVertex2f(0.7,0.9);
    glVertex2f(0.3,0.85);
    glVertex2f(0.48,0.85);
    glVertex2f(0.25,0.75);
    glEnd();

    // ###### Sky Night Finished ######

    moon();
    backgroundBuildings();
    lalbagFort();
    mainRoad();
    moveCar();
	glColor3ub(148, 73, 33);
    renderBitmapString(-0.08f, 0.30f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Lalbag Fort");
	glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
}

void drawView() {

	glBegin(GL_QUADS);
	glColor3ub(181, 169, 139);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(-1.0f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(45, 119, 156);
	glVertex2f(-0.90f, 1.0f);
	glVertex2f(0.90f, 1.0f);
	glVertex2f(0.9f, -1.0f);
	glVertex2f(-0.9f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(146, 145, 156);
	glVertex2f(-0.80f, 1.0f);
	glVertex2f(0.80f, 1.0f);
	glVertex2f(0.80f, -1.0f);
	glVertex2f(-0.80f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(203, 208, 209);
	glVertex2f(-0.33f, -0.5f);
	glVertex2f(0.33f, -0.5f);
	glVertex2f(0.33f, 0.35f);
	glVertex2f(-0.33f, 0.35f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(203, 208, 209);
	glVertex2f(-0.33f, 0.35f);
	glVertex2f(0.33f, 0.35f);
	glVertex2f(0.3f, 0.425f);
	glVertex2f(0.27f, 0.5f);
	glVertex2f(0.21f, 0.625f);
	glVertex2f(0.15f, 0.7f);
	glVertex2f(0.09f, 0.75f);
	glVertex2f(0.04f, 0.785f);
	glVertex2f(0.0f, 0.85f);
	glVertex2f(-0.04f, 0.785f);
	glVertex2f(-0.09f, 0.75f);
	glVertex2f(-0.15f, 0.7f);
	glVertex2f(-0.21f, 0.625f);
	glVertex2f(-0.27f, 0.5f);
	glVertex2f(-0.3f, 0.425f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(155, 174, 209);
	glVertex2f(-0.80f, -0.60f);
	glVertex2f(0.80f, -0.60f);
	glVertex2f(0.80f, -1.0f);
	glVertex2f(-0.80f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(245, 244, 181);
	glVertex2f(-0.60f, -0.450f);
	glVertex2f(0.60f, -0.45f);
	glVertex2f(0.60f, -0.60f);
	glVertex2f(-0.60f, -0.60);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(245, 244, 181);
	glVertex2f(-0.45f, -0.3f);
	glVertex2f(0.45f, -0.3f);
	glVertex2f(0.450f, -0.45f);
	glVertex2f(-0.450f, -0.45f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.28f, 0.35f);
	glVertex2f(0.28f, 0.35f);
	glVertex2f(0.28f, -.2f);
	glVertex2f(-0.28f, -0.2);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(245, 244, 181);
	glVertex2f(-0.30f, -0.15f);
	glVertex2f(0.30f, -0.15f);
	glVertex2f(0.30f, -0.3f);
	glVertex2f(-0.30f, -0.3f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.28f, 0.35f);
	glVertex2f(0.28f, 0.35f);
	glVertex2f(0.25f, 0.425f);
	glVertex2f(0.22f, 0.5f);
	glVertex2f(0.16f, 0.625f);
	glVertex2f(0.1f, 0.7f);
	glVertex2f(0.03f, 0.75f);
	glVertex2f(0.015f, 0.775f);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(-0.015f, 0.775f);
	glVertex2f(-0.03f, 0.75f);
	glVertex2f(-0.10f, 0.7f);
	glVertex2f(-0.16f, 0.625f);
	glVertex2f(-0.22f, 0.5f);
	glVertex2f(-0.25f, 0.425f);
	glEnd();
}


void renderScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    // Draw historical furniture
    drawView();

     glColor3f(0.0,0.0,0.0);
     renderBitmapString(-0.2f, -0.55f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "The Tomb of Pari Bibi");

    glFlush();
}

void text(){
glClearColor(0.1f, 0.1f, 0.1f,0.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

///Header Text,
glColor3f(0.0f, 0.0f, 1.0f);
renderBitmapString(-0.5f, 0.9f, 0.0f,GLUT_BITMAP_TIMES_ROMAN_24, "American International University of Bangladesh (AIUB)");

glColor3f(1.0f, 0.5f, 0.0f);
renderBitmapString(-0.3f, 0.8f, 0.0f,GLUT_BITMAP_HELVETICA_12, "Course Name : Computer  Graphics");

glColor3f(1.0f, 0.5f, 0.0f);
renderBitmapString(0.0f, 0.8f, 0.0f,GLUT_BITMAP_HELVETICA_12, "Section : E");

glColor3f(0.0f, 0.5f, 0.5f);
renderBitmapString(-0.3f, 0.7f, 0.0f,GLUT_BITMAP_HELVETICA_12, "Faculty Name : MAHFUJUR RAHMAN");

glColor3f(1.0f, 0.5f, 0.0f);
renderBitmapString(-0.3f, 0.6f, 0.0f,GLUT_BITMAP_HELVETICA_18, "Project Name : LALBAG FORT");

glColor3f(0.5f, 0.5f, 0.5f);
renderBitmapString(-0.2f, 0.4f, 0.0f,GLUT_BITMAP_HELVETICA_18, "Members Information");
//------------------------------------------------------------------------------------------

///Kazi Abdur Rahman,
glColor3f(2.0f, 0.5f, 1.0f);
renderBitmapString(-0.9f, 0.3f, 0.0f,GLUT_BITMAP_HELVETICA_12, "1) KAZI ABDUR RAHMAN (21-44948-2)");
glColor3f(0.0f, 1.0f, 1.0f);
renderBitmapString(-0.9f, 0.2f, 0.0f,GLUT_BITMAP_HELVETICA_12, "   Contribution: Ground,Sky,The tomb of Pari Bibi View,Sky Divider,Update Building Position,Evening View Function,Evening Sun with Translate,Information Window, Presentation,Report");

///K M Yeaser Arafat
glColor3f(2.0f, 0.5f, 1.0f);
renderBitmapString(-0.9f, 0.1f, 0.0f,GLUT_BITMAP_HELVETICA_12, "2) K M YEASER ARAFAT (21-44933-2)");
glColor3f(0.0f, 1.0f, 1.0f);
renderBitmapString(-0.9f, 0.0f, 0.0f,GLUT_BITMAP_HELVETICA_12, "   Contribution: Building Structure of Lalbag Fort, Adding Text, Left & right side Pillars, 1 Tomb left & right side,2 Tomb left & right side,Main Road,Raindrop with Translate,Rain view Function,Information Window, Presentation,Report.");

///MD.NOMAN ISLAM:
glColor3f(2.0f, 0.5f, 1.0f);
renderBitmapString(-0.9f, -0.1f, 0.0f,GLUT_BITMAP_HELVETICA_12, "3) MD.NOMAN ISLAM: (21-45453-3)");
glColor3f(0.0f, 1.0f, 1.0f);
renderBitmapString(-0.9f, -0.2f, 0.0f,GLUT_BITMAP_HELVETICA_12, "   Contribution: Background Buildings, Animate the Car, Adding Sound, Night view function with starsDoor Window, All Window line (1st, 2nd, 3rd, 4th & 5th),Borders,Door Frame(Left & Right),Information Window, Presentation,Report.");
///GOBINDA GOSWAMEE
glColor3f(2.0f, 0.5f, 1.0f);
renderBitmapString(-0.9f, -0.3f, 0.0f,GLUT_BITMAP_HELVETICA_12, "4) GOBINDA GOSWAMEE: (21-44948-2)");
glColor3f(0.0f, 1.0f, 1.0f);
renderBitmapString(-0.9f, -0.4f, 0.0f,GLUT_BITMAP_HELVETICA_12, "   Contribution: In front of Lalbag Fort Left,Right & Middle Walkspace,The tomb of Pari Bibi View, All small & middile Water Foundation, Cloud with translate,Moon with translate,HandleKeyPress() Function,Information Window, Presentation,Report.");

///MST. MEFTAUL JANNAT
glColor3f(2.0f, 0.5f, 1.0f);
renderBitmapString(-0.9f, -0.5f, 0.0f,GLUT_BITMAP_HELVETICA_12, "5) MST. MEFTAUL JANNAT: (21-45675-3)");
glColor3f(0.0f, 1.0f, 1.0f);
renderBitmapString(-0.9f, -0.6f, 0.0f,GLUT_BITMAP_HELVETICA_12, "   Contribution: In front of Lalbag Fort left,Right side small tree & Right big tree,The tomb of Pari Bibi View, Left big tree, Circle() Function,Morning Sun with translate,Morning View,Update Trees,Information Window, Presentation,Report.");



 glFlush(); // Render now
}

void handleKeyPress(unsigned char key,int x,int y)
{
    switch (key)
    {
        case 'r':
        glutDisplayFunc(rain);
        glutPostRedisplay();
        break;

        case 'm':
        glutDisplayFunc(morning);
        glutPostRedisplay();
        break;

        case 'e':
        glutDisplayFunc(evening);
        glutPostRedisplay();
        break;

        case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;

        case 'p':
        glutDisplayFunc(renderScene);
        glutPostRedisplay();
        break;

        case 't':
        glutDisplayFunc(text);
        glutPostRedisplay();
        break;
    }
}

void myDisplay(void)
{
    if(position6 <= -0.42)
    {
        evening();
    }
    else if(position6 <= 0.0)
    {
        morning();
    }
    else if(position6 <= 0.55)
    {
        night();
    }
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1800, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Lalbag Fort Scenario");
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(handleKeyPress);
    glutTimerFunc(100, rightToLeft, 0);
	glutTimerFunc(100, leftToRight, 0);
    glutTimerFunc(100, rightToLeftCloud, 0);
    glutTimerFunc(100, leftToRightCloud, 0);
    glutTimerFunc(100, rainDrop, 0);
    glutTimerFunc(100, mSun, 0);
    glutTimerFunc(100, eSun, 0);
    sndPlaySound("sound.wav", SND_ASYNC);
	glutMainLoop();


	return 0;
}
