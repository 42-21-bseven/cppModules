#include "MateriaSource.hpp"

MateriaSource::MateriaSource () {
	i = 0;
	while (i != 4)
		materials[i++] = NULL;
	i = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	this->operator=(copy);
}

MateriaSource::~MateriaSource () {
	for (int it = 0; it < 4; it++) {
		delete materials[it];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	for (int it = 0; it < 4; it++) {
		if (materials[it])
			delete materials[it];
		materials[it] = other.materials[it]->clone();
	}
	this->i = other.i;
	return *this;
}

void MateriaSource::learnMateria (AMateria* m) {
	if (i == 4)
		i = 0;
	if (materials[i] != NULL)
		delete materials[i];
	materials[i++] = m->clone();
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int it = 0; it < 4; it++) {
		if (materials[it] && materials[it]->getType() == type)
			return (materials[it]->clone());
	}
	return (NULL);
}