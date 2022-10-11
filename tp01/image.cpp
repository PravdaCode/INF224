#include "image.h"

image::image()
{
  Multim();
}

image::image(std::string name, std::string pathname, float x, float y){
  Multim(name, pathname);
  this->x = x;
  this->y = y;

}

void image::exibiteTxt(std::ostream & s) const{
    Multim::exibiteTxt(s);
    s << "Size" << this->getLat() << "x" << this->getLong() << std::endl;

}

float image::getLat() const{ return this->x; }
float image::getLong() const{ return this->y; }

void image::play(){
  std::string cmd = "png " + this->getPath() + "&";
}
