#include<iostream>
#include<string>

using namespace std;

class article{
    protected:
    float rating;
    string title;
    public:
        article(string s , float r){
            rating = r;
            title = s;
        }
        virtual void display()=0;
};

class vid_article : public article{
    float videolength;
    public:
        vid_article(float vl, string s, float r):article(s,r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing video on topic "<<title<<endl;
            cout<<"Rating: "<<rating<<" out of 5 star"<<endl;
            cout<<"Length of the video is "<<videolength<<" minutes"<<endl;
        }
};

class txt_article : public article{
    int textlength;
    public:
        txt_article(int tl, string s, float r):article(s,r){
            textlength = tl;
        }
        void display(){
            cout<<"This is an amazing article on topic "<<title<<endl;
            cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Number of words in this article is "<<textlength<<endl;
        }
};
int main(){
    string title;
    float rating, videolength;
    int totaltext;
    
    // Atributes for Article video -->
    title = "Sukhoi SU-57";
    rating = 4.6;
    videolength = 10; 
    vid_article video(videolength, title, rating);
    
    // Atributes for Text Article -->
    title = "Sukhoi SU-57";
    rating = 4.8;
    totaltext = 100;
    txt_article textarticle(totaltext, title, rating);

    // Pointers-->
    article *pointer[2];

    pointer[0] = &video;
    pointer[1] = &textarticle;

    pointer[0]->display();
    cout<<"-----#----------#----------#----------#----------"<<endl;
    pointer[1]->display();
    return 0;
}