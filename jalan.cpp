
void jalan() {
	
	glColor3f(1.0,0.75,0.0);
	glBegin(GL_QUADS);
	
	//Bagian Kanan Jalan
	glPushMatrix();
	glTranslatef(0.0,0.0,0.0);
	glColor3f(0.0,0.7,0.0);
	glVertex3f(-100,-0.1,-100);
	glVertex3f(-100,-0.1,-10.0);
	glVertex3f(100,-0.1,-10.0);
	glVertex3f(100,-0.1,-100);

    glColor3f(0.7,0.7,0.7);
	glVertex3f(-100,-0.1,-10.0);
	glVertex3f(-100,-0.1,0.10);
	glVertex3f(100,-0.1,-10.0);
	glVertex3f(100,-0.1,0.10); 
	glVertex3f(100,-0.1,- 10.0);
	
	// Garis tengah jalan
	glColor3f(1.0,1.0,1.0);
	glVertex3f(-100,-0.1,0.10);
	glVertex3f(-100,-0.1,0.25);
	glVertex3f(100,-0.1,0.25);
	glVertex3f(100,-0.1,0.10);
	
	//Bagian Kiri Jalan
    glColor3f(0.7,0.7,0.7);
	glVertex3f(-100,-0.1,0.25);
	glVertex3f(-100,-0.1,0.10);
	glVertex3f(100,-0.1,10.0);
	glVertex3f(100,-0.1,0.25);
	
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-100,-0.1,10.0);
	glVertex3f(-100,-0.1,100);	
	glVertex3f(100,-0.1,100);	
	glVertex3f(100,-0.1,10.0);
	glPopMatrix();
	glPopMatrix();
	
	glEnd();
	
}
