//TAREA 1

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double discriminante, x1, x2, parteReal, parteImaginaria;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;

    cout << "Ingrese el coeficiente b: ";
    cin >> b;

    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    if (a != 0) {
        discriminante = pow(b, 2) - (4 * a * c);

        if (discriminante > 0) {
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);

            cout << "\nLas raices son reales y distintas." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else {
            if (discriminante == 0) {
                x1 = -b / (2 * a);

                cout << "\nLas raices son reales e iguales." << endl;
                cout << "x1 = x2 = " << x1 << endl;
            }
            else {
                parteReal = -b / (2 * a);
                parteImaginaria = sqrt(-discriminante) / (2 * a);

                cout << "\nLas raices son complejas imaginarias." << endl;
                cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
                cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
            }
        }
    }
    else {
        cout << "Error: a no puede ser 0 porque no seria una ecuacion cuadratica." << endl;
    }

    return 0;
}

//TAREA 2

#include <iostream>

using namespace std;

int main() {
    int dia, mes, anio;
    int diasMes;
    bool bisiesto = false;

    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        bisiesto = true;
    }

    if (mes >= 1 && mes <= 12) {

        if (mes == 2) {
            if (bisiesto) {
                diasMes = 29;
            } else {
                diasMes = 28;
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            diasMes = 30;
        }
        else {
            diasMes = 31;
        }

        if (dia >= 1 && dia <= diasMes) {
            cout << "\nLa fecha es valida." << endl;

            if (bisiesto) {
                cout << "El anio es bisiesto." << endl;
            } else {
                cout << "El anio no es bisiesto." << endl;
            }
        }
        else {
            cout << "\nFecha invalida: el dia no corresponde al mes ingresado." << endl;
        }
    }
    else {
        cout << "\nFecha invalida: el mes debe estar entre 1 y 12." << endl;
    }

    return 0;
}

//TAREA 3

#include <iostream>

using namespace std;

int main() {
    double horas, tarifa;
    double salarioBruto, impuesto, salarioNeto;
    double porcentajeImpuesto;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa;

    if (horas <= 35) {
        salarioBruto = horas * tarifa;
    }
    else {
        salarioBruto = (35 * tarifa) +
                        ((horas - 35) * tarifa * 1.5);
    }

    if (salarioBruto <= 500) {
        porcentajeImpuesto = 0.0;
    }
    else if (salarioBruto <= 900) {
        porcentajeImpuesto = 0.25;
    }
    else {
        porcentajeImpuesto = 0.45;
    }

    impuesto = salarioBruto * porcentajeImpuesto;
    salarioNeto = salarioBruto - impuesto;

    cout << "\n----- RESUMEN DE NOMINA -----" << endl;
    cout << "Salario bruto: $" << salarioBruto << endl;
    cout << "Porcentaje de impuesto: "
         << porcentajeImpuesto * 100 << "%" << endl;
    cout << "Impuesto retenido: $" << impuesto << endl;
    cout << "Salario neto: $" << salarioNeto << endl;

    return 0;
}

//TAREA 4

#include <iostream>

using namespace std;

int main() {
    int inicio, fin;
    int divisores;

    cout << "Ingrese el inicio del rango: ";
    cin >> inicio;

    cout << "Ingrese el fin del rango: ";
    cin >> fin;

    cout << "\nNumeros primos en el rango [" 
         << inicio << ", " << fin << "]:" << endl;

    for (int numero = inicio; numero <= fin; numero++) {

        if (numero < 2) {
            continue;
        }

        divisores = 0;

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << numero << " ";
        }
    }

    cout << endl;

    return 0;
}

//TAREA 5

#include <iostream>

using namespace std;

int main() {
    long long numero, original, inverso = 0;
    int digito;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    original = numero;

    while (numero != 0) {
        digito = numero % 10;        
        inverso = inverso * 10 + digito;
        numero = numero / 10;        
    }

    cout << "\nNumero original: " << original << endl;
    cout << "Numero invertido: " << inverso << endl;

    if (original == inverso) {
        cout << "El numero es capicua." << endl;
    } else {
        cout << "El numero NO es capicua." << endl;
    }

    return 0;
}

//TAREA 6

#include <iostream>

using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    do {
        cout << "Ingrese un numero natural no negativo: ";
        cin >> n;

        if (n < 0) {
            cout << "Error: debe ingresar un numero mayor o igual a 0.\n";
        }

    } while (n < 0);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "\nEl factorial de " << n
         << " es: " << factorial << endl;

    return 0;
}

//TAREA 7

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int N;
    double suma = 0, media;
    int encima = 0, debajo = 0;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    vector<double> numeros(N);

    for (int i = 0; i < N; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    media = suma / N;

    for (int i = 0; i < N; i++) {
        if (numeros[i] > media) {
            encima++;
        }
        else if (numeros[i] < media) {
            debajo++;
        }
    }

    double porcentajeEncima = (encima * 100.0) / N;

    cout << fixed << setprecision(2);

    cout << "\nMedia aritmetica: " << media << endl;
    cout << "Elementos por encima de la media: "
         << porcentajeEncima << "%" << endl;
    cout << "Cantidad de elementos por debajo de la media: "
         << debajo << endl;

    cout << "\nDesviacion de cada elemento respecto a la media:\n";

    for (int i = 0; i < N; i++) {
        double desviacion = numeros[i] - media;

        cout << "Elemento [" << i << "] = "
             << numeros[i]
             << " --> Desviacion: "
             << desviacion << endl;
    }

    return 0;
}


//TAREA 8

#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    int numeros[N];

    for (int i = 0; i < N; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    cout << "\nFrecuencia de aparicion de cada numero:\n";

    for (int i = 0; i < N; i++) {
        bool yaContado = false;

        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                yaContado = true;
                break;
            }
        }

        if (!yaContado) {
            int frecuencia = 0;

            for (int j = 0; j < N; j++) {
                if (numeros[j] == numeros[i]) {
                    frecuencia++;
                }
            }

            cout << numeros[i]
                 << " aparece "
                 << frecuencia
                 << " veces." << endl;
        }
    }

    return 0;
}

//TAREA 9

#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;

    string nombres[N];
    float promedios[N];

    cin.ignore();

    for (int i = 0; i < N; i++) {
        cout << "\nNombre del estudiante " << i + 1 << ": ";
        getline(cin, nombres[i]);

        cout << "Promedio final: ";
        cin >> promedios[i];
        cin.ignore();
    }

    string buscado;
    bool encontrado = false;

    cout << "\nIngrese el nombre a buscar: ";
    getline(cin, buscado);


    for (int i = 0; i < N; i++) {
        if (nombres[i] == buscado) {
            cout << "\nEstudiante encontrado." << endl;
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Promedio final: " << promedios[i] << endl;

            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nEl registro no existe." << endl;
    }

    return 0;
}

//TAREA 10

#include <iostream>

using namespace std;

int main() {
    int M, N, filasB, P;

    cout << "Filas de A (M): ";
    cin >> M;

    cout << "Columnas de A (N): ";
    cin >> N;

    cout << "Filas de B: ";
    cin >> filasB;

    cout << "Columnas de B (P): ";
    cin >> P;

    if (N != filasB) {
        cout << "\nError: No es posible multiplicar las matrices." << endl;
        cout << "Las columnas de A deben ser iguales a las filas de B." << endl;
        return 0;
    }

    int A[M][N];
    int B[filasB][P];
    int C[M][P];

    cout << "\nIngrese los elementos de la matriz A:\n";

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nIngrese los elementos de la matriz B:\n";

    for (int i = 0; i < filasB; i++) {
        for (int j = 0; j < P; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriz resultado C:\n";

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

//TAREA 11

#include <iostream>

using namespace std;

int main() {
    int M, N;

    cout << "Ingrese la cantidad de filas: ";
    cin >> M;

    cout << "Ingrese la cantidad de columnas: ";
    cin >> N;

    int matriz[M][N];

    cout << "\nIngrese los elementos de la matriz:\n";

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "M[" << i << "][" << j << "] = ";
            cin >> matriz[i][j];
        }
    }

    bool encontrado = false;

    for (int i = 0; i < M; i++) {

        int minimoFila = matriz[i][0];
        int columnaMinimo = 0;

        for (int j = 1; j < N; j++) {
            if (matriz[i][j] < minimoFila) {
                minimoFila = matriz[i][j];
                columnaMinimo = j;
            }
        }

        bool esPuntoSilla = true;

        for (int k = 0; k < M; k++) {
            if (matriz[k][columnaMinimo] > minimoFila) {
                esPuntoSilla = false;
                break;
            }
        }

        if (esPuntoSilla) {
            cout << "\nPunto de silla encontrado:" << endl;
            cout << "Valor: " << minimoFila << endl;
            cout << "Posicion: (" << i << ", "
                 << columnaMinimo << ")" << endl;

            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "\nNo se encontraron puntos de silla." << endl;
    }

    return 0;
}

//TAREA 12

#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> N;

    int matriz[N][N];

    cout << "\nIngrese los elementos de la matriz:\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "M[" << i << "][" << j << "] = ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            int aux = matriz[i][j];
            matriz[i][j] = matriz[i][N - 1 - j];
            matriz[i][N - 1 - j] = aux;
        }
    }

    cout << "\nMatriz rotada 90 grados en sentido horario:\n";

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

//TAREA 13

#include <iostream>

using namespace std;

long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    cout << "Ingrese la posicion N de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: N debe ser un numero no negativo." << endl;
    }
    else {
        cout << "F(" << n << ") = "
             << fibonacci(n) << endl;
    }

    return 0;
}

//TAREA 14

#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    int vector[N];

    for (int i = 0; i < N; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> vector[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {

            if (vector[j] > vector[j + 1]) {

                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }

    cout << "\nVector ordenado de forma ascendente:\n";

    for (int i = 0; i < N; i++) {
        cout << vector[i] << " ";
    }

    cout << endl;

    return 0;
}

//TAREA 15

#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> N;

    int vector[N];

    cout << "\nIngrese los elementos ordenados:\n";

    for (int i = 0; i < N; i++) {
        cin >> vector[i];
    }

    int buscado;

    cout << "\nValor a buscar: ";
    cin >> buscado;

    int inicio = 0;
    int fin = N - 1;
    bool encontrado = false;

    while (inicio <= fin) {

        int medio = (inicio + fin) / 2;

        if (vector[medio] == buscado) {

            cout << "\nElemento encontrado en la posicion: "
                 << medio << endl;

            encontrado = true;
            break;
        }
        else if (buscado < vector[medio]) {

            fin = medio - 1;
        }
        else {

            inicio = medio + 1;
        }
    }

    if (!encontrado) {
        cout << "\nEl elemento no se encuentra en el vector."
             << endl;
    }

    return 0;
}
