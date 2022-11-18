#ifndef FILM_H
#define FILM_H
#include "video.h"
#include <iostream>

class Film: public video{
    private:
        int * chapters;
        int num_c;

    public:
        Film();
        Film(std::string name, std::string pathname, int * chapt, int dur, int num);
        ~Film() final;
        void exibiteTxt(std::ostream & s) const final;
        void changeChapters(int * chapt, int n);
        int getNum();
        int * getChapt();

};


#endif // FILM_H