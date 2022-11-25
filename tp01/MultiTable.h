#ifndef MULTITABLE_H
#define MULTITABLE_H

#include <iostream>
#include <map>
#include <memory>
#include "Multim.h"
#include "Group.h"

using MultimPtr = std::shared_ptr<Multim>;
using GroupPtr = std::shared_ptr<Group>;
using GroupDict = std::map<std::string,GroupPtr >;
using MultimDict = std::map<std::string,MultimPtr >;

class MultiTable{

    private:
        MultimDict tableMulti;
        GroupDict tableGroup;

    public:
        MultiTable();
        ~MultiTable();
        void addMultim(MultimPtr multim);
        void addGroup(GroupPtr group);
        void searchMultim(std::string name);
        void searchGroupe(std::string name);
        MultimDict getMultim();
        void play(std::string name);

};








#endif