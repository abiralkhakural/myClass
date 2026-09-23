#include "Song.h"
#include <iostream>

Song::Song() {
    title = "Initialize Title";
    artist = "Initialize Artist";
    album = "Initialize Album";
    durationInSeconds = 0;
}

Song::Song(std::string title, std::string artist, std::string album, int durationInSeconds) {
    this->title = title;
    this->artist = artist;
    this->album = album;
    this->durationInSeconds = (durationInSeconds > 0) ? durationInSeconds : 0;
}

std::string Song::getTitle() const {
    return title;
}

std::string Song::getArtist() const {
    return artist;
}

std::string Song::getAlbum() const {
    return album;
}

int Song::getDurationInSeconds() const {
    return durationInSeconds;
}

void Song::setTitle(const std::string& newTitle) {
    title = newTitle;
}

void Song::setArtist(const std::string& newArtist) {
    artist = newArtist;
}

void Song::setAlbum(const std::string& newAlbum) {
    album = newAlbum;
}

void Song::setDurationInSeconds(int newDuration) {
    if (newDuration >= 0) {
        durationInSeconds = newDuration;
    }
}

void Song::printInfo() const {
    std::cout << title << " - " << artist << ", Album: " << album << ", Duration: " << durationInSeconds << " seconds" << std::endl;
}
