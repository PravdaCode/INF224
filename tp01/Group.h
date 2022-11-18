#ifndef GROUP_H
#define GROUP_H
#include "Multim.h"
#include <iostream>
#include <list>
#include <memory>

using namespace std;
using MultimPtr = std::shared_ptr<Multim>;

class Group : public std::list<MultimPtr>{
    private:
        std::string name_group;

    public:
        Group(std::string name);
        Group(std::string name, std::list<Multim> list);
        ~Group();
        std::string getName();
        void exibiteGroup(std::ostream & s) const;
        void addMedia(MultimPtr m);
        void playGroup() const;
        int getSize();
};







#endif // GROUP_H