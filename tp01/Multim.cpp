#include "Multim.h"
#include <iostream>
#include <sstream>


Multim::Multim(){
    this->name = "Test";
    this->pathname = "test.png";
}

Multim::~Multim(){
    std::cout << "Destroy Multimedia" << std::endl;
}

Multim::Multim(std::string name, std::string pathname)
{
    this->name = name;
    this->pathname = pathname;
}

void Multim::exibiteTxt(std::ostream & s) const{
    s << this->getName() << " " << this->getPath() << std::endl;

}

void Multim::play() const{
    std::cout << this->getName() << " " << this->getPath() << std::endl;
}

std::string Multim::getName() const{
    return this->name;
}
std::string Multim::getPath() const{
  return this->pathname;
}

void Multim::setName(std::string name){
    this->name = name;
}


void Multim::setString(std::string path){
    this->pathname = path;
}
