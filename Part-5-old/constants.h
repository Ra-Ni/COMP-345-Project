#ifndef COMP_345_PROJECT_CONSTANTS_H
#define COMP_345_PROJECT_CONSTANTS_H

#ifndef __IOSTREAM_H
#include <iostream>
#endif


/**
 * Contents of the game board
 */
struct constants {
    const std::string genericType[3] = {
            "HEALTH",
            "ENERGY",
            "VICTORY"
    };
    const std::string buildingID[3] = {
            "HOSPITAL",
            "POWER PLANT",
            "HIGH RISE"
    };
    const std::string unitID[3] = {
            "INFANTRY",
            "JET",
            "TANK"
    };
    const std::string monsterID[6] = {
            "SHERRIF",
            "DRAKONIS",
            "CAPTAIN FISH",
            "MANTIS",
            "ROB",
            "KONG"
    };
    const std::string tokenID[4] = {
            "Web",
            "Jynx",
            "Souvenir",
            "Carpace"};
    const std::string cardID[66] = {
            "VIOLENT STAR",
            "SHARP SHOOTER",
            "OF ANOTHER WORLD",
            "EXTRA HEAD",
            "EGO TRIP",
            "HAILING CABS",
            "NEXT STAGE",
            "POWER SUBSTATION",
            "GENERAL ELLIS",
            "NEW YORK MARATHON",
            "AIR FORCE ONCE",
            "SUBWAY",
            "SUBTERRANEAN CABLE",
            "TESLA CANON",
            "THE UNISPHERE",
            "YANKEE STADIUM",
            "FLATIRON BUILDING",
            "CENTRAL PARK",
            "CONEY ISLAND",
            "DRINK THE HUDSON",
            "PHOTO OP",
            "HOLLAND TUNNEL",
            "COLUMBIA UNIVERSITY",
            "BROOKLYN BRIDGE",
            "CLIMB THE EMPIRE STATE BUILDING",
            "ARTIFICIAL HEART",
            "PAINBOW",
            "HUNTER",
            "SUPER SPEED",
            "PERSONAL SPOTLIGHT",
            "TERMINAL RAGE",
            "LEVELER",
            "BULLETPROOF",
            "KING OF QUEENS",
            "CURSE",
            "FIREBALL",
            "LONG NECK",
            "TROPHY HUNTER",
            "I LOVE NY TOURIST",
            "STINK ATTACK",
            "CAN OPENER",
            "PHOENIC BLOOD",
            "TESLA ANTENNAE",
            "POWER TAP",
            "STOMP",
            "JINX AURA",
            "SEISMIC RAY",
            "CHINATOWN REGULAR",
            "SCAVENGER",
            "ANTIMATTER PELLETS",
            "WEBSPINNER",
            "UNIVERSAL SOLDIER",
            "FURY",
            "SHADOW DOUBLE",
            "DRAIN",
            "DIVA",
            "TOWERING TITAN",
            "BROADWAY STAR",
            "OVERLOAD",
            "CHAMELEON",
            "NATURAL SELECTION",
            "REGENERATION",
            "TRASH THROWER",
            "CARAPACE",
            "SUPERSTAR",
            "STATUE OF LIBERTY"
    };

    const std::string cardType[3] = {
            "KEEP"
            "DISCARD"
            "GOAL"
    };

    const std::string cardDescription[66] = {
            "Deal 2 damage to the Monster from whom you take Superstar. Deal 1 damage to the Monster who takes Superstar from you.",
            "You can destroy Jets that are not in your borough. Gain 1* each time you destroy a Jet.",
            "You can use H as E, and E as H.",
            "You get 1 extra die.",
            "Gain 1E when you take Supserstar and when you start your turn with it.",
            "You may add 2 destruction points to your result. If you do you can destroy only units",
            "Lose all your *. Gain 1E or heal 1 damage for each * you lost this way.",
            "+1*, +8E, and take 3 damage.",
            "You can only buy this card if you destroyed a Tank this turn. +3* and all Monsters take 1 damage.",
            "While this card is available for purchase, Monsters must pay 2* to move (including fleeing from Manhattan), unless the movement is obligatory.\n +2*, +2E, and heal 2 damage.",
            "You can only buy this card if you destroyed a Jet this turn. +4* and all Units attack all Monsters in their boroughs.",
            "Heal 2 damage and take another turn.\nDuring this extra turn, you can move as often as you like, whenever you like.",
            "+4E and take 4 damage.",
            "+2*. All Monsters(including you) must discard one KEEP card.",
            "Buy this card for 1E less if you are in QUEENS. +4*.",
            "Buy this card for 1* less if you are in BRONX. +5* and heal 5 damage.",
            "Buy this card for 1E less if you are in MANHATTAN. +2*.",
            "Buy this card for 1E less if you are in MANHATTAN. +2* and heal 2 damage.",
            "Buy this card for 1E less if you are in BROOKLYN. +3*.",
            "Buy this card for 1E if you are in MANHATTAN, BROOKLYN, or STATEN ISLAND. the rest???????????????????????????????????????????????****__QQQ__ ",
            "Choose a Monster. Gain 1* for each damage you dealt to that Monster this turn.",
            "Buy this card for 1E less if you are in MANHATTAN. +6* and all Monsters gain 3E.",
            "Buy this card for 1E less if you are in MANHATTAN. +2* and take the next_adjacent_index KEEP card revealed, for free.",
            "Buy this card for 1E less if you are in BROOKLYN. +4*",
            "If you roll Attack, Heal, Energy, Celebrity, Destruction, Ouch! in MANHATTAN, gain 2* and take another turn.",
            "You can change some or all of your H to E",
            "If your results are...\n-2 Destruction, you get an extra Attack.\n-4 Destructions, you get an extra 2 Atack.\n-6 Destruction, you win the game.",
            "Heal 1 damage each time you destroy an Infantry.",
            "You can have a free move before rolling your dice.",
            "Gain 1* each turn you rolled at least 1 Celebrity.",
            "Take another turn when you buy this card. From now on you can no longer reroll Attack.",
            "Gain 1* each turn that you destroy at least one Building.",
            "Whenever you take damage because of Ouch!, take 1 less damage.",
            "Gain 1E and heal 1 damage when you start your turn in Queens.",
            "When you deal damage to Monsters, give each a Curse token. Each time a Monster wants to reroll Ouch!, he must spend 1E for each Curse token he has. A Monster may use a H to discard a Curse token instead of using it to heal.",
            "Your attack also deal damage to the other Monsters in your borough.",
            "You need only 2 destruction to destroy a Jet.",
            "Gain 1* each time you destroy a Unit.",
            "Place a Souvenir token in your current borough, and in each borough you enter that doesn't already have a Souvenir token. Gain 1* and 1E each time you place a Souvenir token.",
            "Whenever you move, you may disperse up to 4 Units from your destination borough. Each dispersed Unit must move to a separate borough.",
            "You need only 3 Destruction to destroy a Tank.",
            "Gain 1E each time you take damage.",
            "Monsters that have more H than you take 1 extra damage whenever you attack them.",
            "Each time a Monster gains at least 3E in a turn, he must pay you 1E",
            "Add 1 Destruction to your result.",
            "Other Monsters must always use their rerolls. (They still get to choose which dice to reroll).",
            "Spend 1E to use 1 Destruction in any borough other than where you are.",
            "Heal 2 damage when you enter Manhattan.",
            "You can KEEP cards from the discard by spending 1E less than their cost.",
            "Monsters you attack must roll a die. Those that roll Ouch! take double damage.",
            "When you deal damage to Monsters, give them a Web token. A Monster has one fewer reroll on his turn for each Web token he has. A Monster can choose to use a Attack to discard a Web token instead of using it to attack.",
            "You can change some or all of your H to Attack, and/or your Attack to H.",
            "Add 1Destruction and 1E to your results if you are in a borough with at least 3 Units.",
            "Whenever you attack, you deal double damage.",
            "Take 2E from Monsters that attack you.",
            "The other Monsters need 4 Celebrity to take Superstar from you.",
            "Add 2 Attack to your result.",
            "Gain 1* when you take Superstar, and when you start your turn with it.",
            "Gain 4E when you buy this card. Gain 1E less when you roll E.",
            "You can discard as many Celebrity as you wish. For each Celebrity discarded, you can change the face of one of the dice you haven't resolved.",
            "Gain 4E and heal 4 damage when you buy this card. You roll an extra die. If you end your turn with at least 1Celebrity, you lose this card, and all your H.",
            "Heal 1 damage at the start of your turn.",
            "Monsters you attack lose 1*.",
            "Your H maximum is increased by 2 as long as you have this card. For each Ouch! you roll, place a Carapace token on this card. You can discard this card to heal 1 damage for each Carapace token on it.",
            "Take this card when you roll at least 3 Celebrity. Gain 1*, +1* per additional Celebrity you rolled. While you have this card, you gain 1* for each Celebrity you roll.",
            "Take this card when you roll at least 3 Ouch!. Gain 3* when you take this card. Lose 3* when you lose this card."
    };


    const char cardCost[66] = {3, 4, 6, 7, 3, 5, 4, 5, 5, 6, 6, 10, 0, 5, 5, 9, 3, 5, 4, 12, 4, 9, 6, 6, 3, 4, 5,
                                    5, 4, 5, 4, 5, 4, 5, 4, 4, 3, 5, 6, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 6, 6, 4, 12, 4,
                                    5, 10, 5, 0, 4, 2, 5, 5, 3, 0, 0};
};
#endif