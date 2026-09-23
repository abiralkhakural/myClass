#include "Song.h"
#include <iostream>

int main() {
    Song song1;
    song1.setTitle("Symphonia IX");
    song1.setArtist("Current Joys");
    song1.setAlbum("Wild Heart");
    song1.setDurationInSeconds(181);

    Song song2("Bolt Swallower", "Gulch", "Gulch/Sunami Split", 247);

    std::cout << "Song info" << std::endl;
    song1.printInfo();
    song2.printInfo();
    
    return 0;
}
