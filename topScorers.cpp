#include <iostream>
#include <random>
#include <math.h>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

map<int, int> GetGoalScorers(map<int, string>, string);

map<int, int> GetGoalScorers(map<int, string> TeamGoalScorers, string teamName)
{
    random_device rd;
    mt19937 mt(rd());
    int min = 0;
    int max = 5;
    uniform_int_distribution<int> dist(min, max); 

    map<int, int> whoScoredGoalsThisTeam;

    for (int i=0; i<6; ++i) 
    {
         whoScoredGoalsThisTeam[i] = dist(mt);
         cout << "Players who scored goals for : " << teamName 
              << ": " << TeamGoalScorers[whoScoredGoalsThisTeam[i]] << endl;
    }      

    return whoScoredGoalsThisTeam;
}

int main(void)
{
    // Team: Roma: set of (player number, player name, # of goals scored)
    map<int, string> RomaGoalScorers {
	{1, "Dzeko"},
	{2, "Salah"},
	{3, "El Sharaawy"},
	{4, "Manolas"},
	{5, "Naingolan"},
	{6, "Perroti"},	
    };	
    map <int, int> whoScoredGoalsRoma = GetGoalScorers(RomaGoalScorers, "Roma");  
    cout << "===================================" << endl;

    // Team: Leipzig: set of (player number, player name, # of goals scored)
    map<int, string> LeipzigGoalScorers {
        {1, "Werner"},
        {2, "Forsberg"},
        {3, "Selke"},
        {4, "Keita"},
        {5, "Sabitzer"},
        {6, "Burke"},
    };

    map<int, int> whoScoredGoalsLeipzig = GetGoalScorers(LeipzigGoalScorers, "Leipzig");  
    cout << "===================================" << endl;
   
    // Team: Inter: set of (player number, player name, # of goals scored)  
    map<int, string> InterGoalScorers {
        {1, "Icardi"},
        {2, "Candreva"},
        {3, "Perisic"},
	{4, "Banega"},
	{5, "Kongdogbia"},
	{6, "Miranda"},
    };
    
    map<int, int> whoScoredGoalsInter = GetGoalScorers(InterGoalScorers, "Inter Milan");
    cout << "====================================" << endl;

    // Team: Napoli: set of (player number, player name, # of goals scored)  
    map<int, string> NapoliGoalScorers {
        {1, "Milik"},
        {2, "Hamsik"},
        {3, "Mertens"},
	{4, "Insigne"},
	{5, "Callejon"},
	{6, "Koulibally"},
    };
    
    map<int, int> whoScoredGoalsNapoli = GetGoalScorers(NapoliGoalScorers, "Napoli");    
    cout << "====================================" << endl;

// Team: Dortmund: set of (player number, player name, # of goals scored)  
    map<int, string> DortmundGoalScorers {
        {1, "Aubameyang"},
        {2, "Reus"},
        {3, "Dembele"},
	{4, "Schurrle"},
	{5, "Gotze"},
	{6, "Bartra"},
    };
    
    map<int, int> whoScoredGoalsDortmund = GetGoalScorers(DortmundGoalScorers, "Dortmund");    
    cout << "====================================" << endl;

// Team: Galatasaray: set of (player number, player name, # of goals scored)  
    map<int, string> GalatasarayGoalScorers {
        {1, "Sneijder"},
        {2, "Podolski"},
        {3, "Bruma"},
	{4, "Inan"},
	{5, "De Jong"},
	{6, "Yilmaz"},
    };
    
    map<int, int> whoScoredGoalsGalatasaray = GetGoalScorers(GalatasarayGoalScorers, "Galatasaray");    
    cout << "====================================" << endl;

// Team: Lisbon: set of (player number, player name, # of goals scored)  
    map<int, string> LisbonGoalScorers {
        {1, "Dost"},
        {2, "Carvalho"},
        {3, "Campbell"},
	{4, "Ruiz"},
	{5, "Semedo"},
	{6, "Coates"},
    };
   
    map<int, int> whoScoredGoalsLisbon = GetGoalScorers(LisbonGoalScorers, "Lisbon");    
    cout << "====================================" << endl;

// Team: Bayern: set of (player number, player name, # of goals scored)  
    map<int, string> BayernGoalScorers {
	{1, "Lewandowski"},
	{2, "Robben"},
	{3,  "Muller"},
	{4,  "Costa"},
	{5,  "Boateng"},
	{6,  "Sanches"},
    };

map<int, int> whoScoredGoalsBayern = GetGoalScorers(BayernGoalScorers, "Bayern");    
    cout << "====================================" << endl;

// Team: Benfica: set of (player number, player name, # of goals scored)  
    map<int, string> BenficaGoalScorers {
	{1, "Jonas"},
	{2, "Mirtoglu"},
	{3, "Salvio"},
	{4, "Jimenez"},
	{5, "Pizzi"},
	{6, "Lindelof"},
    };

map<int, int> whoScoredGoalsBenfica = GetGoalScorers(BenficaGoalScorers, "Benfica");    
    cout << "====================================" << endl;

// Team: Barcelona: set of (player number, player name, # of goals scored)  
    map<int, string> BarcelonaGoalScorers {
	{1, "Messi"},
	{2, "Suarez"},
	{3, "Neymar"},
	{4, "Rakitic"},
	{5, "Iniesta"},
	{6, "Pique"},
    };

map<int, int> whoScoredGoalsBarcelona = GetGoalScorers(BarcelonaGoalScorers, "FC Barcelona");    
    cout << "====================================" << endl;

// Team: Real Madrid: set of (player number, player name, # of goals scored)  
    map<int, string> Real_MadridGoalScorers {
	{1, "Ronaldo"},
	{2, "Benzema"},
	{3, "Bale"},
	{4, "Modric"},
	{5, "Kroos"},
	{6, "Ramos"},
    };

map<int, int> whoScoredGoalsReal_Madrid = GetGoalScorers(Real_MadridGoalScorers, "Real Madrid");    
    cout << "====================================" << endl;

// Team: Athletico Madrid: set of (player number, player name, # of goals scored)  
    map<int, string> Atl_MadridGoalScorers {
	{1, "Griezmann"},
	{2, "Saul"},
	{3,  "Koke"},
	{4,  "Carrasco"},
	{5,  "Gameiro"},
	{6,  "Godin"},
    };

map<int, int> whoScoredGoalsAtl_Madrid = GetGoalScorers(Atl_MadridGoalScorers, "Atheltico Madrid");    
    cout << "====================================" << endl;


// Team: Chelsea: set of (player number, player name, # of goals scored)  
    map<int, string> ChelseaGoalScorers {
	{1, "Hazard"},
	{2, "Diego Costa"},
	{3,  "Pedro"},
	{4,  "Oscar"},
	{5,  "Fabregas"},
	{6,  "Alonso"},
    };

map<int, int> whoScoredGoalsChelsea = GetGoalScorers(ChelseaGoalScorers, "Chelsea");    
    cout << "====================================" << endl;

// Team: Tottenham Spurs: set of (player number, player name, # of goals scored)  
    map<int, string> SpursGoalScorers {
	{1, "Kane"},
	{2, "Alli"},
	{3,  "Eriksen"},
	{4,  "Son"},
	{5,  "Wanyama"},
	{6,  "Aldereweireld"},
    };

map<int, int> whoScoredGoalsSpurs = GetGoalScorers(SpursGoalScorers, "Tottenham Spurs");    
    cout << "====================================" << endl;

// Team: Manchester City: set of (player number, player name, # of goals scored)  
    map<int, string> Man_CityGoalScorers {
	{1, "Aguero"},
	{2, "Silva"},
	{3,  "Sterling"},
	{4,  "Fernandinho"},
	{5,  "De Bruyne"},
	{6,  "Kompany"},
    };

map<int, int> whoScoredGoalsMan_City = GetGoalScorers(Man_CityGoalScorers, "Manchester City");    
    cout << "====================================" << endl;

// Team: Liverpool: set of (player number, player name, # of goals scored)  
    map<int, string> LiverpoolGoalScorers {
	{1, "Sturridge"},
	{2, "Firmino"},
	{3,  "Coutinho"},
	{4,  "Wijnaldum"},
	{5,  "Lallana"},
	{6,  "Matip"},
    };

map<int, int> whoScoredGoalsLiverpool = GetGoalScorers(LiverpoolGoalScorers, "Liverpool");    
    cout << "====================================" << endl;

// Team: Manchester United: set of (player number, player name, # of goals scored)  
    map<int, string> Man_UnitedGoalScorers {
	{1, "Zlatan"},
	{2, "Martial"},
	{3, "Pogba"},
	{4, "Rashford"},
	{5, "Herrera"},
	{6, "Smalling"},
    };

map<int, int> whoScoredGoalsMan_United = GetGoalScorers(Man_UnitedGoalScorers, "Manchester United");  

cout << "====================================" << endl;
  
// Team: Juventus: set of (player number, player name, # of goals scored)  
    map<int, string> JuventusGoalScorers {
	{1, "Dybala"},
	{2, "Higuain"},
	{3, "Marchisio"},
	{4, "Pjanic"},
	{5, "Dani Alves"},
	{6, "Chiellini"},
    };

map<int, int> whoScoredGoalsJuventus = GetGoalScorers(JuventusGoalScorers, "Juventus");    
    
    cout << "====================================" << endl;

// Team: PSG: set of (player number, player name, # of goals scored)  
    map<int, string> PSGGoalScorers {
	{1, "Cavani"},
	{2, "Di Maria"},
	{3, "Draxler"},
	{4, "Matuidi"},
	{5, "Rabiot"},
	{6, "Thiago Silva"},
    };

map<int, int> whoScoredGoalsPSG = GetGoalScorers(PSGGoalScorers, "PSG");    
    
    cout << "====================================" << endl;

// Team: Monaco: set of (player number, player name, # of goals scored)  
    map<int, string> MonacoGoalScorers {
	{1, "Falcao"},
	{2, "Germain"},
	{3, "Mbappe"},
	{4, "Fabinho"},
	{5, "Mendy"},
	{6, "Bakayoko"},
    };

map<int, int> whoScoredGoalsMonaco = GetGoalScorers(MonacoGoalScorers, "Monaco");    
    
    cout << "====================================" << endl;



    return 0;
}
