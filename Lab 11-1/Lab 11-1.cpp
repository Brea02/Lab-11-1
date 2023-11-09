#include<iostream>
#include<string>

using namespace std;

const int ROWS = 4;
const int COLUMNS = 13;

//function prototypes
int findRowIndex(int thisRow);
//int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);




int main() {
	string user_input;
	// ()

	//creating seat chart
	char seats[COLUMNS][ROWS] = {
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{'D', 'C', 'B', 'A'},
		{' ', ' ', 'B', 'A'},
	};
	displaySeatColumn(seats, 0);
	displaySeatColumn(seats, 1);
	cout << endl;
	cout << "                  1 1 1 1" << endl;
	cout << "1 2 3 4 5 6 7 8 9 0 1 2 3" << endl;
	cout << endl;
	displaySeatColumn(seats, 2);
	displaySeatColumn(seats, 3);

	//asking for input
	while (true) {
		cout << endl;
		cout << "Enter a seat or Q to quit: ";
		cin >> user_input;
		if (user_input == "Q") { break; }

		/*
		//row or DCBA
		string row_index = user_input.substr(user_input.length() - 1, 1);
		if (row_index != "D" || row_index != "C" || row_index != "B" || row_index != "A") {
			cout << "ERROR - that seat doesn't exists";
			break;
		}
		int row_num;
		if (row_index == "D") {
			row_num = 0;
			findRowIndex(row_num);
		}
		if (row_index == "C") {
			row_num = 1;
			findRowIndex(row_num);
		}
		if (row_index == "B") {
			row_num = 2;
			findRowIndex(row_num);
		}
		if (row_index == "A") {
			row_num = 3;
			findRowIndex(row_num);
		}
		*/




	}


}


//displaySeatColumn: given 2D mapping of seating chart in form [columns][rows], will print out column of seats on one row
//param: seats - ref to a 2D char array
//param: ref to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column) {
	for (int i = 0; i < 13; i++) {
		cout << seats[i][column] << " ";
	}
	cout << endl;
	return;
}


//findRowIndex: given user input, returns appropriate row index into array
//param: thisRow - int indicating row selected by user
//return: appropriate index into D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow) {
}

/*
//findSeatINdex: given user input, returns approproate column index into seating chart array
//param: thisSeat - char indicating selected seat within row
//return: appropritate index into 2D array is the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat) {

}
*/


/*
//displaySeatColumn: given 2D mapping of seating chart in form [columns][rows], will print out column of seats on one row
//param: seats - ref to a 2D char array
//param: ref to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column) {
	for (int i = 0; i < ROWS; i++) {
		cout << seats[i][column];
	}

	//all of below is separate thing but wont comment out if not using this
	for (int i = 0; i < ROWS; i++) {
		if (i == 2) {
			cout << endl;
			cout << "                  1 1 1 1" << endl;
			cout << "1 2 3 4 5 6 7 8 9 0 1 2 3" << endl;
			cout << endl;
		}
		for (int j = 0; j < COLUMNS; j++) {
			if (j == 12) {
				cout << seats[i][j] << " " << endl;
			}
			else {
				cout << seats[i][j] << " ";

			}
		}
	}

	return;
}
*/
