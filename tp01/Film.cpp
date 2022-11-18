#include "Film.h"
#include "video.h"
#include <iostream>

using namespace std;

Film::Film() : video(){
    chapters = nullptr;
    num_c = 0;
}

Film::Film(std::string name, std::string pathname, int * chapt, int dur, int num) : video(name, pathname, dur){
    this->num_c = num;

    this->chapters = new int[num];
    for (int i = 0; i < num; i++){ this->chapters[i] = chapt[i];}
}

void Film::exibiteTxt(std::ostream & s) const  {
    video::exibiteTxt(s);
    s << "Num of chapters: " << this->num_c;

    for (int i = 0; i < this->num_c; i++){
        s << this->chapters[i] << " ";
    }

}

Film::~Film() {
    delete[] this->chapters;
}

void Film::changeChapters(int * chapt, int n){
    // Create a independent copy and delete the old one
    delete [] this->chapters;
    this->exibiteTxt(std::cout);
    this->chapters = new int[n];
    this->num_c = n;

    for (int i = 0; i < n; i++){ this->chapters[i] = chapt[i]; }
}

int Film::getNum(){
    return this->num_c;
}

int * Film::getChapt(){
    int * copyChapt = new int[this->getNum()];
    
    for (int i = 0; i < this->getNum(); i++){copyChapt[i] = this->chapters[i];};
    return copyChapt;
}