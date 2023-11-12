#include<iostream>
#include<string>

using namespace std;

const int ROWS = 4;
const int COLUMNS = 13;

//function prototypes
int findRowIndex(int thisRow);
int findSeatIndex(string thisSeat);
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


		//rows - DCAB : change by user input
		string row_index = user_input.substr(user_input.length() - 1, 1);
		//cout << "The char is: " << row_index << endl;
		if (row_index > "D") {
			cout << "ERROR - that seat doesn't exists";
			break;
		}
		cout << " seat letter: " << findSeatIndex(row_index) << endl;



		//columns - numbers 1-13
		string num_seat;
		if (user_input.length() == 3) {
			num_seat = user_input.substr(0, 1) + user_input.substr(1, 1);
		}
		else if (user_input.length() == 2) {
			num_seat = user_input.substr(0, 1);
		}

		//bullshit needed for the useless function
		int function_needed_num;
		if (num_seat == "0") {
			function_needed_num = 0;
		}
		else if (num_seat == "1") {
			function_needed_num = 1;
		}
		else if (num_seat == "2") {
			function_needed_num = 2;
		}
		else if (num_seat == "3") {
			function_needed_num = 3;
		}
		else if (num_seat == "4") {
			function_needed_num = 4;
		}
		else if (num_seat == "5") {
			function_needed_num = 5;
		}
		else if (num_seat == "6") {
			function_needed_num = 6;
		}
		else if (num_seat == "7") {
			function_needed_num = 7;
		}
		else if (num_seat == "8") {
			function_needed_num = 8;
		}
		else if (num_seat == "9") {
			function_needed_num = 9;
		}
		else if (num_seat == "10") {
			function_needed_num = 10;
		}
		else if (num_seat == "11") {
			function_needed_num = 11;
		}
		else if (num_seat == "12") {
			function_needed_num = 12;
		}
		else if (num_seat == "13") {
			function_needed_num = 13;
		}

		//errors for seats that dont exist
		if (num_seat < "0" || num_seat > "13") {
			cout << "ERROR - that seat doesn't exist.";
			break;
			findRowIndex(function_needed_num);
		}
		if (num_seat == "13" && row_index == "C") {
			cout << "ERROR - that seat doesn't exist. ";
			break;
		}
		if (num_seat == "13" && row_index == "D") {
			cout << "ERROR - that seat doesn't exist. ";
			break;
		}

		cout << "number seats: " << num_seat;




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
	int function_num;
	if (thisRow < 0 || thisRow > 13) {
		cout << "ERROR - that seat doesn't exist.";
		function_num = thisRow;
		return function_num;
	}
}


//findSeatINdex: given user input, returns approproate column index into seating chart array
//param: thisSeat - char indicating selected seat within row
//return: appropritate index into 2D array is the specified seat is valid, ERROR otherwise
int findSeatIndex(string thisSeat) {
	int row;
	if (thisSeat == "D") {
		row = 0;
	}
	else if (thisSeat == "C") {
		row = 1;
	}
	else if (thisSeat == "B") {
		row = 2;
	}
	else if (thisSeat == "A") {
		row = 3;
	}
	return row;
}



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
