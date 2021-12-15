#pragma once
#ifndef MODEL_H
#define MODEL_H
#include <iostream>

using namespace System::Windows::Forms;
ref class Model
{
public:
	Model();
	Model(int A, int B, int C);
	Model(const Model ^model) {
		this->A = model->A;
		this->B = model->B;
		this->C = model->C;
	}
	~Model();
	int GetA() {
		return A;
	}
	int GetB() {
		return B;
	}
	int GetC() {
		return C;
	}
	/*void handler1() {
		if (A > C)
			C = A;
		if (C < A)
			A = C;
		if (A > B)
			B = A;
		if (C < B)
		    B = C;
	}*/
	void manager(NumericUpDown ^a, NumericUpDown ^b, NumericUpDown ^c, TrackBar ^a1, TrackBar^ b1, TrackBar^ c1){

		a->Maximum = C;
		c->Minimum = A;
		b->Maximum = C;
		b->Minimum = A;

		a1->Maximum = C;
		c1->Minimum = A;
		b1->Maximum = C;
		b1->Minimum = A;

	}

	void SetA(int A, NumericUpDown^ a, TrackBar^ a1, TextBox^ a3) {
		if (A <= C) {
			this->A = A;
			a->Value = A;
			a1->Value = A;
			a3->Text = A.ToString();
		}
		//this->handler1();
	}
	void SetC(int C, NumericUpDown^ a, TrackBar^ a1, TextBox^ a3) {
		if (C >= A) {
			this->C = C;
			a->Value = C;
			a1->Value = C;
			a3->Text = C.ToString();
			//this->handler1();
		}
	}
	void SetB(int B, NumericUpDown^ a, TrackBar^ a1, TextBox^ a3) {
		if (B >= A && B <= C) {
			this->B = B;
			a->Value = B;
			a1->Value = B;
			a3->Text = B.ToString();
			//this->handler1();
		}
	}

private:
	int A, B, C;
	char name;
};

Model::Model()
{
	this->A = 0;
	this->B = 0;
	this->C = 0;
}

Model::Model(int A, int B, int C) :A(A), B(B), C(C)
{
	if (A > 100)
		this->A = 100;
	if (B > 100)
		this->B = 100;
	if (C > 100)
		this->C = 100;
	if (A < 0)
		this->A = 0;
	if (B < 0)
		this->B = 0;
	if (C < 0)
		this->C = 0;

}
Model::~Model()
{
	System::IO::File::WriteAllText("check1.txt", A.ToString() + " " + B.ToString() + " " + C.ToString());
}
#endif
