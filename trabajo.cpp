#include <iostream>
using namespace std;

int main() {
    int edad;
    int experiencia;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese sus años de experiencia en programación: ";
    cin >> experiencia;

    if (edad >= 18) {
        if (experiencia >= 3) {
            cout << "Acceso Concedido: Perfil Desarrollador Senior" << endl;
        } else {
            cout << "Acceso Concedido: Perfil Desarrollador Junior" << endl;
        }
    } else {
        cout << "Acceso Denegado: No cumple con la edad mínima requerida" << endl;
    }

    return 0;
}

https://cpp.sh/?source=%23include+%3Ciostream%3E%0D%0Ausing+namespace+std%3B%0D%0A%0D%0Aint+main()+%7B%0D%0A++++int+edad%3B%0D%0A++++int+experiencia%3B%0D%0A%0D%0A++++cout+%3C%3C+%22Ingrese+su+edad%3A+%22%3B%0D%0A++++cin+%3E%3E+edad%3B%0D%0A%0D%0A++++cout+%3C%3C+%22Ingrese+sus+a%C3%B1os+de+experiencia+en+programaci%C3%B3n%3A+%22%3B%0D%0A++++cin+%3E%3E+experiencia%3B%0D%0A%0D%0A++++if+(edad+%3E%3D+18)+%7B%0D%0A++++++++if+(experiencia+%3E%3D+3)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Acceso+Concedido%3A+Perfil+Desarrollador+Senior%22+%3C%3C+endl%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++cout+%3C%3C+%22Acceso+Concedido%3A+Perfil+Desarrollador+Junior%22+%3C%3C+endl%3B%0D%0A++++++++%7D%0D%0A++++%7D+else+%7B%0D%0A++++++++cout+%3C%3C+%22Acceso+Denegado%3A+No+cumple+con+la+edad+m%C3%ADnima+requerida%22+%3C%3C+endl%3B%0D%0A++++%7D%0D%0A%0D%0A++++return+0%3B%0D%0A%7D



#include <iostream>
using namespace std;

int main() {
    int opcion;

    while (true) {
        cout << "\n===== CAJERO AUTOMATICO =====" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Retirar Dinero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Mostrando saldo..." << endl;
        }
        else if (opcion == 2) {
            cout << "Procesando retiro..." << endl;
        }
        else if (opcion == 3) {
            cout << "Gracias por usar el sistema." << endl;
            break; // Sale del bucle
        }
        else {
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }
    }

    return 0;
}


https://cpp.sh/?source=%23include+%3Ciostream%3E%0D%0Ausing+namespace+std%3B%0D%0A%0D%0Aint+main()+%7B%0D%0A++++int+opcion%3B%0D%0A%0D%0A++++while+(true)+%7B%0D%0A++++++++cout+%3C%3C+%22%5Cn%3D%3D%3D%3D%3D+CAJERO+AUTOMATICO+%3D%3D%3D%3D%3D%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%221.+Consultar+Saldo%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%222.+Retirar+Dinero%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%223.+Salir%22+%3C%3C+endl%3B%0D%0A++++++++cout+%3C%3C+%22Seleccione+una+opcion%3A+%22%3B%0D%0A++++++++cin+%3E%3E+opcion%3B%0D%0A%0D%0A++++++++if+(opcion+%3D%3D+1)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Mostrando+saldo...%22+%3C%3C+endl%3B%0D%0A++++++++%7D%0D%0A++++++++else+if+(opcion+%3D%3D+2)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Procesando+retiro...%22+%3C%3C+endl%3B%0D%0A++++++++%7D%0D%0A++++++++else+if+(opcion+%3D%3D+3)+%7B%0D%0A++++++++++++cout+%3C%3C+%22Gracias+por+usar+el+sistema.%22+%3C%3C+endl%3B%0D%0A++++++++++++break%3B+%2F%2F+Sale+del+bucle%0D%0A++++++++%7D%0D%0A++++++++else+%7B%0D%0A++++++++++++cout+%3C%3C+%22Opcion+invalida.+Intente+nuevamente.%22+%3C%3C+endl%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A%0D%0A++++return+0%3B%0D%0A%7D



#include <iostream>
using namespace std;

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

    cout << "Ingrese numeros enteros (0 para finalizar):" << endl;

    while (true) {
        cout << "Numero: ";
        cin >> numero;

        if (numero == 0) {
            break; // Finaliza el ciclo
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "\n===== RESULTADOS =====" << endl;
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}


https://cpp.sh/?source=%23include+%3Ciostream%3E%0D%0Ausing+namespace+std%3B%0D%0A%0D%0Aint+main()+%7B%0D%0A++++int+numero%3B%0D%0A++++int+pares+%3D+0%3B%0D%0A++++int+impares+%3D+0%3B%0D%0A%0D%0A++++cout+%3C%3C+%22Ingrese+numeros+enteros+(0+para+finalizar)%3A%22+%3C%3C+endl%3B%0D%0A%0D%0A++++while+(true)+%7B%0D%0A++++++++cout+%3C%3C+%22Numero%3A+%22%3B%0D%0A++++++++cin+%3E%3E+numero%3B%0D%0A%0D%0A++++++++if+(numero+%3D%3D+0)+%7B%0D%0A++++++++++++break%3B+%2F%2F+Finaliza+el+ciclo%0D%0A++++++++%7D%0D%0A%0D%0A++++++++if+(numero+%25+2+%3D%3D+0)+%7B%0D%0A++++++++++++pares%2B%2B%3B%0D%0A++++++++%7D+else+%7B%0D%0A++++++++++++impares%2B%2B%3B%0D%0A++++++++%7D%0D%0A++++%7D%0D%0A%0D%0A++++cout+%3C%3C+%22%5Cn%3D%3D%3D%3D%3D+RESULTADOS+%3D%3D%3D%3D%3D%22+%3C%3C+endl%3B%0D%0A++++cout+%3C%3C+%22Cantidad+de+numeros+pares%3A+%22+%3C%3C+pares+%3C%3C+endl%3B%0D%0A++++cout+%3C%3C+%22Cantidad+de+numeros+impares%3A+%22+%3C%3C+impares+%3C%3C+endl%3B%0D%0A%0D%0A++++return+0%3B%0D%0A%7D
