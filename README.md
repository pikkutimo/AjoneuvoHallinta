# VehicleRegister
Final exercise for course 5G00BM85-3006 Olio-ohjelmoinnin jatkokurssi (OOP advanced course)

![Main menu](/img/Screen.png)

## The Assignment:

**Finnish**

Toteuta pieni, oliopohjainen datanhallintasovellus, jossa voit ylläpitää valitsemaasi dataa. Data voi olla esimerkiksi:

Kirjoja
Autoja
Veneitä
Kulkuvälineitä
*tms..*

Ajatuksena on, että itse dataa edustaa sille kirjoitettu sopiva luokka, jossa on ominaisuuksia. Luokasta voit myös periyttää uusia luokkia.  Data voi olla säilöttynä esim. yksinkertaisessa vector -tietorakenteessa tai muussa C++:n standardikirjaston tarjoamassa tietorakenteessa.

Itse ohjelma toimii yksinkertaisesti konsolisovelluksena. Konsolista käsin voit ainakin lisätä uusia, hakea, poistaa, muokata ja järjestää. Tiedostoon talletusta/hakua ei tarvitse toteuttaa, mutta testaamista varten voit toki luoda testitiedoston, jonka pohjalta voit luoda ohjelmaan sopivan datasisällön (yksinkertaisilla file-read -operaatioilla)-

**Vaatimuksia**

Toteuta ohjelma hyödyntäen modernia C++:aa ja kurssilla läpi käytyjä asioita niin paljon kuin (tarkoituksenmukaisesti) mahdollista. Ohjelmassa tulisi käyttää sopivasti ja soveltaen mm. smart pointereita, sopivaa muistinhallintaa, lambda -lausekkeita (esim. haussa, järjestämisessä tai data-alkioiden muokkaamisessa), staattista dataa (esim. oliolaskurit). Lisäksi toteutuksessa on hyödynnettävä vähintään yhtä modernilla C++:lla toteutettua GoF design patternia, esimerkiksi tunneilla käytävä singleton tai observer. Muuten itse toteuttamistapa on vapaa.

**English**

Create small, object based datamanagement application. The data can be for example:

Books
Cars
Boats
Vehicles
*or something similar*

The point is that the data is presented by a class created for it, which has properties. You can also derive other classes from this base class. The data can be contained for example in a vector-container or any other container provided by the standard library.

The application is basic console application. From the console you should be able to at least add, search, remove, edit ja organize the data. Saving into a file/search from a file doesn't need to be implemented, but for testing purposes testfiles could be creates, from which the suitable data can be created for the application (with simple file-read operations).

**Requirements**

You should utilize modern C++ and use appropriately the things we have gone through in the course as much as possible. The application should utilize appropriately for example smart pointers, memory management, lambdas, static data(object counters). Also it should utilize at least one modern C++ GoF-patters, for example the singleton or observer patterns from the course. Apart from these requirements, everything else is up to you.

The idea:

- Simple database for vehicles, with one baseclass and separate subclasses for different types of vehicles
- Every vehicle has also owner => Person class with attributes like the name, address etc.
- Every person has an address => Address class with attributes for the street address etc.

# Problems/What to implement
- With the current implementation using std::smart_prt, the application suffers slicing problems using the std::vector with the Vehicle base class
- When editing single vehicle, one should be able edit every property of the vehicle from the registration to the mileage in single sitting
