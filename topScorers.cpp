#include <iostream>
#include <random>
#include <math.h>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

map<int, int> GetGoalScorers(map<int, string>);

map<int, int> GetGoalScorers(map<int, string> TeamGoalScorers)
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
         cout << "Players who scored goals for : " << whoScoredGoalsThisTeam[i] 
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
    map <int, int> whoScoredGoalsRoma = GetGoalScorers(RomaGoalScorers);  
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

    map<int, int> whoScoredGoalsLeipzig = GetGoalScorers(LeipzigGoalScorers);  
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
    
    map<int, int> whoScoredGoalsInter = GetGoalScorers(InterGoalScorers);
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
    
    map<int, int> whoScoredGoalsNapoli = GetGoalScorers(NapoliGoalScorers);    
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
    
    map<int, int> whoScoredGoalsDortmund = GetGoalScorers(DortmundGoalScorers);    
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
    
    map<int, int> whoScoredGoalsGalatasaray = GetGoalScorers(GalatasarayGoalScorers);    
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
   
    map<int, int> whoScoredGoalsLisbon = GetGoalScorers(LisbonGoalScorers);    
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

map<int, int> whoScoredGoalsBayern = GetGoalScorers(BayernGoalScorers);    
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

map<int, int> whoScoredGoalsBenfica = GetGoalScorers(BenficaGoalScorers);    
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

map<int, int> whoScoredGoalsBayern = GetGoalScorers(BayernGoalScorers);    
    cout << "====================================" << endl;





    












    return 0;
}
