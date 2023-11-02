#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main() {
	int choice, issueDate, returnDate;
	string bookTitle;
	cout << "Library Management System" << endl;
	cout << "1. Borrow a book" << endl;
	cout << "2.Return a book" << endl;
	cout << "Select any Option: ";
	cin >> choice;
	cin.ignore();
	int days;
	if (choice == 1) {

		cout << "Enter the title of book: ";
		getline(cin, bookTitle);

		cout << "Enter the number of days you want to borrow the book? : ";
		cin >> days;
		cout << "Book Issued for " << days << " Thank you! ";

	}
	else if (choice == 2) {
		cout << "Book issue date : ";
		cin >> issueDate;
		cout << "Book Return date : ";
		cin >> returnDate;
		if ((returnDate - issueDate) > days)
			cout << "You were unable to return the book on time You are charged " << returnDate - issueDate << " $ ";


	}
	return 0;
}