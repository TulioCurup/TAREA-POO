#include "PERSONA.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
  // atributos
  private : string Codigo_empleado, puesto;
  // constructor
  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string dir,int tel,string ce, string puest) : Persona(nom,ape,dir,tel){ 
  Codigo_empleado = ce;
  puesto = puest;
  }
  
  // METODOS
  //set (modificar)
  void setcodigo(string ce){Codigo_empleado = ce;}
  void setpuesto(string puest){puesto = puest;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  //get (mostrar)
  string getpuesto(){	return puesto;}
  string getcodigo(){	return Codigo_empleado;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;}
  
// metodo
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<Codigo_empleado<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};
