/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:50:46 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 13:51:26 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>
# include <iostream>
# include <fstream>

class Sed {
private:
    std::string _filename;

    std::string _readFile(void) const;
    void        _writeFile(const std::string& content) const;

public:
    Sed(std::string filename);
    ~Sed();

    void replace(std::string s1, std::string s2);
};

#endif
