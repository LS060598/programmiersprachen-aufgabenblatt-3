
#include <cstdlib>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>


int main(){
   
  // Aufgabe 3.2
  std::list<unsigned int> l1(100);
  for (auto& l : l1) {
  l = std::rand() % 101; //  Zahlen von 0-100
  }
  std::vector<unsigned int> vec1(l1.size());
  std::copy(std::begin(l1), std::end(l1), std::begin(vec1));


  //3.3 wie viele Unterschiedliche Zahlen
  std::set<unsigned int> set_l1(std::begin(l1), std::end(l1));
  std::cout << " Die Liste besteht aus " << set_l1.size() << " unterschiedlichen Zahlen \n";

  //Welche zahlen nicht in Liste
  std::cout << "Diese Zahlen sind nicht in der Liste: " << std::endl;
  
  for(int x=0;x<=100;++x){
      
      if(set_l1.count(x)==false){ // wenn Zahl nicht in Liste
          std::cout << x <<" ";
      }
  }

  //Häufigkeit jeder Zahl in Liste
  std::map<unsigned int, int> haufigkeiten;

	//Paare aus Zahl / Haufigkeit zu Map hinzufügen
	for (auto& key : set_l1){	
		int counter = 0;
		for(auto& value : l1){
			if(key == value){
				++counter;
			}
		}
		haufigkeiten[key] = counter;
	}

	std::cout << "\nHaufigkeiten: \n";

	//map ausgeben in form key : value
	for (auto& i : haufigkeiten){
		//i ist pair (first, second) mit (key, value)
		std::cout << i.first << " : " << i.second << "\n";
	}
}