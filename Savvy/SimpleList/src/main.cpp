#include<iostream>
#include<string>
#include <vector>
using namespace std;

// Declaration of Functions
void print_menu(string name);
void print_list();
void add_item();
void delete_item();

// Declaration of Global Variables
vector<string> list;
string name;

//Checks for Username and exits if none
int main(int arg_count, char *args[]){

	if(arg_count > 1) {
		name = string(args[1]);
		print_menu(name);
	}
	else {
		cout << "Username not supplied.. exiting the program" << endl;
	}

	return 0;
}

//Prints menu and gathers users choice
void print_menu(string name){
	int choice;

	cout << "***************\n";
	cout << " 1 - Print list.\n";
	cout << " 2 - Add to list.\n";
	cout << " 3 - Delete from list.\n";
	cout << " 4 - Quit.\n";
	cout << " Enter your choice and press return/enter.\n";

	cin >> choice;

	if(choice == 4 ) {
		exit (0);
	}
	else {
		cout << "Sorry choice hasn't been implemented.\n";
	}
}

//Adds an item to the vectorList
void add_item() {

	cout << "\n\n\n\n\n\n\n\n";
	cout << "*** Add Item ***";
	cout << "Type in an item and press enter: \n";

	string item;
	cin >> item;

	list.push_back(item);

	cout << "Successfully added an item to the list \n\n\n";
	cin.clear();

	print_menu(name);

}
