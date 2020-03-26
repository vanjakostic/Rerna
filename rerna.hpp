#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED
enum StanjeRerne {iskljucena,ukljucena,pokvarena};

class Rerna{
private:
    StanjeRerne stanje;
    int temperatura;

public:

    Rerna() {stanje=iskljucena; temperatura=0; } //konstruktor bez parametara

    StanjeRerne getStanje()const {return stanje;}
    int getTemperatura() const {return temperatura; }


    bool ukljuci(){
        if(stanje==iskljucena){
            stanje=ukljucena;
            temperatura=20;
            return true;}
        else
            return false;

    }
    bool iskljuci(){
        if(stanje==ukljucena){
            stanje=iskljucena;
            temperatura=0;
            return true;
        }
        else
            return false;
    }

    bool pokvari(){
        if(stanje!=pokvarena){
            stanje=pokvarena;
            temperatura=0;
            return true;
        }
        else
            return false;
    }

    bool popravi(){
        if(stanje==pokvarena){
            stanje=iskljucena;
            temperatura=0;
            return true;
        }
        else
            return false;
    }

    bool pojacaj(){
        if((stanje==ukljucena) &&(temperatura!=220)){
            temperatura+=20;
            return true;
        }
        else
            return false;
    }

    bool smanji(){
        if((stanje==ukljucena) && (temperatura-20>=0)){
            temperatura-=20;
            return true;
        }
        else
            return false;

    }

    friend void IspisRerna(const Rerna &);
};


#endif // RERNA_HPP_INCLUDED
