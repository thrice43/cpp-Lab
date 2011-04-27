#include <iostream>
#include <fstream>

using namespace std;

enum Title {ENG1, ENG2, ENG3, MGR};
struct Employee {
        int eId;
        string fName;
        string lName;
        Title status;
        int salary;
};

void getData(Employee e[50], int& cnt);
void printArray(Employee e[50], int cnt);
int main () {
        Employee employees [50];
        int emCount;
        getData(employees, emCount);
        printArray(employees, emCount);
}
void printArray(Employee e[50], int cnt) {
        for (int i=0; i<cnt; i=i+1) {
                cout << e[i].eId << " " << e[i].fName << " "
                        << e[i].lName << " " << e[i].salary;
                cout << endl;
        }
}
void getData(Employee e[50], int& cnt) {
        ifstream in;
        in.open ("employeeData");
        cnt = 0;
        int id;
        in >> id;
        while (in) {
                e[cnt].eId = id;
                in >> e[cnt].fName >> e[cnt].lName >> e[cnt].salary;
                string temp;
                in >> temp;
                cnt = cnt+1;
                in >> id;
        }
}
    
