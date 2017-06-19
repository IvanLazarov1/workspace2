#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    // key (unique)  -  value
    /*
     string text = "Here in Sofia we are here in Sofia Sofia is the capital";
     vector<string> words;
     words.push_back("Here");
     words.push_back("in");
     words.push_back("Sofia");
     words.push_back("we");
     words.push_back("are");
     words.push_back("here");
     words.push_back("in");
     words.push_back("Sofia");
     words.push_back("Sofia");
     words.push_back("is");
     words.push_back("the");
     words.push_back("capital");


     //not in map =>  word - 1
     //        in map => get value(word) ++

     map<string, int> countingWords;
     for(int i = 0; i < (int) words.size(); i++){
     string key = words[i];

     if(countingWords.find(key) != countingWords.end()){  // if in map
     int val = countingWords[key];
     val++;
     countingWords[key] = val;
     } else {  // if not in map
     countingWords[key] = 1;
     }
     }

     map<string, int>::iterator it;

     for(it = countingWords.begin(); it != countingWords.end(); ++it){
     cout << it->first << " " << it->second << endl;
     }
     */
    int array1[7] = { 11, 40, 13, 14, 10, 16, 11 };
    vector<int> temp1(array1, array1 + 7);
    int array2[7] = { 21, 12, 40, 40, 41, 16, 17 };
    vector<int> temp2(array2, array2 + 7);
    int array3[7] = { 16, 10, 42, 40, 15, 16, 21 };
    vector<int> temp3(array3, array3 + 7);

    map<string, vector<int> > countryTemps;
    countryTemps["Sofia"] = temp1;
    countryTemps["Plovdiv"] = temp2;
    countryTemps["Varna"] = temp3;

    map<string, vector<int> > tempSorted;
    sort(temp1.begin(), temp1.begin() + temp1.size());
    sort(temp2.begin(), temp2.begin() + temp2.size());
    sort(temp3.begin(), temp3.begin() + temp3.size());
    tempSorted["Sofia"] = temp1;
    tempSorted["Plovdiv"] = temp2;
    tempSorted["Varna"] = temp3;

    map<string, vector<int> >::iterator ittt;
    int maxTemp = -100;
    vector<string> cities;
    string city;
    for (ittt = tempSorted.begin(); ittt != tempSorted.end(); ++ittt) {
        vector<int> t = ittt->second;
        //cout << t[t.size() -1] << endl;
        int maxx = t[t.size() - 1];  // max element in every vector

        if (maxx > maxTemp) {
            maxTemp = maxx;
            city = ittt->first;
        }
    }

    for (ittt = tempSorted.begin(); ittt != tempSorted.end(); ++ittt) {
        vector<int> t = ittt->second;
        if (t[t.size() - 1] == maxTemp) {
            cities.push_back(ittt->first);
        }
    }

    //2
    map<string, int> cityMinTemp;
    for (ittt = tempSorted.begin(); ittt != tempSorted.end(); ++ittt) {
        vector<int> t = ittt->second;
        int minn = t[0];

        cityMinTemp[ittt->first] = minn;
    }

    //3 петте най-високи темп. за стараната : град -> темп.
    set<int> allTemps;
    for (ittt = tempSorted.begin(); ittt != tempSorted.end(); ++ittt) {
        vector<int> t = ittt->second;
        //allTemps.insert(allTemps.begin(), t.begin() + t.size());
        copy( t.begin(), t.end(), inserter( allTemps, allTemps.end() ) );
    }


    vector<int> vv(allTemps.begin(), allTemps.end());
    sort(vv.begin(), vv.begin() + vv.size());

    vector<int> fiveTemps;
    //copy(allTemps.begin() + (allTemps.size() - 5), allTemps.end(), fiveTemps.begin());

    for (int i = (int) vv.size() - 1; i > (int) vv.size() - 6;
            i--) {
        fiveTemps.push_back(vv[i]);
    }

    multimap<string, int> result;
    for (int i = 0; i < (int) fiveTemps.size(); i++) {
        int mtemp = fiveTemps[i];
        for (ittt = tempSorted.begin(); ittt != tempSorted.end(); ++ittt) {
            vector<int> t = ittt->second;
            if (find(t.begin(), t.end(), mtemp) != t.end()) {
                result.insert(std::pair<string, int>(ittt->first, mtemp));
            }
        }
    }
    multimap<string, int>::iterator it2;
    for (it2 = result.begin(); it2 != result.end(); ++it2) {
        cout << it2->first << " " << it2->second << endl;
    }

    /*for(int i = 0; i < (int) temp1.size(); ++i){
     cout << temp1[i] << " ";
     }
     */

    //max(m1, max(m2,max(m3,m4)));
    /*
     key            vector<int>
     Sofia    12 34 17 23 23
     Plovdiv  15 17 19 32 12
     Varna    34 22 8 9

     1) в кой град е било най-топло : град/градове
     2) било най-студено , за всеки от градовете
     град -> най- ниска температура
     3) петте най-високи темп. за стараната : град -> темп.
     4) колко пъти във всеки град е било > 15 : град -> бройка
     5) колко дни е било <= 10, колко дни е било <=20,
     колко дни е било над 20 : брой дни -> гранична температура
     */

    return 0;
}
