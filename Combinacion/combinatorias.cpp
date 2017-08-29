#include <iostream>

using namespace std;

int combinatoria(int a,int b){
    if(a==b || b==0){
        return 1;
    }
    return combinatoria(a-1,b)+combinatoria(a-1,b-1);
}

void subindices(char comb[], int a, int b, int c, string cad){
    if (b==1){
        for (int i=c;i<a;i++){
            cout<<cad+comb[i]<<endl;
        }
    }
    if (b>1){
        subindices(comb,a,b-1,c+1,cad+comb[c]);
        if (a-c>b){
            subindices(comb,a,b,c+1,cad);
        }
}


}

int main()
{
   int a;
   int b;


   cout<<"Ingresar cardinalidad del conjunto"<<endl;
   cin>>a;
   cout<<"Ingresar cardinalidad de los subconjuntos"<<endl;
   cin>>b;

   char comb[a];
    
   cout<<combinatoria(a,b)<<endl;


   for(int i=0;i<a;i++){
       cout<<i<<endl;

       comb[i]=97+i;
   }

   cout<<comb<<endl;
   cout<<"Las posibles combinaciones son"<<endl;
   subindices(comb,a,b,0,"");

}
