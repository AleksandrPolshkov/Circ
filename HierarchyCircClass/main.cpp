#include <iostream>
#include <string>

class Performer {
public:
    virtual void perform() = 0;
};

class Clown : public Performer {
public:
    void perform() override {
        std::cout << "Клоун вытворяет смешные номера!" << std::endl;
    }
};

class Acrobat : public Performer {
public:
    void perform() override {
        std::cout << "Акробат выполняет потрясающие трюки!" << std::endl;
    }
};

class AnimalTrainer : public Performer {
public:
    void perform() override {
        std::cout << "Дрессировщик выступает с дрессированными животными!" << std::endl;
    }
};

class Circus {
public:
    Circus(const std::string& circusName) : name(circusName) {
        performers[0] = new Clown();
        performers[1] = new Acrobat();
        performers[2] = new AnimalTrainer();
    }

    void startShow() {
        std::cout << "Добро пожаловать цирк: " << name <<  std::endl;
        for (int i = 0; i < 3; ++i) {
            performers[i]->perform();
        }
    }
private:
    std::string name;
    Performer* performers[3];
};

int main(){
    Circus circus("du Soleil");
    circus.startShow();
    return 0;
}

