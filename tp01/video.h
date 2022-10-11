#ifndef VIDEO_H
#define VIDEO_H
#include "Multim.h"


class video: public Multim{

  private:
    int duration;

  public:
    video();
    video(std::string name, std::string pathname, int dur);
    ~video();
    int getDuration() const;
    void exibiteTxt(std::ostream & s) const;
};



#endif // VIDEO_H
