#include <iostream>

#include <iomanip>

#include <string>



class Staff

{

public:

    int code;

    std::string name;



    void setInfo(const std::string& n, int c)

    {

        name = n;

        code = c;

    }

};



class Teacher : public Staff

{

protected:

    std::string subject;

    std::string publication;



public:

    void setDetails(const std::string& subj, const std::string& pub)

    {

        subject = subj;

        publication = pub;

    }



    void display()

    {

        std::cout << "Name: " << name << std::setw(8) << "Code: " << code << std::endl

            << "Subject: " << subject << std::setw(8) << "Publication: " << publication << std::endl;

    }

};



class Officer : public Staff

{

protected:

    std::string grade;



public:

    void setDetails(const std::string& grd)

    {

        grade = grd;

    }



    void display()

    {

        std::cout << "Name: " << name << std::setw(10) << "Code: " << code << std::endl

            << "Category: " << grade << std::endl;

    }

};



class Typist : public Staff

{

protected:

    float speed;



public:

    void setSpeed(float spd)

    {

        speed = spd;

    }

};



class Regular : public Typist

{

protected:

    float wage;



public:

    void setWage(float wg)

    {

        wage = wg;

    }



    void display()

    {

        std::cout << "Name: " << name << std::setw(10) << "Code: " << code << std::endl

            << "Speed: " << speed << std::setw(10) << "Wage: " << wage << std::endl;

    }

};



class Casual : public Typist

{

protected:

    float wage;



public:

    void setWage(float wg)

    {

        wage = wg;

    }



    void display()

    {

        std::cout << "Name: " << name << std::setw(10) << "Code: " << code << std::endl

            << "Speed: " << speed << std::setw(10) << "Wage: " << wage << std::endl;

    }

};



int main()

{

    Teacher teacher1;

    teacher1.setInfo("Christopher Nolan", 420);

    teacher1.setDetails("Computer Science ", "Hollywood Hill");



    Officer officer1;

    officer1.setInfo("Cillian Murphy", 222);

    officer1.setDetails("First class");



    Regular regular1;

    regular1.setInfo("Margot Robbie", 333);

    regular1.setSpeed(85.5);

    regular1.setWage(15000);



    Casual casual1;

    casual1.setInfo("Ryan Gosling", 444);

    casual1.setSpeed(78.9);

    casual1.setWage(10000);



    std::cout << "About teacher:" << std::endl;

    teacher1.display();



    std::cout << "About officer:" << std::endl;

    officer1.display();



    std::cout << "About regular typist:" << std::endl;

    regular1.display();



    std::cout << "About casual typist:" << std::endl;

    casual1.display();



    return 0;

}