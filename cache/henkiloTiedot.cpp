#include "henkiloTiedot.h"
#include <algorithm>
#include <iostream>

std::shared_ptr<HenkiloTiedot> HenkiloTiedot::instance = nullptr;

void HenkiloTiedot::lisaaHenkilo(const Henkilo& aHenkilo)
{
    henkilot.push_back(std::make_shared<Henkilo>(aHenkilo));

    for (auto& observer: henkiloLisattyObserverit) {
        observer->henkiloLisatty(aHenkilo.getNimi());
    }

    for (auto& lambdaOb: lambdaObserverit) {
        lambdaOb(aHenkilo.getNimi());
    }
}

std::shared_ptr<Henkilo> HenkiloTiedot::haeHenkilo(const std::string& aNimi)
{
    auto it = std::find_if(
        henkilot.begin(), henkilot.end(),
        [aNimi](const std::shared_ptr<Henkilo>& x) { return x->getNimi() == aNimi;}
    );

    if (it != henkilot.end())
        return *it;

    return nullptr;
}

void HenkiloTiedot::tulostaHenkilot() const
{
    for (const std::shared_ptr<Henkilo>& h: henkilot) {
        h->tulostaTiedot();
    }
}

std::shared_ptr<HenkiloTiedot> HenkiloTiedot::getInstance()
{
    if (!instance) {
        instance = std::shared_ptr<HenkiloTiedot>(new HenkiloTiedot());
    }

    return instance;
}

void HenkiloTiedot::rekisteroiObserver(const std::shared_ptr<HenkiloLisattyObserver>& aKuuntelija)
{
    henkiloLisattyObserverit.push_back(aKuuntelija);
}

void HenkiloTiedot::rekisteroiLambdaObserver(std::function<void(const std::string&)> aKuuntelija)
{
    lambdaObserverit.push_back(aKuuntelija);
}