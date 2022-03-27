# Zadania

1. Przeczytaj dokument dotyczący dziedziczenia dostępny na eKursach.
2. Zapoznaj się z kodem aplikacji i w razie wątpliwości pytaj prowadzącego.
3. Zmień sposoby dostępu w Twojej klasie:
	* właściwości na private
	* konstruktor na public
	* metoda show na protected
4. Utwórz dwie klasy dziedziczące po Twojej klasie - dziedziczenie `public`
	* Dodaj conajmniej jedną nową właściwość do każdej nowej klasy - dziedziczenie polega na rozszerzaniu możliwości klasy więc bezsensu jest dziedziczyć i nic nie dodać, prawda?
	* Utwórz konstruktor w sub-klasie (tej która dziedziczy) - pamiętaj by odwołać się w nim do klasy bazowej (ta z której dziedziczymy to inaczej super-klasa) 
	* Przesłoń metodę `show`:
		* wykonaj `show` z klasy bazowej
		* wyświetl nowe pola z klasy pochodnej
5. W jednej z klas pochodnych dodaj nowy dodatkowy konstruktor wykorzystujący tzn. konstruktor kopiujący klasy bazowej - czyli chodzi o to by zamiast w konstruktorze klasy pochodnej podawać wszystkie pola klasy bazowej osobno to weźmiemy sobie cały obiekt (przykład znajdziesz w klasie `AudioBook`.
6. Utwórz obiekt każdej ze swoich klas i wykonaj metodę `show` o ile to możliwe.

7. :technologist: Czas na zabawę z kodem: 
	* zmieniaj sposoby dostępności w klasach i zbadaj jak zachowują się możliwości dostępu w klasach pochodnych/bazowych oraz z punktu widzenia obiektu (czyli z main, bo zapewne tam stworzone są obiekty)
	* zmieniaj sposoby dziedziczenia i zbadaj jak zachowują się możliwości dostępu w klasach pochodnych/bazowych oraz z punktu widzenia obiektu (czyli z main, bo zapewne tam stworzone są obiekty)
8. :books: Zadanie domowe:
	* Utwórz diagram UML powstałej aplikacji. 
	* Przynieś ukończone rozwiązanie na następne zajęcia.
