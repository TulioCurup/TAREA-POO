// cambio para el repositorio remoto
#include "CLIENTE.cpp"
#include "EMPLEADO.cpp"

#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion, Codigo_empleado, puesto;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese codigo empleado: ";
	cin>>Codigo_empleado;
	cout<<"Ingrese puesto: ";
	cin>>puesto;
	// instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	empleado obj = Empleado(nombres,apellidos,direccion,telefono,nit,Codigo_empleado,puesto);

	obj.mostrar();
	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	// instanciar un objeto y utilizar get and set
	
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/	
}
