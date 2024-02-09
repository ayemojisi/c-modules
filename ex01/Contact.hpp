/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <iergun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:02:12 by dpoveda-          #+#    #+#             */
/*   Updated: 2024/02/07 12:06:41 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>

class Contact {
	public:
		Contact(); // Kurucu fonksiyon (constructor), sınıfın bir nesnesi oluşturulduğunda çağrılır.
		~Contact(); // Yıkıcı fonksiyon (destructor), sınıfın bir nesnesi yok edildiğinde (bellekten silindiğinde) çağrılır.
		int setInformation(int index); // Kullanıcıdan giriş alarak kişi bilgilerini dolduran fonksiyon. index parametresi, bu bilgilerin hangi indekse (alan) yerleştirileceğini belirler.
		void tableDisplay(); //Kişinin adını ve soyadını tablo formatında ekrana basan fonksiyon.
		void fullDisplay(); //Kişinin tüm bilgilerini detaylı bir şekilde ekrana basan fonksiyon.

	private:
		static const int FIELDS_CNT = 5; // Bir sınıf sabiti, kişinin bilgilerini tutan dizinin eleman sayısını belirler 
		enum fields {
			firstName = 0, // Bir numaralandırma türü (enum), kişinin farklı bilgilerini temsil eden sabit değerleri içerir (ad, soyad, takma ad, telefon, en karanlık sır)
			lastName,
			nickname,
			phone,
			darkestSecret
		};

		int index;
		std::string fieldsInfo[FIELDS_CNT]; //Bir dizi, kişinin ad, soyad, takma ad, telefon ve en karanlık sırrı gibi bilgilerini saklar.
};

#endif
