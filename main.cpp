#include<iostream>
#include<Python.h>
#include"sam1.h"

using namespace std;

int main(){
 
  Py_Initialize();

  #if PY_MAJOR_VERSION < 3
   initsam1();
  #else
   PyInit_sam1();
  #endif  

  //if __name__=='__main__':
  //print('Starting Program')
  //FD_Run(FD_Init(),0)
  cout << "Starting Program!!"<<endl;

  cout << calc(3, 5);

  Py_Finalize();

  return 0;
}

