#include "Group.h"
#include "Multim.h"
#include <iostream>

using namespace std;

Group::Group(std::string name){
    this->name_group = name;
}

Group::~Group(){
    
}

void Group::exibiteGroup(std::ostream & s) const{
    s << "Name of group: " << this->name_group <<std::endl;

    for(auto & it : *this) it->exibiteTxt(s);
    
}

void Group::playGroup() const{

    for(auto & it : *this) it->play();
}


void Group::addMedia(MultimPtr m){
    this->push_back(m);
}

int Group::getSize(){
    return this->size();
}

std::string Group::getName(){
    return name_group;
}

