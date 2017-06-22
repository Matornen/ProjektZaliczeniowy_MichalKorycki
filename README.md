# ProjektZaliczeniowy_MichalKorycki

Projekt: CasinoRoyale
Projekt odwzorowuje stół do gry w oczko, użytkownik (zwany dalej Graczem) mierzy się z Krupierem, zgodnie z zasadami gry w oczko.

Schemat UML projektu został zawarty w plikach dostępnych w powyższym repozytorium.

Program zawiera 5 klas: 
-Klasę Karta, zawierającą informację o wartości, kolorze i IdKarty.
-Klasę Talia, odpowiadającą za zebranie 52 kart w tabelę, tasowanie kart i podawanie kart Graczowi i Krupierowi.
-Klasę Krupier, sterowaną przez algorytm. Krupier wywoływany jest z parametrem przyIluPas, określającą zachowanie Krupiera w poszczególnych przypadkach
-Klasę Gracz, dziedziczącą po klasie Krupier. Klasa Gracz jest sterowana przez wejście konsoli i posiada kilka dodatkowych metod odpowiadających za liczenie kredytów, które pozostały graczowi
-Klasę Scheduler, odpowiadającą za równoczesne wywołanie metody dobierającej karty, dla Krupiera i Gracza.

Gracz przed rozpoczęciem każdego zagrania dostaje informację o ilości kredytów, które posiada, i podejmuje decyzję, ile kredytów decyduje przeznaczyć na dane rozdanie.

Gracz informowany jest o:
Turze, która jest aktualnie rozgrywana.
Ilości punktów, którą posiada Krupier.
Kartach, które posiada na ręce oraz łącznej wartości tych kart.


Gra toczy się do momentu, w którym Gracz straci wszystkie kredyty.

Plany rozbudowy:
Zaaplikowanie zasad gry BlackJack (w tym różnej wartości asów, ukrytej informacji Krupiera i możliwości splitowania)
Zaaplikowanie gry w Pokera i Hold'em Pokera (w końcu jest to projekt CasinoRoyale)
Interfejs graficzny
Obsługa "kasyna" z poziomu serwera.

