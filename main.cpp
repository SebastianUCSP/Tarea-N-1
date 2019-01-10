#include <iostream>

using namespace std;

int main()
{
    //2.16

    cout << "ingrese 2 numeros" << endl;
    int a, b;
    cin >> a >> b;
    cout << "suma " << a + b << endl;
    cout << "resta " << a - b << endl;
    cout << "multiplicacion " << a * b << endl;
    cout << "division " << a / b << endl;

    //2.17

    //a

    cout << "1 2 3 4 " << endl;

     //b

     cout << "1 " << "2 " << "3 " << "4 " << endl;

     //c

     cout << "1 ";
     cout << "2 ";
     cout << "3 ";
     cout << "4 " << endl;

     //2.18

     cout << "ingrese 2 numeros\n";
     int num1,num2;
     cin >> num1 >> num2;
     if(num1 < num2)
        cout << "el mayor es " << num2 << endl;
     if(num2 < num1)
        cout << "el mayor es " << num1 << endl;
     if(num1 == num2)
        cout << "son iguales\n";

    //2.19

    cout << "ingrese 3 numeros";
    int x, y, z, menor, mayor;
    cin >> x >> y >> z;
    cout << x << " " << y << " " << z << endl;
    cout << "suma " << x + y + z << endl;
    cout << "promedio " << (x + y + z)/3 << endl;
    cout << "producto " << x * y * z << endl;

    if((x <= y)&&(x <= z))
        menor = x;
    if((y <= x)&&(y <= z))
        menor = y;
    if((z <= y)&&(z <= x))
        menor = z;

    cout << "menor " << menor << endl;

    if((x >= y)&&(x >= z))
        mayor = x;
    if((y >= x)&&(y >= z))
        mayor = y;
    if((z >= y)&&(z >= x))
        mayor = z;

    cout << "mayor " << mayor << endl;

    //2.20

    int radio;
    float pi = 3.14159;
    cout << "ingrese el radio ";
    cin >> radio;
    cout << "diametro " << radio*2 << endl;
    cout << "circuferencia " << (radio*2)*pi << endl;
    cout << "area " << pi*radio*radio << endl;

    //2.21

    cout << " *********            ***                *              *\n";
    cout << " *       *          *     *             ***            * *\n";
    cout << " *       *         *       *           *****          *   *\n";
    cout << " *       *         *       *             *           *     *\n";
    cout << " *       *         *       *             *          *       *\n";
    cout << " *       *         *       *             *           *     *\n";
    cout << " *       *         *       *             *            *   *\n";
    cout << " *       *          *     *              *             * *\n";
    cout << " *********            ***                *              *\n";

    //2.22

    cout << "*\n**\n***\n****\n*****" << endl;

    //2.23

    int na, nb, nc, nd , ne;
    cin >> na >> nb >> nc >> nd >> ne;
    cout << "numeros ingresados: " << na << " " << nb << " " << nc << " " << nd << " " << ne << endl;
    if((na<=nb)&&(na<=nc)&&(na<=nd)&&(na<=ne))
        cout << na << "es el menor\n";
    if((na>=nb)&&(na>=nc)&&(na>=nd)&&(na>=ne))
        cout << na << "es el mayor\n";
    if((nb<=na)&&(nb<=nc)&&(nb<=nd)&&(nb<=ne))
        cout << nb << "es el menor\n";
    if((nb>=na)&&(nb>=nc)&&(nb>=nd)&&(nb>=ne))
        cout << nb << "es el mayor\n";
    if((nc<=nb)&&(nc<=na)&&(nc<=nd)&&(nc<=ne))
        cout << nc << "es el menor\n";
    if((nc>=nb)&&(nc>=na)&&(nc>=nd)&&(nc>=ne))
        cout << nc << "es el mayor\n";
    if((nd<=nb)&&(nd<=nc)&&(nd<=na)&&(nd<=ne))
        cout << nd << "es el menor\n";
    if((nd>=nb)&&(nd>=nc)&&(nd>=na)&&(nd>=ne))
        cout << nd << "es el mayor\n";
    if((ne<=nb)&&(ne<=nc)&&(ne<=nd)&&(ne<=na))
        cout << ne << "es el menor\n";
    if((ne>=nb)&&(ne>=nc)&&(ne>=nd)&&(ne>=na))
        cout << ne << "es el mayor\n";

    //2.24
    int num;
    cout << "ingrese un numero\n";
    cin >> num;
    if(num % 2 == 0)
        cout << num << " es par";
    else
        cout << num << " es impar";

      //2.25
    int mult1,mult2;
    cout << "ingresa 2 numeros ";
    cin >> mult1 >> mult2;
    if(mult1 % mult2 == 0)
        cout << mult1 << " es multiplo de " << mult2;
    else
        cout << mult1 << " no es multiplo de " << mult2;

    //2.26

    cout << "8 lineas\n";

    cout << " ********           \n";
    cout << "  ********                \n";
    cout << " ********           \n";
    cout << "  ********                \n";
    cout << " ********           \n";
    cout << "  ********                \n";
    cout << " ********           \n";
    cout << "  ********                \n";

    cout << "1 linea\n";

    cout << " ********\n  ********\n ********\n  ********\n ********\n  ********\n ********\n  ********\n";

    //2.27

    cout << static_cast<int>('A');

    //2.28

    cout << "ingrese un numero de 5 digitos\n";
    int nume, temp;
    cin >> nume;

    cout << nume/10000 << "  ";
    temp = nume%10000;
    cout << temp/1000 << "  ";
    temp = nume%1000;
    cout << temp/100 << "  ";
    temp = nume%100;
    cout << temp/10 << "  ";
    temp = nume%10;
    cout << temp << "  ";

    //2.29

    cout << "entero   cuadrado   cubo\n";
    cout << 0 << "        " << 0*0 << "          " << 0*0*0 << endl;
    cout << 1 << "        " << 1*1 << "          " << 1*1*1 << endl;
    cout << 2 << "        " << 2*2 << "          " << 2*2*2 << endl;
    cout << 3 << "        " << 3*3 << "          " << 3*3*3 << endl;
    cout << 4 << "        " << 4*4 << "         " << 4*4*4 << endl;
    cout << 5 << "        " << 5*5 << "         " << 5*5*5 << endl;
    cout << 6 << "        " << 6*6 << "         " << 6*6*6 << endl;
    cout << 7 << "        " << 7*7 << "         " << 7*7*7 << endl;
    cout << 8 << "        " << 8*8 << "         " << 8*8*8 << endl;
    cout << 9 << "        " << 9*9 << "         " << 9*9*9 << endl;
    cout << 10 << "       " << 10*10 << "        " << 10*10*10 << endl;

    //2.30
    double peso, altura, bmi;
    cout << "ingrese su peso: " << endl;
    cin >> peso;
    cout << "ingrese su altura: " << endl;
    cin >> altura;

    bmi = peso/(altura*altura);

    cout << "su BMI es: " << bmi << endl;

    cout << "Valores de BMI\n";
    cout << "Delgado:\tmenos de 18.5\n";
    cout << "Normal: \tentre 18.5 y 24.9\n";
    cout << "Sobrepeso:\tentre25 y 29.9\n";
    cout << "Obesidad:\t30 o mas\n";

    //2.31

    int millas, costo_galon, promedio_galon, cochera, peaje, costos;

    cout << "millas recorridas: \n";
    cin >> millas;
    cout << "costo de un galon de gasolina: \n";
    cin >> costo_galon;
    cout << "millas promedio por galon: \n";
    cin >> promedio_galon;
    cout << "costo del estacionamiento del dia: \n";
    cin >> cochera;
    cout << "costos del peaje: \n";
    cin >> peaje;

    costos = ((millas / promedio_galon) * costo_galon) + cochera + peaje;
    cout << "el costo total del dia fue: " << costos;





}
