#include "CPoint.h"
#include <math.h>
#define PI 3.14

using namespace std; /*standar input/output conteneur dans lequel est défini des méthodes*/
//Constructeur
CPoint::CPoint(float flt_x, float flt_y)
{
	this->m_flt_x = flt_x;
	this->m_flt_y = flt_y;
}

void CPoint::deplace(float val_x, float val_y)
{
	this->m_flt_x += val_x;
	this->m_flt_y += val_y;
}

void CPoint::affiche()
{
	cout << m_flt_x;
	cout << m_flt_y;
}

void CPoint::homothetie(float h_x)
{
	m_flt_x=m_flt_x* h_x;
	m_flt_y=m_flt_y* h_x;
}

void CPoint::rotation(float r_x)
{
	m_flt_x = m_flt_x * cos(r_x * (PI / 180)) - m_flt_y * sin(r_x * (PI / 180));
	m_flt_y = m_flt_x * sin(r_x * (PI / 180)) + m_flt_y * cos(r_x * (PI / 180));
	cout << m_flt_x;
	cout << m_flt_y;
}

float CPoint::abscisse()
{
	return m_flt_x;
}

float CPoint::ordonnee()
{
	return m_flt_y;
}

float CPoint::rho()
{
	return sqrt(m_flt_x * m_flt_x + m_flt_y*m_flt_y);
}

float CPoint::theta()
{
	return atan(m_flt_y / m_flt_x);
}


