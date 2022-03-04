#include "Form.hpp"
#include "Intern.hpp"

int main() {
    Intern someRandomIntern;
    Form* rrf;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Someone Vogon");
    std::cout << *rrf << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Presidential Gardener");
    std::cout << *rrf << std::endl;
    delete rrf;
    rrf = someRandomIntern.makeForm("incorrect form", "Somebody");
    std::cout << *rrf << std::endl;
}