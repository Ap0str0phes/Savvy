#pragma once

#include<iostream>
#include<vector>
using namespace std;

class List{
	public:

		List(){
			//constructor
		}
		~List(){
			//destuctor
		}

	//function prototype
		void print_menu();
		void print_list();
		void add_item();
		void delete_item();

		vector<string> list;
		string name;
	
	private:
	protected:
			
};


