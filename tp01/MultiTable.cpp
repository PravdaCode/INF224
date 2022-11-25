#include "MultiTable.h"

MultiTable::MultiTable()
{
}

void MultiTable::addGroup(GroupPtr group)
{
    tableGroup[group->getName()] = group;
}

void MultiTable::addMultim(MultimPtr multim)
{
    tableMulti[multim->getName()] = multim;
}

void MultiTable::searchMultim(std::string name)
{
    auto it = tableMulti.find(name);
    if (it == tableMulti.end())
    {
        std::cout << "File not found" << std::endl;
    }
    else
    {
        std::cout
            << "name: " << it->first
            << std::endl;
        it->second->exibiteTxt(cout);
    }
}

void MultiTable::searchGroupe(std::string name)
{
    auto it = tableGroup.find(name);
    if (it == tableGroup.end())
    {
        std::cout << "File not found" << std::endl;
    }
    else
    {
        std::cout
            << "name: " << it->first
            << std::endl;
        it->second->exibiteGroup(cout);
    }
}

void MultiTable::play(std::string name){
    bool found = false;

    for (auto const& element : tableMulti) {
      if(element.first==name){
        found = true;
        element.second->play();
      }
    }

    if (!found)
    {
        std::cout << "File not found" << std::endl;
    }


}

MultimDict MultiTable::getMultim(){
    return tableMulti;
}