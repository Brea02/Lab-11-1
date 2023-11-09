#include<iostream>
#include<string>

using namespace std;

//function prototypes
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

const int ROWS = 4;

int main() {
	cout << "Enter a seat or Q to quit: ";


}

//findRowINdex: given user input, returns appropriate row index into array
//param: thisRow - int indicating row selected by user
//return: appropriate index into D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow) {

}

//findSeatINdex: given user input, returns approproate column index into seating chart array
//param: thisSeat - char indicating selected seat within row
//return: appropritate index into 2D array is the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat) {

}

//displaySeatColumn: given 2D mapping of seating chart in form [columns][rows], will print out column of seats on one row
//param: seats - ref to a 2D char array
//param: ref to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column) {

}
