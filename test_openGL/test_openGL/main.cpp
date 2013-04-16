//
//  main.cpp
//  test_openGL
//
//  Created by User iMac on 4/16/13.
//  Copyright (c) 2013 User iMac. All rights reserved.
//

#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>

void drawScene();

void drawScene() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_TRIANGLES);
    glColor4f( 1.0f, 0.0f, 0.0f, 1.0f );
    glVertex3f( -0.5f, 0.5f, 0.0f );
    glVertex3f( -0.5f, -0.5f, 0.0f );
    glVertex3f( 0.5f,  -0.5f, 0.0f );
	glEnd();
	glutSwapBuffers();
}

int main(int argc, char * argv[])
{
    glutInit( &argc, argv );
	glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE );
	glutInitWindowSize(500, 500);
	glutCreateWindow( "glut window" );
	glutDisplayFunc( drawScene );
	glutMainLoop();
	return 0;
}

