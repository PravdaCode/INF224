#include "video.h"

video::video(){
  Multim();
}

video::video(std::string name, std::string pathname, int dur){
  Multim(name,pathname);
  this->duration = dur;
}

int video::getDuration() const{
  return this->duration;
}

void video::exibiteTxt(std::ostream & s) const{
    Multim::exibiteTxt(s);
    s << "Duration:" << this->getDuration() << std::endl;

}
