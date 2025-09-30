class ClassCarro
{
private:
    int id; // id do objeto
    static int num_carros; // atributo para saber número de carros instaciados
    static int last_id; // atributo para saber último id via incrementação

public:
    // Métodos construtores
    ClassCarro();
    ClassCarro(int id);

    // Método destrutor
    ~ClassCarro();

    // Retorna id da instância do objeto
    int num_id();

    // Retorna endereço da instância
    ClassCarro * endereco();

    // Retorna número de carros
    static int rnum_carros();
};
