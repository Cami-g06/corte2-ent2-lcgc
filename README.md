# Entrega 2 - Resolución de problemas algorítmicos

**Integrante:** Laura Camila Garces Castro  
**Modalidad:** Individual  
**Lenguaje:** C++17

## Descripción

Este repositorio contiene las soluciones desarrolladas para cinco ejercicios de programación propuestos en LeetCode y Exercism. Las implementaciones fueron escritas en C++17 e incluyen archivos de prueba local para verificar su funcionamiento.

## Ejercicios resueltos

### LeetCode

1. **Two Sum**
   - Solución: `leetcode/two-sum/solution.cpp`
   - Pruebas locales: `leetcode/two-sum/main.cpp`

2. **Excel Sheet Column Number**
   - Solución: `leetcode/excel-sheet-column-number/solution.cpp`
   - Pruebas locales: `leetcode/excel-sheet-column-number/main.cpp`

3. **Best Time to Buy and Sell Stock**
   - Solución: `leetcode/best-time-to-buy-and-sell-stock/solution.cpp`
   - Pruebas locales: `leetcode/best-time-to-buy-and-sell-stock/main.cpp`

### Exercism

4. **Armstrong Numbers**
   - Declaración: `exercism/armstrong-numbers/armstrong_numbers.h`
   - Implementación: `exercism/armstrong-numbers/armstrong_numbers.cpp`
   - Pruebas locales: `exercism/armstrong-numbers/test.cpp`

5. **Hamming Distance**
   - Declaración: `exercism/hamming/hamming.h`
   - Implementación: `exercism/hamming/hamming.cpp`
   - Pruebas locales: `exercism/hamming/test.cpp`

## Estructura del repositorio

```text
corte2_ent2_lcgc/
├── README.md
├── .gitignore
├── run_tests.sh
├── leetcode/
│   ├── two-sum/
│   ├── excel-sheet-column-number/
│   └── best-time-to-buy-and-sell-stock/
├── exercism/
│   ├── armstrong-numbers/
│   └── hamming/
└── informe/
```

## Compilación y pruebas

Para compilar y ejecutar todas las pruebas locales desde la raíz del repositorio:

```bash
chmod +x run_tests.sh
./run_tests.sh
```

Los ejecutables se generan temporalmente en la carpeta `build`, excluida del repositorio mediante `.gitignore`.

## Informe

La carpeta `informe` contiene el documento de la entrega con la metodología, las dificultades, el análisis de complejidad y los resultados correspondientes a cada ejercicio.

git commit -m "Entrega 2: soluciones LeetCode y Exercism"
git remote add origin URL_DEL_REPOSITORIO
git push -u origin lcgc
```
