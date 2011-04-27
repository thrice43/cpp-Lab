#include <fstream>
#include <iostream>
using namespace std;

struct Emp{
	string ID ;
	string first;
	string last;
	int salary ; 
	string rank ;
};

void getData(Emp wrkr[50], int &cnt);
void printData(Emp wrkr[50], int &cnt);

int main(){
	int cnt = 0 ; 
	Emp employee[50] ; 
	getData(employee, cnt );
	printArray(employee,cnt);	
}

void getData(Emp wrkr[50], int &cnt){
	ifstream infile ;
	infile.open("file");
	int cnt = 0 ;
 	//Emp employee[50] ; 
	infile >> wrkr[cnt].ID ; 
	while (infile){ // if infilee has stream, getfirst element assign the rest
		infile >>  wrkr[cnt].first >> wrkr[cnt].last >> wrkr[cnt].salary >> wrkr[cnt].rank ; 
		cout << wrkr[cnt].first << "\n" << wrkr[cnt].last<< "\n" << wrkr[cnt].salary <<"\n" << wrkr[cnt].rank ; 
		cnt++ ; //update count
	}
	
	infile.close();
}
