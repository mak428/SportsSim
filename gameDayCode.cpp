#include <iostream>
#include <random>
#include <math.h>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;
int main(void)
{
    random_device rd;
    mt19937 mt(rd());
    int min = 0;
    int max = 18;
    uniform_int_distribution<int> dist(min, max);

    /*for (int i=0; i<16; ++i)
    {
        cout << i << ":" << dist(mt) << endl;
    }*/
    map<string, float> WeightedTeamScores {
        {"Barcelona", 0.518134715},
	{"Real Madrid", 0.518134715},
	{"Bayern", 0.518134715},
	{"Dortmund", 0.4663212435},
	{"Athletico", 0.4663212435},
	{"Chelsea", 0.4663212435},
	{"PSG", 0.414507772},
	{"Arsenal", 0.414507772},
	{"Juventus", 0.414507772},
	{"Man City", 0.3626943005},
	{"AC Milan", 0.3626943005},
	{"Inter Milan", 0.3626943005 },
	{"Roma", 0.3626943005},
	{"Napoli", 0.310880829},
	{"Monaco", 0.310880829},
	{"Porto", 0.310880829},
	{"Lisbon", 0.310880829},
	{"Benfica", 0.310880829},
	{"Valencia", 0.310880829},
	{"Zenit", 0.310880829},
	{"Hoffenheim", 0.2590673575},
	{"Leipzig", 0.2590673575},
	{"Celtic", 0.2590673575},
	{"Nice", 0.2590673575},
	{"Galatasaray", 0.2590673575},
	{"Ajax", 0.207253886},
	{"Malmo", 0.207253886},
	{"FC Basel", 0.1554404145},
	{"Anderlecht", 0.1554404145},
	{"Olympiakos", 0.103626943},
	{"Copenhagen", 0.0518134715}    
    };

    for (map<string, float>::iterator it=WeightedTeamScores.begin(); it!=WeightedTeamScores.end(); ++it)
    { 
        cout << it->first << " : " << round((it->second)*dist(mt)) << endl;
    }



    return 0;
}
