#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
private:
    std::string title;
    std::string artist;
    std::string album;
    int durationInSeconds;

public:
    Song();

    Song(std::string title, std::string artist, std::string album, int durationInSeconds);

    std::string getTitle() const;
    std::string getArtist() const;
    std::string getAlbum() const;
    int getDurationInSeconds() const;

    void setTitle(const std::string& newTitle);
    void setArtist(const std::string& newArtist);
    void setAlbum(const std::string& newAlbum);
    void setDurationInSeconds(int newDuration);

    void printInfo() const;

#endif // SONG_H
