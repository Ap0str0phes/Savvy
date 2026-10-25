#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

class Database{
	public:

		Database(){
			//constructor
		}
		~Database(){
			//destuctor
		}


		vector<string> list;
		string name;
	
		void write();
		void read();

	private:
	protected:
			
};


