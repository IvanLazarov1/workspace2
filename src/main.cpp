#include <iostream>
#include <vector>
#include "Start.h"
#include "Disciplines.h"

using namespace std;

//�� �� ������� ���������� "���������� �� ���� ��������".

//����� ������ (���, �������, ���-����� ����������, ������������),
//���������� (���, �������� ������, ������ �� ������������),
//�������� (����, ���, ����������, ��������� � ������, ��� (������������, ������������, ���������, �����))

//���� ����� ����� ������ �� �� ���� ���������� �� ������������ �� �������� � ��������� ��� ���������� ������.
//������ �� �� ������ ������ ���������.
//�� ��� ������� �� ��� �� �����, �� ��� �� ����������
//(�� �� �������� ������ �������� � ������ �� ���� ���������� � ������������).
//�� �� ������ ��������� �� ������ �� �������.

int main() {

	vector<Start> starts(3);



//	starts.at(0).addAthlet("Ivan", "Ivanov", "Bulgaria", 8.5,"100m");
//	starts.at(1).addAthlet("Petyr", "Petrov", "Bulgaria", 9.5,"100m");
//	starts.at(2).addAthlet("Georgi", "Georgiev", "Bulgaria", 10.5, "100m");



	Start start1;
	Start start2;
	Start start3;

	start1.setType("100m");
	start1.setData("05.05.2017");
	start1.setHour("13:00");

	start2.setType("200m");
	start2.setData("05.05.2017");
	start2.setHour("14:00");

	start3.setType("300m");
	start3.setData("05.05.2017");
	start3.setHour("15:00");



	starts.push_back(start1);
	starts.push_back(start2);
	starts.push_back(start3);




//	start1.addAthlet("Ivan", "Ivanov", "Bulgaria", 9.5, "100m");
//	start1.addAthlet("Petyr", "Petrov", "Bulgaria", 8.5,"100m");
//	start1.addAthlet("Georgi", "Georgiev", "Bulgaria", 7.5,"300m");
//
//	start1.addDisciplines("100m", 8.8, 9.5);
//	start1.addDisciplines("200m", 9.6, 10.7);
//	start1.addDisciplines("300m", 11.8, 10.5);
//
////	start1.disciplineWinner();
////	start1.searchAthlet("Georgi");
////	start1.searchDiscipline("200m");
//	start1.searchByDiscipline("100m");
//
////	start1.setDiscipline("100m" , 8.81,9,12);





	return 0;
}
