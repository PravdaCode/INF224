#include "video.h"
#include <iostream>
using namespace std;

video::video(){
  duration = 0;
}

video::video(std::string name, std::string pathname, int dur) : Multim(name,pathname){
  this->duration = dur;
}

video::~video(){
  std::cout << "Delete video" << std::endl;
}

int video::getDuration() const{
  return this->duration;
}

void video::exibiteTxt(std::ostream & s) const{
    Multim::exibiteTxt(s);
    s << "Duration:" << this->getDuration() << std::endl;

}

void video::play() const{
  std::string cmd = "START " + this->getPath() + this->getName() + ".mp4" + " &";
  const char * inpt = cmd.data();

  system(inpt);
}

