#include <iostream>
#pragma once

 
class CPoint {
private:
	//donnée membres
	float m_flt_x;
	float m_flt_y; //"m_" veux dire membre

public:
	//Constructeur
	CPoint(float flt_x, float flt_y);


	//Fonction

	void deplace(float val_x, float val_y);
	void affiche();
	void homothetie(float h_x);
	void rotation(float r_x);
	float abscisse();
	float ordonnee();
	float rho();
	float theta();



	




};

