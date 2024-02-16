class gemi
{
private:
    int saglik; 
    int yakit;
    int para;
    
    
public:
    gemi();
    ~gemi();

    void hasar_al(){
        this->saglik -= 30;
    }

    void kacis_yakit_azaltmasi(){
        this->yakit -= 33;
    }

    void para_arttirmasi(){
        this->para += 10;
    }
    int yakit_get(){
        return this -> yakit;
    }
};

gemi::gemi()
{
    saglik = 100;
    yakit = 100;
    para = 0;
} 

gemi::~gemi()
{
}

