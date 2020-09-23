/*
Project: "Sharpening Anime with Neural Networks (SANN)"
Created by: Jonas Mehtali, 09/2020.
*/

/*
Neuron a = sigmoid(E(w*a)+bias)
Neuron connections(L-1 neurons)(weights, L-1 addrs)
*/

#include <iostream>
#include <math.h>
#include <time.h>
#include "list.h"

using namespace std;

/*sigmoid function compresses all values in 0 to 1 range.
  It is also known as activation function.*/
double sigmoid(double x){ return 1 / (1 + exp(-x)); }
// Derivative of activation function
double dSigmoid(double x) { return x * (1 - x); }


int main()
{
  clock_t start = clock();
  /*
  list_of_lists *list = init_double_list_of_lists(20,100,19.999);
  cout<<"list of "<<list_of_lists_len(list)<<" lists\n";
  //print_list_of_double_list(list);
  free_list_of_lists(list);
  */

  clock_t end = clock();
  cout<<"\nCorrect exe, took "<<(float)(end-start)/(CLOCKS_PER_SEC)<<" sec.\n";
  return 0;
}

// ref
/*
for(auto i=entities.begin();i!=entities.end();)
    {
      Entity *e = *i;

      e->update();
      e->anim.update();

      if (e->life==false) {i=entities.erase(i); delete e;}
      else i++;
    }
*/