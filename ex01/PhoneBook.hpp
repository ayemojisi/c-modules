/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <iergun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:22:49 by iergun            #+#    #+#             */
/*   Updated: 2024/02/09 03:39:16 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include "Contact.hpp"
//Bu sınıfın amacı, telefon rehberi işlevselliğini sağlamak ve kullanıcıya yeni kişiler eklemek, mevcut kişileri aramak gibi işlemleri gerçekleştirmek 
class PhoneBook {
	public:
		PhoneBook(); //Kurucu fonksiyon (constructor).
		~PhoneBook(); //  Yıkıcı fonksiyon (destructor).
		void addContact(void); // Yeni bir kişi eklemek için kullanılır.
		void searchContact();  //Kişi aramak için kullanılır.
	private:
		static const int MAX_CONTACTS = 8; //Rehberdeki maksimum kişi sayısını belirten sabit bir değer
		int newContactIndex; //son eklenen kişinin indeksini izleyen bir değişken.
		int contactAmount; // Rehberdeki mevcut kişi sayısını tutan bir değişken.
		Contact *contacts[MAX_CONTACTS]; // Bir dizi, Contact sınıfından nesneleri içeri
};

#endif
