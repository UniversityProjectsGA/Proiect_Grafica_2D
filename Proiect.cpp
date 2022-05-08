#include <windows.h>
#include <math.h>
#include <gl/freeglut.h>

double i_t = -100.0; // Translate
double j_t = 100.0; // Translate
double i_t_p = 0.0; // Viteza Translate
double j_t_p = 0.0; // Viteza Translate

double i_s = 1.0; // Scale
double j_s = 1.0; // Scale
double i_s_p = 0.0; // Viteza Scale
double j_s_p = 0.0; // Viteza Scale

double n_t = 0; // Translate nor
double n_t_p = 0; // Translate nor viteza

double p_t = 0; // Translate ploaie
double p_t_p = 0; // Translate ploaie viteza

int timp = 0; // 0 - zi, 1 - noapte
int inorat = 0;
int ploaie = 0;
int vant = 0;

// var cerc
const double TWO_PI = 6.2831853;

GLsizei winWidth = 500, winHeight = 500;
GLuint regHex;
static GLfloat rotTheta = 0.0;

class scrPt
{
	public:
		GLint x, y;
};

// end var cerc

void drawSoare(void)
{
	scrPt hexVertex2;
	GLdouble hexTheta2;
	GLint k2;
	// soare
	if (timp == 0)
	{
		glColor3f(0.98, 0.95, 0.56); // culoare zi
	}
	else if (timp == 1)
	{
		glColor3f(0.62, 0.64, 0.71); // culoare noapte
	}
	//glColor3f(0.98, 0.95, 0.56); // culoare zi
	//glColor3f(0.62, 0.64, 0.71); // culoare noapte
	glBegin(GL_POLYGON);
	for (k2 = 0; k2 < 60; k2++)
	{
		hexTheta2 = TWO_PI * k2 / 60;
		hexVertex2.x = 192 + 50 * cos(hexTheta2);
		hexVertex2.y = 972 + 50 * sin(hexTheta2);
		glVertex2i(hexVertex2.x, hexVertex2.y);
	}
	glEnd();
	//end soare
}

void drawNor(void)
{
	scrPt hexVertex;
	GLdouble hexTheta;
	GLint k;
	// nor 1
	// 1/3
	if (timp == 0)
	{
		glColor3f(0.86, 0.86, 0.86); // culoare senin
	}
	if (timp == 1)
	{
		glColor3f(0.09, 0.15, 0.25); // culoare nopate
	}
	if (ploaie == 1 && timp == 0)
	{
		glColor3f(0.53, 0.44, 0.56); // culoare ploaie
	}
	//glColor3f(0.86, 0.86, 0.86); // culoare senin
	//glColor3f(0.53, 0.44, 0.56); // culoare ploaie
	//glColor3f(0.09, 0.15, 0.25); // culoare nopate
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 530 + 30 * cos(hexTheta);
		hexVertex.y = 1000 + 30 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 2/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 500 + 25 * cos(hexTheta);
		hexVertex.y = 995 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 3/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 560 + 20 * cos(hexTheta);
		hexVertex.y = 995 + 20 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// end nor 1

	// nor 2
	// 1/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 900 + 25 * cos(hexTheta);
		hexVertex.y = 1040 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 2/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 930 + 30 * cos(hexTheta);
		hexVertex.y = 1040 + 30 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 3/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 960 + 25 * cos(hexTheta);
		hexVertex.y = 1040 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// end nor 2

	// nor 3
	// 1/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 1300 + 25 * cos(hexTheta);
		hexVertex.y = 960 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 2/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 1330 + 30 * cos(hexTheta);
		hexVertex.y = 960 + 30 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 3/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 1360 + 25 * cos(hexTheta);
		hexVertex.y = 960 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// end nor 3

	// nor 4
	// 1/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 1700 + 25 * cos(hexTheta);
		hexVertex.y = 1010 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 2/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 1730 + 30 * cos(hexTheta);
		hexVertex.y = 1010 + 30 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 3/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 1760 + 25 * cos(hexTheta);
		hexVertex.y = 1010 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// end nor 4

	// nor soare
	// 1/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 180 + 25 * cos(hexTheta);
		hexVertex.y = 972 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 2/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 212 + 30 * cos(hexTheta);
		hexVertex.y = 972 + 30 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// 3/3
	glBegin(GL_POLYGON);
	for (k = 0; k < 60; k++)
	{
		hexTheta = TWO_PI * k / 60;
		hexVertex.x = 242 + 25 * cos(hexTheta);
		hexVertex.y = 972 + 25 * sin(hexTheta);
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	// end nor soare
	glEndList();
}

void init(void)
{
	glClearColor(0.1, 0.1, 0.1, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 1920, 0.0, 1080);
}

void deseneazaScena(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	// cer
	if (timp == 0)
	{
		glColor3f(0.53, 0.74, 0.96); // culoare zi
		if (ploaie == 1)
		{
			glColor3f(0.48, 0.46, 0.51); // culoare ploaie
		}
	}
	else if (timp == 1)
	{
		glColor3f(0.2, 0.33, 0.56); // culoare noapte
		if (ploaie == 1)
		{
			//glColor3f(0.48, 0.46, 0.51); // culoare ploaie
		}
	}
	//glColor3f(0.53, 0.74, 0.96); // culoare zi
	//glColor3f(0.2, 0.33, 0.56); // culoare noapte
	//glColor3f(0.48, 0.46, 0.51); // culoare ploaie
	glBegin(GL_POLYGON);
	glVertex2i(0, 810);
	glVertex2i(1920, 810);
	glVertex2i(1920, 1080);
	glVertex2i(0, 1080);
	glEnd();
	// end cer

	// apa
	if (timp == 0)
	{
		glColor3f(0.001, 0.53, 0.98); // culoare zi
	}
	else if (timp == 1)
	{
		glColor3f(0.001, 0.33, 0.98); // culoare noapte
	}
	//glColor3f(0.001, 0.53, 0.98);
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(1920, 0);
	glVertex2i(1920, 810);
	glVertex2i(0, 810);
	glEnd();
	// end apa

	// insula
	if (timp == 0)
	{
		glColor3f(0.03, 0.61, 0.16); // culoare zi
	}
	else if (timp == 1)
	{
		glColor3f(0.03, 0.41, 0.16); // culoare noapte
	}
	//glColor3f(0.03, 0.61, 0.16);
	glBegin(GL_QUADS);
	glVertex2i(0, 810);
	glVertex2i(1920, 810);
	glVertex2i(1920, 702);
	glVertex2i(0, 702);
	glEnd();
	// end insula

	// munte tip 1
	if (timp == 0)
	{
		glColor3f(0.28, 0.30, 0.22); // culoare zi
	}
	else if (timp == 1)
	{
		glColor3f(0.18, 0.30, 0.22); // culoare noapte
	}
	//glColor3f(0.28, 0.30, 0.22);
	glBegin(GL_TRIANGLES);
	glVertex2i(300, 810);
	glVertex2i(700, 810);
	glVertex2i(500, 900);
	glEnd();
	// end munte tip 1

	// munte tip 2
	if (timp == 0)
	{
		glColor3f(0.28, 0.30, 0.22); // culoare zi
	}
	else if (timp == 1)
	{
		glColor3f(0.18, 0.30, 0.22); // culoare noapte
	}
	//glColor3f(0.28, 0.30, 0.22);
	glBegin(GL_POLYGON);
	glVertex2i(1100, 810);
	glVertex2i(1200, 950);
	glVertex2i(1300, 950);
	glVertex2i(1400, 810);
	glEnd();
	// end munte tip 2

	// ploaie
	if (ploaie == 1)
	{
		glPushMatrix();
		glTranslated(0, p_t, 0);
		glEnable(GL_LINE_STIPPLE);
		glLineStipple(25, 0xAAAA);
		glLineWidth(2);
		glColor3f(0.015, 0.007, 0.58);
		glBegin(GL_LINES);
		glVertex2i(150, -1000);
		glVertex2i(100, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(300, -1000);
		glVertex2i(250, 1100);
		glEnd();
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(450, -1000);
		glVertex2i(400, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(600, -1000);
		glVertex2i(550, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(750, -1000);
		glVertex2i(700, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(900, -1000);
		glVertex2i(850, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1050, -1000);
		glVertex2i(1000, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1200, -1000);
		glVertex2i(1150, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1350, -1000);
		glVertex2i(1300, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1500, -1000);
		glVertex2i(1450, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1650, -1000);
		glVertex2i(1600, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1800, -1000);
		glVertex2i(1750, 1100);
		glEnd();
		glBegin(GL_LINES);
		glVertex2i(1950, -1000);
		glVertex2i(1900, 1100);
		glEnd();
		glDisable(GL_LINE_STIPPLE);
		glPopMatrix();
	}
	// end ploaie

	// soare + nori
	drawSoare();
	glCallList(regHex);
	if (inorat == 1)
	{
		glPushMatrix();
		glTranslated(n_t, 0, 0);
		drawNor();
		glPopMatrix();
	}
	// end soare + nori

	// casa 1
	glColor3f(0.0, 0.4, 0.4);
	glBegin(GL_POLYGON); // Perete 1
	glVertex2i(347, 742); 
	glVertex2i(397, 742); 
	glVertex2i(397, 772);
	glVertex2i(347, 772);
	glEnd();
	glBegin(GL_POLYGON); // Perete 2
	glVertex2i(347, 742);
	glVertex2i(317, 757);
	glVertex2i(317, 787);
	glVertex2i(347, 772);
	glEnd();
	glColor3f(0.6, 0.29, 0.0);
	glBegin(GL_TRIANGLES); // Acoperis 1
	glVertex2i(347, 772);
	glVertex2i(397, 772);
	glVertex2i(362, 800);
	glEnd();
	glColor3f(0.5, 0.29, 0.0);
	glBegin(GL_TRIANGLES); // Acoperis 2
	glVertex2i(347, 772);
	glVertex2i(317, 787);
	glVertex2i(362, 800);
	glEnd();
	glColor3f(0.0, 0.8, 0.4);
	glBegin(GL_POLYGON); // Usa
	glVertex2i(369, 742);
	glVertex2i(375, 742);
	glVertex2i(375, 762);
	glVertex2i(369, 762);
	glEnd();
	glColor3f(0.0, 0.8, 0.4);
	glBegin(GL_QUADS); // Geam 1
	glVertex2i(357, 762);
	glVertex2i(363, 762);
	glVertex2i(363, 756);
	glVertex2i(357, 756);
	glEnd();
	glBegin(GL_QUADS); // Geam 2
	glVertex2i(381, 762);
	glVertex2i(387, 762);
	glVertex2i(387, 756);
	glVertex2i(381, 756);
	glEnd();
	glBegin(GL_QUADS); // Geam 3
	glVertex2i(327, 767);
	glVertex2i(337, 762);
	glVertex2i(337, 767);
	glVertex2i(327, 773);
	glEnd();
	// end casa 1

	// copac 1
	glLineWidth(7);
	glColor3f(0.4, 0.27, 0.11);
	glBegin(GL_LINES); // Trunchi
	glVertex2f(427, 752);
	glVertex2f(427, 772);
	glEnd();

	glColor3f(0.07, 0.36, 0.12);
	glBegin(GL_TRIANGLES); // Frunze
	glVertex2i(407, 772);
	glVertex2i(447, 772);
	glVertex2i(427, 817);
	glEnd();
	// end copac 1

	// casa 2
	glColor3f(0.64, 0.56, 0.5);
	glBegin(GL_POLYGON); // Perete 1
	glVertex2i(879, 712);
	glVertex2i(929, 712);
	glVertex2i(929, 742);
	glVertex2i(879, 742);
	glBegin(GL_POLYGON); // Perete 2
	glVertex2i(879, 742);
	glVertex2i(929, 742);
	glVertex2i(929, 772);
	glVertex2i(879, 772);
	glEnd();
	glColor3f(0.28, 0.24, 0.21);
	glBegin(GL_TRIANGLES); // Acoperis
	glVertex2i(874, 772);
	glVertex2i(934, 772);
	glVertex2i(904, 802);
	glEnd();
	glColor3f(0.28, 0.32, 0.35);
	glBegin(GL_POLYGON); // Usa
	glVertex2i(901, 712);
	glVertex2i(907, 712);
	glVertex2i(907, 732);
	glVertex2i(901, 732);
	glEnd();
	glColor3f(0.28, 0.32, 0.35);
	glBegin(GL_QUADS); // Geam 1
	glVertex2i(888, 726);
	glVertex2i(894, 726);
	glVertex2i(894, 732);
	glVertex2i(888, 732);
	glEnd();
	glBegin(GL_QUADS); // Geam 2
	glVertex2i(914, 726);
	glVertex2i(920, 726);
	glVertex2i(920, 732);
	glVertex2i(914, 732);
	glEnd();
	glBegin(GL_QUADS); // Geam 3
	glVertex2i(888, 762);
	glVertex2i(894, 762);
	glVertex2i(894, 756);
	glVertex2i(888, 756);
	glEnd();
	glBegin(GL_QUADS); // Geam 4
	glVertex2i(914, 762);
	glVertex2i(920, 762);
	glVertex2i(920, 756);
	glVertex2i(914, 756);
	glEnd();
	// end casa 2

	// copac 2
	glLineWidth(7);
	glColor3f(0.4, 0.27, 0.11);
	glBegin(GL_TRIANGLES); // Trunchi
	glVertex2f(940, 722);
	glVertex2f(960, 722);
	glVertex2f(950, 752);
	glEnd();

	glColor3f(0.07, 0.36, 0.12);
	glBegin(GL_TRIANGLES); // Frunze
	glVertex2i(929, 742);
	glVertex2i(969, 742);
	glVertex2i(949, 787);
	glEnd();
	// end copac 2

	// casa 3
	glColor3f(0.54, 0.5, 0.63);
	glBegin(GL_POLYGON); // Perete
	glVertex2i(1428, 770);
	glVertex2i(1478, 770);
	glVertex2i(1478, 800);
	glVertex2i(1428, 800);
	glEnd();
	glColor3f(0.22, 0.24, 0.43);
	glBegin(GL_TRIANGLES); // Acoperis
	glVertex2i(1428, 800);
	glVertex2i(1478, 800);
	glVertex2i(1453, 820);
	glEnd();
	glColor3f(0.97, 0.87, 0.70);
	glBegin(GL_POLYGON); // Usa
	glVertex2i(1450, 770);
	glVertex2i(1456, 770);
	glVertex2i(1456, 790);
	glVertex2i(1450, 790);
	glEnd();
	glColor3f(0.97, 0.87, 0.70);
	glBegin(GL_QUADS); // Geam 1
	glVertex2i(1435, 784); 
	glVertex2i(1441, 784); 
	glVertex2i(1441, 790); 
	glVertex2i(1435, 790); 
	glEnd();
	glBegin(GL_QUADS); // Geam 2
	glVertex2i(1465, 784);
	glVertex2i(1471, 784);
	glVertex2i(1471, 790);
	glVertex2i(1465, 790);
	glEnd();
	// end casa 3

	// copac 3
	glLineWidth(10);
	glColor3f(0.4, 0.27, 0.11);
	glBegin(GL_LINES); // Trunchi
	glVertex2f(1388, 780);
	glVertex2f(1388, 800);
	glEnd();

	glColor3f(0.07, 0.36, 0.12);
	glBegin(GL_TRIANGLES); // Frunze
	glVertex2i(1358, 800);
	glVertex2i(1418, 800);
	glVertex2i(1388, 845);
	glEnd();
	// end copac 3

	// copac 4
	glLineWidth(5);
	glColor3f(0.4, 0.27, 0.11);
	glBegin(GL_LINES); // Trunchi
	glVertex2f(1508, 780);
	glVertex2f(1508, 800);
	glEnd();

	glColor3f(0.07, 0.36, 0.12);
	glBegin(GL_TRIANGLES); // Frunze
	glVertex2i(1488, 800);
	glVertex2i(1528, 800);
	glVertex2i(1508, 835);
	glEnd();
	// end copac 4

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	// barca
	glPushMatrix();
	glTranslated(i_t, j_t, 0.0);
	glScaled(i_s, j_s, 0);

	glColor3f(0.015, 0.007, 0.58);
	glBegin(GL_POLYGON); // Corp
	glVertex2f(300, 100);
	glVertex2f(500, 100);
	glVertex2f(450, 70);
	glVertex2f(350, 70);
	glEnd();

	glColor3f(0.67, 0.05, 0.001);
	glBegin(GL_TRIANGLES); // Panza
	glVertex2f(300, 105);
	glVertex2f(400, 105);
	glVertex2f(400, 160);
	glEnd();

	glLineWidth(5);
	glColor3f(0.33, 0.33, 0.34);
	glBegin(GL_LINES);
	glVertex2f(420, 100);
	glVertex2f(420, 155);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2f(440, 100);
	glVertex2f(440, 155);
	glEnd();
	glPopMatrix();
	// end barca

	glutSwapBuffers();
	glFlush();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1920, 0.0, 1080);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

// misa barca
void miscabarca(void)
{
	if (i_t_p == 0 && j_t_p == 0 && i_s_p == 0 && j_s_p == 0)
	{
		i_t = -100.0;
		j_t = 100.0; 
		i_s = 1.0; 
		j_s = 1.0; 
	}

	i_t = i_t + i_t_p;
	j_t = j_t + j_t_p;
	i_s = i_s + i_s_p;
	j_s = j_s + j_s_p;
	if (i_t == -100.0 && j_t == 100)
	{
		i_t_p = 0.5;
		j_t_p = 0;
		i_s_p = 0;
		j_s_p = 0;
	}
	else if (i_t == 1200.0 && j_t == 100)
	{
		i_t_p = 0;
		j_t_p = 0.5;
		i_s_p = -0.0005;
		j_s_p = -0.0005;
	}
	else if (i_t == 1200.0 && j_t == 540)
	{
		i_t_p = -0.5;
		j_t_p = 0;
		i_s_p = 0;
		j_s_p = 0;
	}
	else if (i_t == -100.0 && j_t == 540)
	{
		i_t_p = 0;
		j_t_p = -0.5;
		i_s_p = 0.0005;
		j_s_p = 0.0005;
	}
	glutPostRedisplay();
}

void oprestebarca(void)
{
	i_t_p = 0;
	j_t_p = 0;
	i_s_p = 0;
	j_s_p = 0;
}
// end misca barca

// misca nor
void miscanor(void)
{
	if (n_t == 0 && n_t_p == 0)
	{
		n_t = -2000.0;
	}
	n_t = n_t + n_t_p;
	if (n_t == -2000.0)
	{
		n_t_p = 0.1;
	}
	else if (n_t == 2000.0)
	{
		n_t_p = -0.1;
	}
	glutPostRedisplay();
}
// end misca nor

// misca ploaie
void miscaploaie(void)
{
	if (p_t == 0 && p_t_p == 0)
	{
		p_t = 500.0;
	}
	p_t = p_t + p_t_p;
	if (p_t == 500.0)
	{
		p_t_p = -10;
	}
	else if (p_t == -10.0)
	{
		p_t = 500.0;
	}
	glutPostRedisplay();
}
// end misca ploaie

void f_zi_clar(void)
{
	timp = 0;
	inorat = 0;
	ploaie = 0;
	vant = 0;
	miscabarca();
}

void f_zi_inorat(void)
{
	timp = 0;
	inorat = 1;
	ploaie = 0;
	vant = 0;
	miscabarca();
}

void f_zi_ploaie(void)
{
	timp = 0;
	inorat = 1;
	ploaie = 1;
	vant = 0;
	miscabarca();
	miscaploaie();
}

void f_zi_vant(void)
{
	timp = 0;
	inorat = 1;
	ploaie = 0;
	vant = 1;
	miscabarca();
	miscanor();
}

void f_npt_clar(void)
{
	timp = 1;
	inorat = 0;
	ploaie = 0;
	vant = 0;
	miscabarca();
}

void f_npt_inorat(void)
{
	timp = 1;
	inorat = 1;
	ploaie = 0;
	vant = 0;
	miscabarca();
}

void f_npt_ploaie(void)
{
	timp = 1;
	inorat = 1;
	ploaie = 1;
	vant = 0;
	miscabarca();
	miscaploaie();
}

void f_npt_vant(void)
{
	timp = 1;
	inorat = 1;
	ploaie = 0;
	vant = 1;
	miscabarca();
	miscanor();
}

void processNormalKeys(unsigned char key, int x, int y)
{

	switch (key) 
	{
	case 'q': // zi clar
		glutIdleFunc(f_zi_clar);
		break;
	case 'w': // zi innorat
		glutIdleFunc(f_zi_inorat);
		break;
	case 'e': // zi ploaie
		glutIdleFunc(f_zi_ploaie);
		break;
	case 'r': // zi vant
		glutIdleFunc(f_zi_vant);
		break;
	case 't': // noapte clar
		glutIdleFunc(f_npt_clar);
		break;
	case 'y': // noapte innorat
		glutIdleFunc(f_npt_inorat);
		break;
	case 'u': // noapte ploaie
		glutIdleFunc(f_npt_ploaie);
		break;
	case 'i': // noapte vant
		glutIdleFunc(f_npt_vant);
		break;
	default:
		break;
	}
	if (key == 27)
		exit(0);
}

void mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
			glutIdleFunc(miscabarca);
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN)
			glutIdleFunc(oprestebarca);
		break;
	default:
		break;
	}
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Barca pe Lac");
	init();
	glutMouseFunc(mouse);
	glutKeyboardFunc(processNormalKeys);
	glutDisplayFunc(deseneazaScena);
	glutReshapeFunc(reshape);

	glutMainLoop();
}