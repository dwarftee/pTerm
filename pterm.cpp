#include <iostream>
int main() {
	std::cout << "                    :P TERM\n";
    std::cout << "        made by dwarftee(dwarfŧ) and use is completely free\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "to escape run ^C\n";
    std::cout << "\n";
	bool root = false;
	while (true) {
		std::string command = "";
		std::cin >> command;
		if (command == "clear") {
			system("clear");
		} else if (command == "vim") {
			system("vim");
		} else if (command == "neofetch") {
			std::cout << "  ------------           shell: pterm\n";
			std::cout << "  |     _    |           made by: dwarfŧ\n";
			std::cout << "  |    |_|   |           made in: c++\n";
			std::cout << "  |   _______|           libraries used: iostream\n";
			std::cout << "  |   |                  \n";
			std::cout << "  |   |                  \n";
			std::cout << "  |   |                  \n";
			std::cout << "  |   |                  \n";
			std::cout << "  |   |                  \n";
			std::cout << "  |   |                  \n";
			std::cout << "  -----                  \n";
		} else if (command == "sudo"){
			bool root = true;
			std::cout << "root: enabled\n";
		}
	}
}
