/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:38:33 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/02 16:57:12 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void		Contact::setAttributes() {
	std::string buf;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, this->_f_name);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, this->_l_name);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter login: ";
	std::getline(std::cin, this->_login);
	std::cout << "Enter Postal Adress: ";
	std::getline(std::cin, this->_postal);
	std::cout << "Enter email: ";
	std::getline(std::cin, this->_email);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, this->_phone);
	std::cout << "Enter Birthday Date: ";
	std::getline(std::cin, this->_bday);
	std::cout << "Enter Favorite Meal: ";
	std::getline(std::cin, this->_meal);
	std::cout << "Enter Underwear Color: ";
	std::getline(std::cin, this->_color);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, this->_secret);
}

void		Contact::printAttributes() {
	std::cout << "------" << std::endl;
	std::cout << "First Name: ";
	std::cout << this->_f_name << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->_l_name << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "login: ";
	std::cout << this->_login << std::endl;
	std::cout << "Postal Adress: ";
	std::cout << this->_postal << std::endl;
	std::cout << "email: ";
	std::cout << this->_email << std::endl;
	std::cout << "Phone Number: ";
	std::cout << this->_phone << std::endl;
	std::cout << "Birthday Date: ";
	std::cout << this->_bday << std::endl;
	std::cout << "Favorite Meal: ";
	std::cout << this->_meal << std::endl;
	std::cout << "Underwear Color: ";
	std::cout << this->_color << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->_secret << std::endl;
	std::cout << "------" << std::endl;
}

std::string	Contact::getFirstName() {
	return(this->_f_name);
}

std::string	Contact::getLastName() {
	return(this->_l_name);
}

std::string	Contact::getNickname() {
	return(this->_nickname);
}

std::string	Contact::getLogin() {
	return(this->_login);
}

std::string	Contact::getPostal() {
	return(this->_postal);
}

std::string	Contact::getEmail() {
	return(this->_email);
}

std::string	Contact::getPhone() {
	return(this->_phone);
}

std::string	Contact::getBday() {
	return(this->_bday);
}

std::string	Contact::getMeal() {
	return(this->_meal);
}

std::string	Contact::getColor() {
	return(this->_color);
}

std::string	Contact::getSecret() {
	return(this->_secret);
}
