class Fruit{
public:
    const char * name;
    const char * color;
    const char * getName();
    const char * getColor();
};

class Apple:public Fruit{
public:
    Apple(const char * colo){
        name = "apple";
        color = colo;
    }
    Apple(){
        name = "apple";
        color = "green";
    }
};

class Banana: public Fruit{
public:
    Banana(const char * colo){
        name = "banana";
        color = colo;
    }
    Banana(){
        name = "banana";
        color = "yellow";
    }
};

class GrannySmith: public Apple{
public:
    GrannySmith(){
        name = "Granny Smith apple";
    }
};