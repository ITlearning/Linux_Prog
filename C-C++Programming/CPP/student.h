
class Student {
public:
    Student();
    Student(char *name, int age){
        _name = name;
        _age = age;
    };

    char *getname();

    private:
    char *_name;
    int _age;
};