#ifndef COMP_345_PROJECT_CONSTANTS_H
#define COMP_345_PROJECT_CONSTANTS_H
#endif

#include <iostream>
/**
 * Contents of the game board
 */
struct constants {
    const std::string genericType[3] = {"Health", "Energy", "Victory"};
    const std::string buildingID[3] = {"Hospital", "Power Plant", "High Rise"};
    const std::string unitID[3] = {"Infantry", "Jet", "Tank"};
    const std::string monsterID[6] = {"Sheriff", "Drakonis", "Captain Fish", "Mantis", "Rob", "Kong"};
    const std::string tokenID[4] = {"Web", "Jynx", "Souvenir", "Carpace"};
    const std::string cardDescription[66] = { 
"VIOLENT STAR\nKEEP\nDeal 2 damage to the Monster from whom you take Superstar. Deal 1 damage to the Monster who takes Superstar from you.",
"SHARP SHOOTER\nKEEP\nYou can destroy Jets that are not in your borough. Gain 1* each time you destroy a Jet.",
"OF ANOTHER WORLD\nKEEP\nYou can use H as E, and E as H.",
"EXTRA HEAD\nKEEP\nYou get 1 extra die.",
"EGO TRIP\nKEEP\nKEEP\nGain 1E when you take Supserstar and when you start your turn with it.",
"HAILING CABS\nKEEP\nYou may add 2 destruction points to your result. If you do you can destroy only units",
"NEXT STAGE\nDISCARD\nLose all your *. Gain 1E or heal 1 damage for each * you lost this way.",
"POWER SUBSTATION\nDISCARD\n+1*, +8E, and take 3 damage.",
"GENERAL ELLIS\nDISCARD\nYou can only buy this card if you destroyed a Tank this turn. +3* and all Monsters take 1 damage.",
"NEW YORK MARATHON\nDISCARD\nWhile this card is available for purchase, Monsters must pay 2* to move (including fleeing from Manhattan), unless the movement is obligatory.\n +2*, +2E, and heal 2 damage.",
"AIR FORCE ONCE\nDISCARD\nYou can only buy this card if you destroyed a Jet this turn. +4* and all Units attack all Monsters in their boroughs.",
"SUBWAY\nDISCARD\nHeal 2 damage and take another turn.\nDuring this extra turn, you can move as often as you like, whenever you like.",
"SUBTERRANEAN CABLE\nDISCARD\n+4E and take 4 damage.",
"TESLA CANON\nDISCARD\n+2*. All Monsters(including you) must discard one KEEP card.",
"THE UNISPHERE\nDISCARD\nBuy this card for 1E less if you are in QUEENS. +4*.",
"YANKEE STADIUM\nDISCARD\nBuy this card for 1* less if you are in BRONX. +5* and heal 5 damage.",
"FLATIRON BUILDING\nDISCARD\nBuy this card for 1E less if you are in MANHATTAN. +2*.",
"CENTRAL PARK\nDISCARD\nBuy this card for 1E less if you are in MANHATTAN. +2* and heal 2 damage.",
"CONEY ISLAND\nDISCARD\nBuy this card for 1E less if you are in BROOKLYN. +3*.",
"DRINK THE HUDSON\nDISCARD\nBuy this card for 1E if you are in MANHATTAN, BROOKLYN, or STATEN ISLAND. the rest???????????????????????????????????????????????****__QQQ__ ",
"PHOTO OP\nDISCARD\nChoose a Monster. Gain 1* for each damage you dealt to that Monster this turn.",
"HOLLAND TUNNEL\nDISCARD\nBuy this card for 1E less if you are in MANHATTAN. +6* and all Monsters gain 3E.",
"COLUMBIA UNIVERSITY\nDISCARD\nBuy this card for 1E less if you are in MANHATTAN. +2* and take the next KEEP card revealed, for free.",
"BROOKLYN BRIDGE\nDISCARD\nBuy this card for 1E less if you are in BROOKLYN. +4*",
"CLIMB THE EMPIRE STATE BUILDING\nKEEP\nIf you roll Attack, Heal, Energy, Celebrity, Destruction, Ouch! in MANHATTAN, gain 2* and take another turn.",
"ARTIFICIAL HEART\nKEEP\nYou can change some or all of your H to E",
"PAINBOW\nKEEP\nIf your results are...\n-2 Destruction, you get an extra Attack.\n-4 Destructions, you get an extra 2 Atack.\n-6 Destruction, you win the game.",
"HUNTER\nKEEP\nHeal 1 damage each time you destroy an Infantry.",
"SUPER SPEED\nKEEP\nYou can have a free move before rolling your dice.",
"PERSONAL SPOTLIGHT\nKEEP\nGain 1* each turn you rolled at least 1 Celebrity.",
"TERMINAL RAGE\nKEEP\nTake another turn when you buy this card. From now on you can no longer reroll Attack.",
"LEVELER\nKEEP\nGain 1* each turn that you destroy at least one Building.",
"BULLETPROOF\nKEEP\nWhenever you take damage because of Ouch!, take 1 less damage.",
"KING OF QUEENS\nKEEP\nGain 1E and heal 1 damage when you start your turn in Queens.",
"CURSE\nKEEP\nWhen you deal damage to Monsters, give each a Curse token. Each time a Monster wants to reroll Ouch!, he must spend 1E for each Curse token he has. A Monster may use a H to discard a Curse token instead of using it to heal.",
"FIREBALL\nKEEP\nYour attack also deal damage to the other Monsters in your borough.",
"LONG NECK\nKEEP\nYou need only 2 destruction to destroy a Jet.",
"TROPHY HUNTER\nKEEP\nGain 1* each time you destroy a Unit.",
"I LOVE NY TOURIST\nKEEP\nPlace a Souvenir token in your current borough, and in each borough you enter that doesn't already have a Souvenir token. Gain 1* and 1E each time you place a Souvenir token.",
"STINK ATTACK\nKEEP\nWhenever you move, you may disperse up to 4 Units from your destination borough. Each dispersed Unit must move to a separate borough.",
"CAN OPENER\nKEEP\nYou need only 3 Destruction to destroy a Tank.",
"PHOENIC BLOOD\nKEEP\nGain 1E each time you take damage.",
"TESLA ANTENNAE\nKEEP\nMonsters that have more H than you take 1 extra damage whenever you attack them.",
"POWER TAP\nKEEP\nEach time a Monster gains at least 3E in a turn, he must pay you 1E",
"STOMP\nKEEP\nAdd 1 Destruction to your result.",
"JINX AURA\nKEEP\nOther Monsters must always use their rerolls. (They still get to choose which dice to reroll).",
"SEISMIC RAY\nKEEP\nSpend 1E to use 1 Destruction in any borough other than where you are.",
"CHINATOWN REGULAR\nKEEP\nHeal 2 damage when you enter Manhattan.",
"SCAVENGER\nKEEP\nYou can KEEP cards from the discard by spending 1E less than their cost.",
"ANTIMATTER PELLETS\nKEEP\nMonsters you attack must roll a die. Those that roll Ouch! take double damage.",
"WEBSPINNER\nKEEP\nWhen you deal damage to Monsters, give them a Web token. A Monster has one fewer reroll on his turn for each Web token he has. A Monster can choose to use a Attack to discard a Web token instead of using it to attack.",
"UNIVERSAL SOLDIER\nKEEP\nYou can change some or all of your H to Attack, and/or your Attack to H.",
"FURY\nKEEP\nAdd 1Destruction and 1E to your results if you are in a borough with at least 3 Units.",
"SHADOW DOUBLE\nKEEP\nWhenever you attack, you deal double damage.",
"DRAIN\nKEEP\nTake 2E from Monsters that attack you.",
"DIVA\nKEEP\nThe other Monsters need 4 Celebrity to take Superstar from you.",
"TOWERING TITAN\nKEEP\nAdd 2 Attack to your result.",
"BROADWAY STAR\nKEEP\nGain 1* when you take Superstar, and when you start your turn with it.",
"OVERLOAD\nKEEP\nGain 4E when you buy this card. Gain 1E less when you roll E.",
"CHAMELEON\nKEEP\nYou can discard as many Celebrity as you wish. For each Celebrity discarded, you can change the face of one of the dice you haven't resolved.",
"NATURAL SELECTION\nKEEP\nGain 4E and heal 4 damage when you buy this card. You roll an extra die. If you end your turn with at least 1Celebrity, you lose this card, and all your H.",
"REGENERATION\nKEEP\nHeal 1 damage at the start of your turn.",
"TRASH THROWER\nKEEP\nMonsters you attack lose 1*.",
"CARAPACE\nKEEP\nYour H maximum is increased by 2 as long as you have this card. For each Ouch! you roll, place a Carapace token on this card. You can discard this card to heal 1 damage for each Carapace token on it.",
"SUPERSTAR\nGOAL\nTake this card when you roll at least 3 Celebrity. Gain 1*, +1* per additional Celebrity you rolled. While you have this card, you gain 1* for each Celebrity you roll.",
"STATUE OF LIBERTY\nGOAL\nTake this card when you roll at least 3 Ouch!. Gain 3* when you take this card. Lose 3* when you lose this card."
};
const std::int cardCost[66]={3,4,6,7,3,5, 4,5,5,6,6,10, 0,5,5,9,3,5, 4,12,4,9,6,6, 3,4,5,5,4,5, 4,5,4,5,4,4, 3,5,6,5,4,4, 4,4,4,4,4,3, 3,4,6,6,4,12, 4,5,10,5,0,4, 2,5,5,3,0,0};    
};
