# AjoneuvoHallinta
Final exercise for course 5G00BM85-3006 Olio-ohjelmoinnin jatkokurssi (OOP advanced course)

The Assignment in finnish:

Toteuta pieni, oliopohjainen datanhallintasovellus, jossa voit ylläpitää valitsemaasi dataa. Data voi olla esimerkiksi:

Kirjoja
Autoja
Veneitä
Kulkuvälineitä
tms..

Ajatuksena on, että itse dataa edustaa sille kirjoitettu sopiva luokka, jossa on ominaisuuksia. Luokasta voit myös periyttää uusia luokkia.  Data voi olla säilöttynä esim. yksinkertaisessa vector -tietorakenteessa tai muussa C++:n standardikirjaston tarjoamassa tietorakenteessa.

Itse ohjelma toimii yksinkertaisesti konsolisovelluksena. Konsolista käsin voit ainakin lisätä uusia, hakea, poistaa, muokata ja järjestää. Tiedostoon talletusta/hakua ei tarvitse toteuttaa, mutta testaamista varten voit toki luoda testitiedoston, jonka pohjalta voit luoda ohjelmaan sopivan datasisällön (yksinkertaisilla file-read -operaatioilla)

Vaatimuksia

Toteuta ohjelma hyödyntäen modernia C++:aa ja kurssilla läpi käytyjä asioita niin paljon kuin (tarkoituksenmukaisesti) mahdollista. Ohjelmassa tulisi käyttää sopivasti ja soveltaen mm. smart pointereita, sopivaa muistinhallintaa, lambda -lausekkeita (esim. haussa, järjestämisessä tai data-alkioiden muokkaamisessa), staattista dataa (esim. oliolaskurit). Lisäksi toteutuksessa on hyödynnettävä vähintään yhtä modernilla C++:lla toteutettua GoF design patternia, esimerkiksi tunneilla käytävä singleton tai observer. Muuten itse toteuttamistapa on vapaa.

The idea:

- Simple database for vehicles, with one baseclass and separate subclasses for different types of vehicles
- Every vehicle has also owner => Person class with attributes like the name, address etc.
- Every person has an address => Address class with attributes for the street address etc.
