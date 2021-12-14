#pragma once
#include "henkilo.h"
#include <vector>
#include <string>
#include <memory>

class HenkiloLisattyObserver {
    public:
        virtual void henkiloLisatty(const std::string& aNimi) = 0;
};

class HenkiloTiedot final {
    private:
        std::vector<std::shared_ptr<Henkilo>> henkilot;
        HenkiloTiedot() = default;
        HenkiloTiedot(const HenkiloTiedot& aHenkiloTiedot) = delete;
        static std::shared_ptr<HenkiloTiedot> instance;
        std::vector<std::shared_ptr<HenkiloLisattyObserver>> henkiloLisattyObserverit;
        std::vector<std::function<void(const std::string&)>> lambdaObserverit;
    public:
        static std::shared_ptr<HenkiloTiedot> getInstance();
        void lisaaHenkilo(const Henkilo& aHenkilo);
        std::shared_ptr<Henkilo> haeHenkilo(const std::string& aNimi);
        void tulostaHenkilot() const;
        void rekisteroiObserver(const std::shared_ptr<HenkiloLisattyObserver>& aKuuntelija);
        void rekisteroiLambdaObserver(std::function<void(const std::string&)> aKuuntelija);
};