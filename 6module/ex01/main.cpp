#include <iostream>

struct Data{

	bool animal;
	std::string kind;
	std::string name;
	Data(bool value, std::string kind, std::string str): animal(value), kind(kind), name(str) {}
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(){
	Data Dog(true, "Corgi", "shareg");

	std::cout << "Data address = " << &Dog << std::endl;
	std::cout << "serialize address = " << serialize(&Dog) << std::endl;
	std::cout << "deserialize address = " << deserialize(serialize(&Dog)) << std::endl;

	return (0);
}