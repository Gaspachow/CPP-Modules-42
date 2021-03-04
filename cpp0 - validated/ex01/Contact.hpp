/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:01:18 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/04 17:01:25 by gsmets           ###   ########.fr       */
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
		void			printAttributes();
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