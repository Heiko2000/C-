#include <iostream>

int main()
{
	float a, umfang, flaeche;
	
	std::cout << "Geben Sie die Kantenlänge a ein: ";
	std::cin >> a;
	
	umfang = 4 * a;
	flaeche = a * a;
	
	std::cout << "Der Umfang des Quadrats beträgt: " << umfang << std::endl;
	std::cout << "Die Fläche des Quadrats beträgt: " << flaeche << std::endl;
	
	return 0;
}