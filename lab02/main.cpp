#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


#define STUDENTS_COUNT 10

class Student {
	private:
		string studentNumber;
		string studentName;
		string studentFamilyName;
		bool studentState;
		
	public:		
		Student(string studentNumber, string studentName, string studentFamilyName, bool studentState = true) {
			this->studentNumber = studentNumber;
			this->studentName = studentName;
			this->studentFamilyName = studentFamilyName;
			this->studentState = studentState;
		}
		
		string getStudentNumber() {
			return this->studentNumber;
		}
		
		string getStudentName() {
			return this->studentName;
		}
		
		string getStudentFamilyName() {
			return this->studentFamilyName;
		}
		
		bool getStudentState() {
			return this->studentState;
		}
		
		
};

string NameTab[10] = {"Zdzis³aw", "Jan", "Robert", "Ryszard", "Stefan", "Artur", "Anna", "Zofia", "Krzysztof", "Dorota"};
string FamilyNameTab[10] = {"Kowalski", "Nowak", "Baranowski", "Osiatynski", "Rodak", "Zawadzki", "Wyszynska", "Kowalska",  "Roseblum", "Malec"};

string getRandomStudentName(){
	string randomName = NameTab[rand() % 10];
	return randomName;
}

string getRandomStudentFamilyName(){
	string randomFamilyName = FamilyNameTab[rand() % 10];
	return randomFamilyName;
}

bool getRandomStudentState(){
	return rand() % 1;
}

string getRandomStudentNumber() {
	ostringstream ss;
	int randomNumber = rand() % 2000 + 37000;
	ss << randomNumber; 
	return ss.str();
}

int main() {
	system("chcp 1250"); 
	system("CLS");
	vector<Student> students;
	
	for(int i = 0; i < STUDENTS_COUNT; i++) {
		Student student(getRandomStudentNumber(), getRandomStudentName(), getRandomStudentFamilyName(),getRandomStudentState());
		students.push_back(student);
	}
	
	cout  << "Students group have been filled." << endl << endl;
	cout <<"Index\tName\t\tFamily Name"<<endl << endl;
	
	for(int i = 0; i < students.size(); i++) {
		cout << students.at(i).getStudentNumber() + " \t" + students.at(i).getStudentName() + "     \t" + students.at(i).getStudentFamilyName() << endl;
	}

	return 0;
}
