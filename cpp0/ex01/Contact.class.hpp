/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:38:38 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/01 19:14:42 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
# include <iostream>

class Contact {

	private:
		std::string	_f_name;
		std::string	_l_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal;
		std::string	_email;
		std::string	_phone;
		std::string	_bday;
		std::string	_meal;
		std::string	_color;
		std::string	_secret;

	public:
		Contact();
		~Contact();
		void			setAttributes();
		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickname();
		std::string		getLogin();
		std::string		getPostal();
		std::string		getEmail();
		std::string		getPhone();
		std::string		getBday();
		std::string		getMeal();
		std::string		getColor();
		std::string		getSecret();
};

#endif