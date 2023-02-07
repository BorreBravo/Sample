#include <iostream>
#include <Refresco.h>
#include <Licores.h>
#include <Botanas.h>
#include <Licoreria.h>

using namespace std;
string nom;
int opc,opc2;
int pre1,pre2,pre3;
int cant1,cant2,cant3;
int inv1,inv2,inv3;
string marc1,marc2,marc3;
string tam1,tam2,tam3;
string tip1,tip2;
string sab1;
int main()
{
cout<<"Como se llama la licoreria:"<<endl;
cin>>nom;
Licoreria Nueva;
Nueva.setNombre(nom);

cout<<"Tu licoreria se llama:"<<nom<<endl;
cout<<"Te gustaria consultar el inventario?/n1. si/n2. no"<<endl;
cin>>opc;
if (opc==2){
    cout<<"ok bai";
    return 0;
}else if (opc==1){
    Productos Si;
    int cant=Si.getCantidad();
    cout<<"El inventario es "<<cant<<endl;
    cout<<"Que tipo de producto es/n1. Refrescos/n2. Licor/n3, Botana"<<endl;
cin >> opc2;
if (opc2==1){
        Refresco AbiertoA;
cout<<"Pon las caracterizticas del producto;"<<endl;
cout<<"Precio:"<<endl;
cin>>pre1;
AbiertoA.setPrecio(pre1);
cout<<"Cantidad de productos:"<<endl;
cin>>cant1;
AbiertoA.setCantidad(cant1);
cout<<"Marca de producto:"<<endl;
cin>>marc1;
AbiertoA.setMarca(marc1);
cout<<"Sabor del chesco:"<<endl;
cin>>sab1;
AbiertoA.setSabor(sab1);
cout<<"Tamano del refresco:"<<endl;
cin>>tam1;
AbiertoA.setTamano(tam1);
cout<<"Que deseas hacer con esto:"<<endl;
    cout<<"1. agregar del inv/n2.   retirar del inv"<<endl;
    cin>>inv1;
if (inv1==1){
    int cantidad = AbiertoA.getCantidad();
    cantidad = cantidad + cant1;
    AbiertoA.setCantidad(cantidad);
    cout<<"Agregaste "<<cant1<<" productos"<<marc1<< " al inventario, cosntando"<<pre1<<" cada uno"<<endl;

}else if (inv1== 2){
    int cantidad = AbiertoA.getCantidad();
    cantidad = cantidad - cant1;
    AbiertoA.setCantidad(cantidad);
    cout<<"Retiraste "<<cant1<<" productos"<<marc1<< " al inventario, cosntando"<<pre1<<" cada uno"<<endl;

}else if (opc2==2){
Licores AbiertoB;
cout<<"Pon las caracterizticas del producto;"<<endl;
cout<<"Precio:"<<endl;
cin>>pre2;
AbiertoB.setPrecio(pre2);
cout<<"Cantidad de productos:"<<endl;
cin>>cant2;
AbiertoB.setCantidad(cant2);
cout<<"Marca de producto:"<<endl;
cin>>marc2;
AbiertoB.setMarca(marc2);
cout<<"tipo de licor:"<<endl;
cin>>tip1;
AbiertoB.setTipo(tip1);
cout<<"Tamano del refresco:"<<endl;
cin>>tam2;
AbiertoB.setTamano(tam2);
cout<<"Que deseas hacer con esto:"<<endl;
    cout<<"1. agregar del inv/n2. retirar del inv"<<endl;
    cin>>inv2;
if (inv1==1){
    int cantidad = AbiertoB.getCantidad();
    cantidad = cantidad + cant2;
    AbiertoB.setCantidad(cantidad);
    cout<<"Agregaste "<<cant2<<" productos"<<marc2<< " al inventario, cosntando"<<pre2<<" cada uno"<<endl;

}else if (inv1== 2){
    int cantidad = AbiertoB.getCantidad();
    cantidad = cantidad - cant2;
    AbiertoB.setCantidad(cantidad);
    cout<<"Retiraste "<<cant2<<" productos"<<marc2<< " al inventario, cosntando"<<pre2<<" cada uno"<<endl;

}else if (opc2==3){
Botanas AbiertoC;
cout<<"Pon las caracterizticas del producto;"<<endl;
cout<<"Precio:"<<endl;
cin>>pre3;
AbiertoC.setPrecio(pre3);
cout<<"Cantidad de productos:"<<endl;
cin>>cant3;
AbiertoC.setCantidad(cant3);
cout<<"Marca de producto:"<<endl;
cin>>marc3;
AbiertoC.setMarca(marc3);
cout<<"tipo de botana:"<<endl;
cin>>tip2;
AbiertoC.setTipo(tip2);
cout<<"Tamano de las botanas:"<<endl;
cin>>tam3;
AbiertoC.setTamano(tam3);
cout<<"Que deseas hacer con esto:"<<endl;
    cout<<"1. agregar del inv/n2. retirar del inv"<<endl;
    cin>>inv3;
if (inv1==1){
    int cantidad = AbiertoC.getCantidad();
    cantidad = cantidad + cant3;
    AbiertoC.setCantidad(cantidad);
    cout<<"Agregaste "<<cant3<<" productos"<<marc3<< " al inventario, cosntando"<<pre3<<" cada uno"<<endl;

}else if (inv1== 2){
    int cantidad = AbiertoC.getCantidad();
    cantidad = cantidad - cant3;
    AbiertoC.setCantidad(cantidad);
    cout<<"Retiraste "<<cant3<<" productos"<<marc3<< " al inventario, cosntando"<<pre3<<" cada uno"<<endl;
}


}
}
}
}
return 0;
}


