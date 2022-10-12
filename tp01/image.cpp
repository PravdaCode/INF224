#include "image.h"
#include "Multim.h"

image::image(std::string name, std::string pathname, float x, float y) : Multim(name, pathname) {
  this->x = x;
  this->y = y;

}

void image::exibiteTxt(std::ostream & s) const{
    Multim::exibiteTxt(s);
    s << "Size " << this->getLat() << " x " << this->getLong() << std::endl;

}

float image::getLat() const{ return this->x; }
float image::getLong() const{ return this->y; }

void image::play() const{
  std::string cmd = "START " + this->getPath() + this->getName() + ".png" + " &";
  const char * inpt = cmd.data();

  system(inpt);
}
