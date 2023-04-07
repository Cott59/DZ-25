#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>

int polindrom(std::string strok) {
	for (int i = 0; i < strok.length(); i++)
		strok[i] = tolower(strok[i]);
	std::cout << strok << std::endl;
	int j = strok.length() - 1;
	for (int i = 0; i < strok.length() / 2; i++) {
		if (strok[i] != strok[j]) return false;
		j--;
	}
	return true;
}

int sign(std::string str1) {
	std::string str2 = " .,!?";
	int counter = 0;
	for (int i = 0; i < str2.length(); i++)
		for (int j = 0; j < str1.length(); j++)
			if (str2[i] == str1[j])
				counter++;
	return counter;
}

std::string substrr(std::string str,char symbol) {
	int i = -1;
	std::string str2;
	i = str.rfind(symbol);
	if (i < 0) return str2;
	else
		return str2=str.substr(i);
	

}



int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << " Задача 1 \n";
	std::string str = "Hellod or World";
	std::cout << str << std::endl;
	char sym;
	std::cout << " Введите символ из строки :";
	std::cin >> sym;
	std::string counter;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			counter += sym;
	std::cout << counter << std::endl;
	std::cout << "\n";

	std::cout << " Задача 2 \n Введите слово: ";
	std::string str2;
	std::cin>> str2;
	std::cout<<polindrom(str2);
	std::cout << "\n";

	std::cout << " Задача 3 \n ";
	std::string str3="Hello world, bye w...!";
	for (int i = 0; i < str3.length(); i++)
		std::cout << str3[i];
	std::cout << std::endl;
	std::cout <<" Общее кол-во символов припенания в строке = "<< sign(str3);
	std::cout << std::endl;
	std::cout << "\n";

	std::cout << " Задача 4 \n ";
	std::string str4 = "Hello world, bye wo.d!";
	for (int i = 0; i < str4.length(); i++)
		std::cout << str4[i];
	std::cout << std::endl;
	char symm = 'l';
	std::cout<<substrr(str4,symm);
	std::cout << std::endl;
	std::cout << "__________________\n";
	std::cout << std::endl;

	return 0;
}