#include<iostream>
using namespace std;

int main(){
	int count[5] = {0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		if(grade == '0') {
			break;
		}else if(grade == 'A'){
            count[0]++; 
			i++;  
		}else if(grade == 'B'){
		    count[1]++;
			i++;
		}else if(grade == 'C'){
            count[2]++;
            i++;   
		}else if(grade == 'D'){
            count[3]++;
            i++;   
		}else if(grade == 'F'){
            count[4]++;
            i++;   
		}else{ 
			cout << "Wrong input. Please input again.\n";
		} 

	}while(true);
	cout << "In total "<< i-1 << " students. " << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}
