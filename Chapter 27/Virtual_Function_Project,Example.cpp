#include<iostream>
#include<string>

using namespace std;
class Article{
    protected:
    float rating;
    string tittle;
    public:
        Article(float r , string t){
            rating = r;
            tittle = t;
        }
        virtual void display()=0;    
};

class Article_vid : public Article{
    float video_lnth;
    public:
        Article_vid(float r , float l , string t):Article(r , t){
            video_lnth = l;
        }
        void display(){
            cout<<"This is an amazing Video on Topic: "<<tittle<<endl;
            cout<<"Rating: "<<rating<<" out of 5 star "<<endl;
            cout<<"Length of this video is "<<video_lnth<<endl;
        }
};

class Article_txt : public Article{
    int words;
    public:
        Article_txt(int w , float r ,string t):Article(r,t){
            words = w;
        }
        void display(){
            cout<<"This is an amazing article on topic "<<tittle<<endl;
            cout<<"Rating: "<<rating<<" out of 5 star"<<endl;
            cout<<"Total number of words in this article is "<<words<<endl;
        }
};

int main(){
    int text = 100;
    float rating = 4.5 , length = 10;
    string tittle = "Sukhoi 57";

    Article_txt article(text, rating, tittle);
    Article_vid videoo(rating, length, tittle);

    Article *pointer[2];

    pointer[0]= &videoo;
    pointer[1]= &article;
    
    pointer[0]->display();
    pointer[1]->display();
    return 0;
}