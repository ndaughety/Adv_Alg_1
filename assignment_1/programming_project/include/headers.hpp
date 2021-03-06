/* headers_hpp */
#ifndef headers_hpp
#define headers_hpp

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <cmath>
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int euclidGcd(int a, int b);
vector<int> extendEuclidGcd(int a, int b, int g, int x, int y);
bool isPrime(int n, int k);
bool isCoPrime(int p, int q, int e);
int polyEval(std::vector<int> num, int base);
vector<int> changeBase(int num, int base);

#endif
