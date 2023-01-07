
#include <iostream>
int main() {
	std::string command = "";
	std::cin >> command;
	std::cout << "now running: " << command << "\n";
	if (command == "clear") {
		system("clear");
		system("./cmd");
	} else if (command == "wim") {
		system("nano");
		system("./cmd");
	}
}
