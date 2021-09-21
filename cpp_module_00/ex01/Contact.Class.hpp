#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
public:

    Contact();
    ~Contact();

	void add_infos(void);
	void display_infos(int index);
	void display_contact(void);

private:
    std::string infos[5];

};


#endif 
