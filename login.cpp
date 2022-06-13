#include <iostream>
#include <string>


void login() {
	std::string accept_username[] = {"user_1", "user_2"};
	std::string accept_password[] = {"password1", "password2"};

	std::string insert_username;
	std::string insert_password;
	bool present = false;

	std::cout << "insert username: ";
	std::cin >> insert_username;

	std::cout << "insert password: ";
	std::cin >> insert_password;

	for (std::string a : accept_username) {
		if (a == insert_username) {
			present = true;

		}
	}
	if (present) {
		std::cout << "username accepted.\n";

	}
	else
	{
		std::cout << "username not accepted.\n";
	}

	for (std::string b : accept_password) {
		if (b == insert_password) {
			present = true;

		}
	}
	if (present) {
		std::cout << "password accepted.";

	}
	else
	{
		std::cout << "password not accepted.";
	}
}
int main() {
	login();
}