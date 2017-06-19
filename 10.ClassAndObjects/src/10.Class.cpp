//============================================================================
// Name        : Class.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Dog{
//	Полета на класа.
private:

	string name;
	string breed;
	int age;
	int weight;

public:
	Dog(){
//		Конструктор без параметри
		this->age = 0;
		this->weight = 0;
		this->name = "sharo";
		this->breed = "pumqr";
	}

	Dog(int age, int weight, string name, string breed){
//		Конструктор с параметри
		this->age = age;
		this->weight = weight;
		this->name = name;
		this->breed = breed;
	}

	void setName(string name){
		this->name = name;
	}

	void setAge(int age){
		this->age = age;
	}

	void setBreed(string breed){
		this->breed = breed;
	}

	void setWeight(int weight){
		this->weight = weight;
	}

	int getAge(){
		return this->age;
	}

	int getWeight(){
			return this->weight;
		}

	string getName(){
			return this->name;
		}

	string getBreed(){
			return this->breed;
		}

void showInfo(){
	cout << "Dog age is : " << this->age << endl;
	cout << "Dog weight is : " <<  this->weight << endl;
	cout << "Dog name is : " <<  this->name << endl;
	cout << "Dog breed is : " <<  this->breed << endl;
}
};

int main() {

	int age;
	int weight;
	string name;
	string breed;

	cout << "Enter first dog name : ";
	cin >> name;
	cout << "Enter first dog breed : ";
	cin >> breed;
	cout << "Enter first dog age : ";
	cin >> age;
	cout << "Enter first dog weight : ";
	cin >> weight;



	Dog doggy1(age, weight, name, breed);
	Dog doggy2();
	Dog doggy3();

//	doggy1.setAge(age);
//	doggy1.setBreed(breed);
//	doggy1.setName(name);
//	doggy1.setWeight(weight);

	doggy1.showInfo();

//	cout << "Doggy name is : " << doggy1.getName() << endl;
//	cout << "Doggy age is : " << doggy1.getAge() << endl;
//	cout << "Doggy breed is : " << doggy1.getBreed() << endl;
//	cout << "Doggy weight is : " << doggy1.getWeight() << endl;

	Dog dogArr[3];
	dogArr[0] = doggy1;
	dogArr[1] = doggy2;
	dogArr[2] = doggy3;

	for(int i = 0; i < 3; i++){
		dogArr[i].showInfo();
	}
	return 0;
}
