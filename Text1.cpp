//
// Created by Wridzer on 23/04/2021.
//

#include "Text1.h"
#include "vector"
#include "string"
#include "iostream"

using namespace std;

static std::vector<std::string> textfile1 {"Hora aderat briligi. Nunc et Slythia Tova",
                                   "Plurima gyrabant gymbolitare vabo",
                                   "Et Borogovorum mimzebant undique formae,",
                                   "Momiferique omnes exgrabure Rathi.",
                                   "\"Cave, Gaberbocchum moneo tibi, nate cavendum",
                                   "(Unguibus ille rapit. Dentibus ille necat.)",
                                   "Et fuge Jubbubum, quo non infestior ales,",
                                   "Et Bandersnatcham, quae fremit usque, cave.\"",
                                   "Ille autem gladium vorpalem cepit, et hostem",
                                   "Manxonium long sedulitate petit;",
                                   "Tum sub tumtummi requiescens arboris umbr",
                                   "Stabat tranquillus, multa animo meditans.",
                                   "Dum requiescebat meditans uffishia, monstrum",
                                   "Praesens ecce! oculis cui fera flamma micat,",
                                   "Ipse Gaberbocchus dumeta per horrida sifflans",
                                   "Ibat, et horrendum burbuliabat iens!",
                                   "Ter, quater, atque iterum cito vorpalissimus ensis",
                                   "Snicsnaccans penitus viscera dissecuit.",
                                   "Exanimum corpus linquens caput abstulit heros",
                                   "Quocum galumphat multa, domumque redit.",
                                   "\"Tune Gaberbocchum potuisti, nate, necare?",
                                   "Bemiscens puer! ad brachia nostra veni.",
                                   "Oh! frabiusce dies! iterumque caloque calque",
                                   "Laetus eo\" ut chortlet chortla superba senex.",
                                   "Hora aderat briligi. Nunc et Slythia Tova",
                                   "Plurima gyrabant gymbolitare vabo;",
                                   "Et Borogovorum mimzebant undique formae,",
                                   "Momiferique omnes exgrabure Rathi."};

Text1::Text1() {

}

Text1::~Text1() {

}

void Text1::printText1(int i){
    std::cout << textfile1[i] << "\n";
}
