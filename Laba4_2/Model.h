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
	void handlerA() {
		if (A > C)
			C = A;
		if (A > B)
			B = A;
		if (C < B)
		    B = C;
	}
	void handlerC() {
		if (C < A)
			A = C;
		if (A > B)
			B = A;
		if (C < B)
			B = C;
	}
	void handlerB() {
		if (A > B)
			B = A;
		if (C < B)
			B = C;
	}

	void manager(NumericUpDown ^a, NumericUpDown ^b, NumericUpDown ^c, TrackBar ^a1, TrackBar^ b1, TrackBar^ c1, TextBox^ a2, TextBox^ b2, TextBox^ c2){
		a->Value = A;
		c->Value = C;
		b->Value = B;
		
		a1->Value = A;
		c1->Value = C;
		b1->Value = B;

		a2->Text = A.ToString();
		c2->Text = C.ToString();
		b2->Text = B.ToString();

	}

	void SetA(int A) {
		if (A <= 100 && A >= 0) {
			this->A = A;
			handlerA();
		}
	}
	void SetC(int C) {
		if (C <= 100 && C >= 0){
			this->C = C;
		handlerC();
	}
	}
	void SetB(int B) {
		if (B <= 100 && B >= 0) {
			this->B = B;
			handlerB();
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
