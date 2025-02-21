#include <iostream>
using namespace std;

struct registro_de_automoviles
{
    string codigoA+ = "Sin codigo";
    string marca = "Sin marca";
    string modelo = "Sin modelo";
    string placa = "Sin placa";
    int anyo = 0;
};

struct cliente_de_videoclib
{
    string nombre;
    string direccion;
    string telefono;
    codigocl;
    float adeuda;
} e1, e2;

struct Licenci_de_aManejo {
    string nombres;
    string apellidoPaterno;
    string apellidoMaterno;
    string fechaDesde;
    string fechaVencimiento;
    string nacionalidad;
    string grupoSanguineo;
    string tipoLicencia;
    string restricciones;
    string direccion;
    string cedula;
    bool donaOrganos;
};

struct Tarjeta_de_Credito {
    string nombre;
    string fechaVencimiento;
    string numeroTarjeta;
    float saldo;
};
void registro()
{
    persona p5, p6;
}

// Ingreso de datos para Automóvil
cout << "Ingrese el código del automóvil: ";
cin >> auto1.CODIGOA;
cout << "Ingrese la marca: ";
cin >> auto1.marca;
cout << "Ingrese el modelo: ";
cin >> auto1.modelo;
cout << "Ingrese el año: ";
cin >> auto1.anyo;
cout << "Ingrese la placa: ";
cin >> auto1.placa;

cin.ignore(); // Limpiar buffer

// Ingreso de datos para Cliente de Videoclub
cout << "Ingrese el nombre del cliente: ";
getline(cin, cliente1.nombre);
cout << "Ingrese la dirección: ";
getline(cin, cliente1.direccion);
cout << "Ingrese el teléfono: ";
getline(cin, cliente1.telefono);
cout << "Ingrese la cantidad adeudada: ";
cin >> cliente1.adeuda;
cout << "Ingrese el código CI: ";
cin >> cliente1.codigoci;

cin.ignore(); // Limpiar buffer

// Ingreso de datos para Licencia de Manejo
cout << "Ingrese los nombres: ";
getline(cin, licencia1.nombres);
cout << "Ingrese el apellido paterno: ";
getline(cin, licencia1.apellidoPaterno);
cout << "Ingrese el apellido materno: ";
getline(cin, licencia1.apellidoMaterno);
cout << "Ingrese la fecha de emisión: ";
getline(cin, licencia1.fechaDesde);
cout << "Ingrese la fecha de vencimiento: ";
getline(cin, licencia1.fechaVencimiento);
cout << "Ingrese la nacionalidad: ";
getline(cin, licencia1.nacionalidad);
cout << "Ingrese el grupo sanguíneo: ";
getline(cin, licencia1.grupoSanguineo);
cout << "Ingrese el tipo de licencia: ";
getline(cin, licencia1.tipoLicencia);
cout << "Ingrese restricciones (si hay): ";
getline(cin, licencia1.restricciones);
cout << "¿Dona órganos? (1 para sí, 0 para no): ";
cin >> licencia1.donaOrganos;
cin.ignore(); // Limpiar buffer
cout << "Ingrese la dirección: ";
getline(cin, licencia1.direccion);
cout << "Ingrese la cédula: ";
getline(cin, licencia1.cedula);

// Ingreso de datos para Tarjeta de Crédito
cout << "Ingrese el nombre en la tarjeta: ";
getline(cin, tarjeta1.nombre);
cout << "Ingrese la fecha de vencimiento: ";
getline(cin, tarjeta1.fechaVencimiento);
cout << "Ingrese el número de tarjeta: ";
getline(cin, tarjeta1.numeroTarjeta);
cout << "Ingrese el saldo disponible: ";
cin >> tarjeta1.saldo;

// Mostrar datos ingresados
cout << "\n--- Automóvil ---" << endl;
cout << "Código: " << auto1.CODIGOA << "\nMarca: " << auto1.marca << "\nModelo: " << auto1.modelo << "\nAño: " << auto1.anyo << "\nPlaca: " << auto1.placa << endl;

cout << "\n--- Cliente Videoclub ---" << endl;
cout << "Nombre: " << cliente1.nombre << "\nDirección: " << cliente1.direccion << "\nTeléfono: " << cliente1.telefono << "\nAdeuda: " << cliente1.adeuda << "\nCódigo CI: " << cliente1.codigoci << endl;

cout << "\n--- Licencia de Manejo ---" << endl;
cout << "Nombres: " << licencia1.nombres << "\nApellido Paterno: " << licencia1.apellidoPaterno << "\nApellido Materno: " << licencia1.apellidoMaterno << "\nFecha de Emisión: " << licencia1.fechaDesde;
cout << "\nFecha de Vencimiento: " << licencia1.fechaVencimiento << "\nNacionalidad: " << licencia1.nacionalidad << "\nGrupo Sanguíneo: " << licencia1.grupoSanguineo;
cout << "\nTipo de Licencia: " << licencia1.tipoLicencia << "\nRestricciones: " << licencia1.restricciones << "\nDona órganos: " << (licencia1.donaOrganos ? "Sí" : "No");
cout << "\nDirección: " << licencia1.direccion << "\nCédula: " << licencia1.cedula << endl;

cout << "\n--- Tarjeta de Crédito ---" << endl;
cout << "Nombre: " << tarjeta1.nombre << "\nFecha de Vencimiento: " << tarjeta1.fechaVencimiento;
cout << "\nNúmero de Tarjeta: " << tarjeta1.numeroTarjeta << "\nSaldo: " << tarjeta1.saldo << endl;

return 0;
}
