/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:53:56 by gsmets            #+#    #+#             */
/*   Updated: 2021/03/09 18:26:44 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	gaspacho_replace(char **av) {
	std::string			fileName(av[1]);
	std::string			oldStr(av[2]);
	std::string			newStr(av[3]);
	std::ifstream		fileStream(fileName.c_str());
	std::ofstream		newFileStream;
	std::stringstream	tempStream;
	std::string			fileContent;
	std::string			newFileName;
	size_t				pos = 0;
	size_t				oldLen = oldStr.length();
	size_t				newLen = newStr.length();
	int					ret;

	if ((ret = args_checker(fileName, oldStr, newStr, fileStream)))
		return (ret);

	tempStream << fileStream.rdbuf();
	fileContent = tempStream.str();

	while ((pos = fileContent.find(oldStr, pos)) != std::string::npos)
	{
		fileContent.replace(pos, oldLen, newStr);
		pos += newLen;
	}
	newFileName = fileName + ".replace";
	newFileStream.open(newFileName.c_str());
	if (!(newFileStream.good()))
		return(error_manager(4, "a problem occured while accessing the .replace file."));
	newFileStream << fileContent;
	return (ret);
}

int	error_manager(int status, std::string errMessage) {
	std::cout << "Error: " << errMessage << std::endl;
	return (status);
}

int	args_checker(std::string &fn, std::string &s1, std::string &s2, std::ifstream &fs) {
	if (s1 == s2)
		return(error_manager(2, "s1 and s2 share the same value."));
	if (fn.empty() || s1.empty() || s2.empty())
		return(error_manager(3, "empty string as argument is not supported."));
	if (!(fs.good()))
		return(error_manager(4, "a problem occured while accessing the original file."));
	return (0);
}

int	main(int ac, char **av) {

	if (ac != 4)
		return(error_manager(1, "wrong amount of arguments."));
	return (gaspacho_replace(av));
}
