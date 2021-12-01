#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iomanip>
#include <sstream>

#define log(x) std::cout << std::setw(4) << __LINE__ << ": " << x << std::endl

int main()
{
	try
	{
		Bureaucrat b1("b1", 40);
		Bureaucrat b2("b2", 80);
		Form form1("form1", 90, 80);
		Form form2("form2", 50, 80);
		b1.signForm(form1);
		b2.signForm(form1);
		b2.signForm(form2);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form low("test", 160, 160);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form high("test", 0, 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}