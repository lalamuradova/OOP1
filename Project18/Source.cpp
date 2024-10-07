#include<iostream>
using namespace std;
/*
OOP-de classlardan ve ya structdan istifade olunur
bu structuralar vasitesile obyektler yaranir ve bu obyektler
arasinda elaqeler qurulur
Obyekt - clasin bir numunesidir
OOP bir paradigmadir

class ve struct arasinda ferq
struct - default publicdir
class - default privatedir
*/
//struct Person {
//	string name;
//	int age;
//};


//class Person {
//	string name;
//	int age;
//};

//class daxilinde special methodlar var. biz cagirmiriq ozu lazim zaman cagrilir
//Constructor- obyekt yarananda ise dusur
//4 novu var:
//1. Default
//2. With parameters
//3. Copy
//4. Move 


//class Person {
//public:
//	string name;
//	int age;
//
//	Person(string _name,int _age) { //with parameter constructor
//		name = _name;
//		age = _age;
//	}
//
//
//};

/*
OOP-de 4 prinsip var
1. Encapsulation (access modifier public,private,protected)
2. Inheritance 
3. Polymorphysm
4. Abstraction

*/

//Encapsulation - Setter Getter lazim
//class Student {
//	string fullname;
//	string group_name;
//	int age;
//
//public:
//	Student(string fullname, string group_name, int age) {
//		//this - pointerdir ve cari obyekti gosterir
//		this->fullname = fullname;
//		this->group_name = group_name;
//		this->age = age;
//	}
//
//	string Get_Fullname() {
//		return fullname;
//	}
//
//	string Get_GroupName() {
//		return group_name;
//	}
//
//	int Get_Age() {
//		return age;
//	}
//
//	void Set_Age(int age) {
//		if (age > 13 && age < 55) {
//			this->age = age;
//		}
//		else {
//			cout << "Age can not be change" << endl;
//		}
//	}
//
//	//Obyekt silinen zaman ise dusur/tilda ile yazilir
//	~Student() {
//		cout << "Deleted " << fullname << endl;
//	}
//};


class Doctor {
	char* fullname;
	int age;

public:
	Doctor() {
		fullname = new char[20] {"Anonim"};
		age = 0;
	}

	~Doctor() {
		delete[] fullname;
		cout << "Doctor silindi"<< endl;
	}
};

void main() {

	Doctor doctor1;
	Doctor doctor2;



	//Person p;  //default constructor ise dusur
	//p.name = "Hesen";
	//p.age = 56;

	/*Person p("Mahmud", 56);*/
	
	//Student student1("Mehemmedeli", "FSDE", 19);
	///*cout << student1.Get_Fullname() << endl;*/

	//Student student2("Aslan", "FSDE", 19);
	//Student student3("Nurane", "FSDE", 19);
	//Student student4("AliHuseyn", "FSDE", 19);
	
	/*
	2 cur tip var
	bilt-in : int,float,char
	user define- class ve ya struct vasitesile yaratdigimiz tipler
	
	*/


	/*
	Point class yaradin. x ve y field yaradin
	Encapsulation, construct kecdiyimiz her seyden istifade edin
	print methoduda yaradin
	*/

}