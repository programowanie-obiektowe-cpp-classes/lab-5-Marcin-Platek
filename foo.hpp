#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

// Przyjęcie prez referencję listy obiektów Human
vector< char > foo(list< Human >& people)
{
    // Wprowadzenie wektora typu char, który będziemy później zwracać jako wynik
    vector< char > result;
    result.reserve(people.size());
    
    for (auto& person : people)
    {
        // Inkrementacja wieku poprzez wywołanie metody birthday
        person.birthday();
        
        // Sprawdzenie czy człowiek jest potworem (nie lubi ani kotów ani psów) - ciekawe sklasyfikowanie :D
        if (person.isMonster())
        {
            result.push_back('n');
        }
        else
        {
            result.push_back('y');
        }
    }
    
    // Dodatkowo odwracamy kolejność znaków 
    reverse(result.begin(), result.end());
    
    // Zwracamy wektor obiektów typu char
    return result;
}


