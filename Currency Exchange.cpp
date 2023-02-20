#include <iostream>
#include <string>
#include <map> // map library (dictionary)

int main() {
	std::map<std::string, float> currencies = { // Values are as commpared to 1 AUD
		{"USD", 0.69},
		{"EUR", 0.65},
		{"YEN", 92.54},
		{"CAD", 0.93},
		{"CHF", 0.64},
		{"AUD", 1}
	};

	std::cout << "********************************************" << std::endl
		<< "            Currency Exchange" << std::endl
		<< " > USD" << std::endl
		<< " > EUR" << std::endl
		<< " > YEN" << std::endl
		<< " > CAD" << std::endl
		<< " > CHF" << std::endl
		<< " > AUD" << std::endl;

	while (true) {
		std::string firstSelection;
		std::string secondSelection;

		std::cout << "What is your initial currency?" << std::endl;
		std::cin >> firstSelection;
		if (firstSelection == "USD" || firstSelection == "EUR" || firstSelection == "YEN" || firstSelection == "CAD" || firstSelection == "CHF" || firstSelection == "AUD") {
			std::cout << "What is the amount of money for the initial currency?" << std::endl;
			float firstAmount;
			std::cin >> firstAmount;
			
			std::cout << "Currency you would like to convert too?" << std::endl;
			std::cin >> secondSelection;
			if (secondSelection == "USD" || secondSelection == "EUR" || secondSelection == "YEN" || secondSelection == "CAD" || secondSelection == "CHF" || secondSelection == "AUD") {
				firstAmount = firstAmount / currencies[firstSelection]; // Convert firstAmount to AUD
				float finalAmount = firstAmount * currencies[secondSelection]; // Convert firstAmount (Now AUD) to secondSelection
				std::cout << "Your exchanged amount is " << finalAmount << std::endl;
			}
			else { // Error handling
				std::cout << "An error occured after you typed in the currency" << std::endl
					<< " ˃ The only currencies supported are" << std::endl
					<< "   > USD" << std::endl
					<< "   > EUR" << std::endl
					<< "   > YEN" << std::endl
					<< "   > CAD" << std::endl
					<< "   > CHF" << std::endl
					<< "   > AUD" << std::endl
					<< " > You must type the currencies abbreviation typed in all uppercase" << std::endl;
			}
		}
		else { // Error handling
			std::cout << "An error occured after you typed in the currency" << std::endl
				<< " ˃ The only currencies supported are" << std::endl
				<< "   > USD" << std::endl
				<< "   > EUR" << std::endl
				<< "   > YEN" << std::endl
				<< "   > CAD" << std::endl
				<< "   > CHF" << std::endl
				<< "   > AUD" << std::endl
				<< " > You must type the currencies abbreviation typed in all uppercase" << std::endl;
		}
	}
}
