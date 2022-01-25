#pragma once
#ifndef MODEL_H
#define MODEL_H
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
//ref class MyEventArgs : System::EventArgs {
//public:
//	int value;
//	MyEventArgs(int value) :value(value) {}
//};

ref class Model
{
private:
	int A, B, C;
public:
	System::EventHandler^ observers;
	Model() {
		array<String^>^ string_mas = (System::IO::File::ReadAllText("check1.txt"))->Split(' ', false);
			this->C = Convert::ToInt32(string_mas[2]);
			this->B = Convert::ToInt32(string_mas[1]);
			this->A = Convert::ToInt32(string_mas[0]);
	}
	Model(int A, int B, int C);
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
	void SetA(int A) {
		if (A <= 100 && A >= 0) {
			this->A = A;
			if (this->A > C)
				C = this->A;
			if (this->A > B)
				B = this->A;
			if (C < B)
				B = C;
			System::IO::File::WriteAllText("check1.txt", A.ToString() + " " + B.ToString() + " " + C.ToString());
		}
		observers->Invoke(this, nullptr);
	}
	void SetC(int C) {
		if (C <= 100 && C >= 0){
			this->C = C;
			if (this->C < A)
				A = this->C;
			if (A > B)
				B = A;
			if (this->C < B)
				B = this->C;
			System::IO::File::WriteAllText("check1.txt", A.ToString() + " " + B.ToString() + " " + C.ToString());
		}
		observers->Invoke(this, nullptr);
	}
	void SetB(int B) {
		if (B <= 100 && B >= 0) {
			if (B <= C && B >= A)
				this->B = B;
			System::IO::File::WriteAllText("check1.txt", A.ToString() + " " + B.ToString() + " " + C.ToString());
		}
		observers->Invoke(this, nullptr);
	}
	void UpdateData() {
		if (observers != nullptr)
			observers->Invoke(this, nullptr);
	}

};

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
}
#endif
