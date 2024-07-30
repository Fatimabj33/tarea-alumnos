#include <iostream>
   const int numEstudiantes = 2;
// Inicializar arreglos

void inicializarArreglos(char nombres[][30], float notasCorte1[], float notasCorte2[], float notasCorte3[], float promedioFinal[]) {
   for (int i = 0; i < numEstudiantes; i++) {
      nombres[i][0] = '\0';
      notasCorte1[i] = 0;
      notasCorte2[i] = 0;
      notasCorte3[i] = 0;
      promedioFinal[i] = 0;
   }
   
}

// funcion para ingresar los datos en los arreglos
void ingresarDatos(char nombres[][30], float notasCorte1[], float notasCorte2[], float notasCorte3[], float promedioFinal[]) {

   // Ingresar los nombres y las notas de los alumnos
   for (int i = 0; i < numEstudiantes; i++) {
      std::cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
      std::cin >> nombres[i];
      std::cout << "Ingrese la nota del corte 1 para " << nombres[i] << ": ";
      std::cin >> notasCorte1[i];
      std::cout << "Ingrese la nota del corte 2 para " << nombres[i] << ": ";
      std::cin >> notasCorte2[i];
      std::cout << "Ingrese la nota del corte 3 para " << nombres[i] << ": ";
      std::cin >> notasCorte3[i];
   }
}

// funcion para calcular el promedio final
void calcularPromedioFinal(float notasCorte1[], float notasCorte2[], float notasCorte3[], float promedioFinal[]) {
   for (int i = 0; i < numEstudiantes; i++) {
      promedioFinal[i] = (notasCorte1[i] + notasCorte2[i] + notasCorte3[i]) / 3;
   }
}

// funcion para mostrar los resultados
void mostrarResultados(char nombres[][30], float notasCorte1[], float notasCorte2[], float notasCorte3[], float promedioFinal[]) {
   std::cout << "Resultados" << std::endl;
   std::cout << "Alumno      " << "Corte 1      " << "Corte 2      " << "Corte 3      " << "Promedio Final" << std::endl;
   for (int i = 0; i < numEstudiantes; i++) {
      std::cout << nombres[i] << "      " << notasCorte1[i] << "              " << notasCorte2[i] << "               " <<notasCorte3[i] << "             " <<promedioFinal[i] << std::endl;
   }
}


int main() {

   char nombres[numEstudiantes][30];
   float notasCorte1[numEstudiantes];
   float notasCorte2[numEstudiantes];
   float notasCorte3[numEstudiantes];
   float promedioFinal[numEstudiantes];
   
   inicializarArreglos(nombres, notasCorte1,notasCorte2,notasCorte3,promedioFinal);
   ingresarDatos(nombres,notasCorte1,notasCorte2,notasCorte3,promedioFinal);
   calcularPromedioFinal(notasCorte1,notasCorte2,notasCorte3,promedioFinal);
   mostrarResultados(nombres,notasCorte1,notasCorte2,notasCorte3,promedioFinal);
   return 0;
}