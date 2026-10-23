#include"shell.h"

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  while (true) {
    std::cout << "$ ";
    std::string input;
    std::getline(std::cin, input);

    if (input.substr(0,4) == "exit") {
      break;
    }
    else if (input.substr(0, 5) == "echo ") {
	    std::cout << input.substr(5) << std::endl;
    }
    else if (input.substr(0, 5) == "type " && input.substr(5, 4) == "echo"){
	    std::cout << "echo is a shell builtin \n";
    }	
    else if (input.substr(0, 5) == "type " && input.substr(5, 4) == "exit"){
	    std::cout << "exit is a shell builtin \n";
    }	
    else if (input.substr(0, 5) == "type " && input.substr(5, 4) == "type"){
	    std::cout << "type is a shell builtin \n";
    }	
    else if (input.substr(0,4) == "type" && input.substr(5) != "exit" &&
		    input.substr(5) != "echo" && input.substr(5) != "type"){
	    std::cout << input.substr(5) << ": not found" << std::endl;
	}
    else {
    std::cout << input << ": command not found" << std::endl;
    }
  }
}




