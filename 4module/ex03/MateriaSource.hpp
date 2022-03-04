#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource{
private:
	AMateria *materials[4];
	int i;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	~MateriaSource();

	MateriaSource& operator = (const MateriaSource &other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const &type);
};


#endif
