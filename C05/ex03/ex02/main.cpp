#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iomanip>
#include <sstream>

#define log(x) std::cout << std::setw(4) << __LINE__ << ": " << x << std::endl

int main()
{
	try
	{
		Bureaucrat b1("bureacrat1", 5);
		// Bureaucrat b2("bureacrat1", 25);
		ShrubberyCreationForm a0("sform");
		RobotomyRequestForm a1("rfomr1");
		// PresidentialPardonForm p("pform");
		a0.beSigned(b1);
		a0.execute(b1);
		a1.beSigned(b1);
		a1.execute(b1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}