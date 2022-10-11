#ifndef IMAGE_H
#define IMAGE_H
#include "Multim.h"


class image: public Multim{
private:
  float x;
  float y;

public:
  image();
  image(std::string name, std::string pathname, float x, float y);
  ~image();
  float getLat() const;
  float getLong() const;
  void exibiteTxt(std::ostream & s) const;
  void play() override;
};

#endif // IMAGE_H
