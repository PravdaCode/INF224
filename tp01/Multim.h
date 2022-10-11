#ifndef MULTIM_H
#define MULTIM_H
#include <iostream>


class Multim
{
private:
    std::string name;
    std::string pathname;
public:
    Multim();
    Multim(std::string name, std::string pathname);
    ~Multim();
    std::string getName() const;
    std::string getPath() const;
    void exibiteTxt(std::ostream & s) const;
    void setName(std::string name);
    void setString(std::string path);
    virtual void play();
};

#endif // MULTIM_H
