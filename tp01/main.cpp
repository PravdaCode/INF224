//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "image.h"
#include "video.h"
#include "Film.h"
#include "Group.h"
#include "MultiTable.h"
#include "tcpserver.h"
#include <memory>
#include <vector>

using namespace std;
using GroupPtr = std::shared_ptr<Group>;
using ImagePtr = std::shared_ptr<image>;
using VideoPtr = std::shared_ptr<video>;
const int PORT = 3331;

int main(int argc, const char* argv[])
{
    std::cout << "Hello brave new world" << std::endl;

    int* foo = new int[5];

    for (int i = 0; i < 5; i++){
        foo[i] = 2*i;
    }

    int* foo2 = new int[10];

    for (int i = 0; i < 10; i++){
        foo2[i] = 3*i;
    }

    Film * film = new Film("Lenin", "src/", foo, 2000, 5);

    GroupPtr group(new Group("Videos comunistas"));
    ImagePtr im(new image("/flag-lenin-stalin", "src", 10, 10));
    VideoPtr vi(new video("/Lenin", "src", 10));

    group->addMedia(im);
    group->addMedia(vi);

    delete foo;
    delete foo2;

    MultiTable * table = new MultiTable();
    table->addMultim(im);
    table->addMultim(vi);
    table->addGroup(group);

    std::string namesMultim = "";
    for (auto const& element : table->getMultim()) {
      namesMultim += " " + element.first;
    }

    std::string namesGroup = "";
    for (auto const& element : table->getMultim()) {
      namesGroup += " " + element.first;
    }

    table->play("/flag-lenin-stalin");

}
