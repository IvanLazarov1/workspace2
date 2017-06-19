#include <iostream>
#include "Competition.h"
#include "Start.h"
#include "Disciplines.h"

using namespace std;

//Да се направи приложение "Съзтезание по лека атлетика".
//Имаме атлети (име, фамилия, най-добро постижение, националност),
//дисциплини (име, световен рекорд, рекорд на съзтезанието),
//стартове (дата, час, дисциплина, участници в старта, тип (квалификация, четвъртфинал, полуфинал, финал))
//След всеки старт трябва да се пази информация за постиженията на атлетите и съответно кой продължава напред.
//Накрая да се изведе крайно класиране.
//Да има търсене по име на атлет, по име на дисциплина
//(да се извеждат всички стартове и атлети за тази дисциплина в съзтезанието).
//Да се изведе класиране по медали по държави.

int main() {



	competition1.addStarts("09.05.2017", "11:03", "100m");
	competition1.addStarts("09.05.2017", "12:03", "200m");
	competition1.addStarts("09.05.2017", "13:03", "300m");

	competition1.addAthlet("Georgi","Georgiev","Bulgaria", 8.9, "100m");
	competition1.addAthlet("Ivan","Ivanov","Bulgaria", 7.9, "100m");
	competition1.addAthlet("Petyr","Petrov","Bulgaria", 10.9, "100m");

	competition1.searchAthlet("Ivan");
//	competition1.disciplineWinner();
//	competition1.addDisciplines("200m", 6.5, 8.6);
//	competition1.searchDiscipline("200m");
//	competition1.searchByDiscipline("100m");


//	starts.at(0).addAthlet("Ivan", "Ivanov", "Bulgaria", 8.5,"100m");
//	starts.at(1).addAthlet("Petyr", "Petrov", "Bulgaria", 9.5,"100m");
//	starts.at(2).addAthlet("Georgi", "Georgiev", "Bulgaria", 10.5, "100m");

//	Start start1;
//	Start start2;
//	Start start3;

//	start1.setType("100m");
//	start1.setData("05.05.2017");
//	start1.setHour("13:00");
//
//	start2.setType("200m");
//	start2.setData("05.05.2017");
//	start2.setHour("14:00");
//
//	start3.setType("300m");
//	start3.setData("05.05.2017");
//	start3.setHour("15:00");

//	start1.addAthlet("Ivan", "Ivanov", "Bulgaria", 9.5, "100m");
//	start1.addAthlet("Petyr", "Petrov", "Bulgaria", 8.5,"100m");
//	start1.addAthlet("Georgi", "Georgiev", "Bulgaria", 7.5,"100m");
//
//	start1.addDisciplines("100m", 8.8, 9.5);
//	start1.addDisciplines("200m", 9.6, 10.7);
//	start1.addDisciplines("300m", 11.8, 10.5);

//	start1.disciplineWinner();
//	start1.searchAthlet("Georgi");
//	start1.searchDiscipline("200m");
//	start1.searchByDiscipline("100m");
//
//	start1.setDiscipline("100m" , 8.81,9,12);

	return 0;
}
