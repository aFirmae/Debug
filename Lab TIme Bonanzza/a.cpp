#include<iostream>
#include<string>
using namespace std;

class play
{
private:
    int play_code;
    char play_title[20];
    float duration;
    int no_of_scenes;

public:
    play()
    {
        duration = 45;
        no_of_scenes = 5;
    }

    // Setters
    void newplay(int play_code, char* play_title)
    {
        this->play_code = play_code;
        strcpy(this->play_title, play_title);
    }

    void MoreInfo(float duration, int no_of_scenes)
    {
        this->duration = duration;
        this->no_of_scenes = no_of_scenes;
    }

    int DisplayPlayDetails()
    {
        cout << "Play Code: " << play_code << endl;
        cout << "Play Title: " << play_title << endl;
        cout << "Duration: " << duration << " minutes" << endl;
        cout << "Number of Scenes: " << no_of_scenes << endl;
    }
};

int main()
{
    play p;
    p.newplay(10, "nilasis");
    p.MoreInfo(120, 10);
    p.DisplayPlayDetails();

    return 0;
}