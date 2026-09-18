# Entrega 2 - Resolución de problemas algorítmicos

**Integrante:** LAURA CAMILA GARCES CASTRO  
**Modalidad:** Individual  
**Lenguaje:** C++17  
**Rama sugerida:** `lcgc`

## Ejercicios resueltos

### LeetCode
1. Two Sum
2. Excel Sheet Column Number
3. Best Time to Buy and Sell Stock

### Exercism
4. Armstrong Numbers
5. Hamming Distance

## Estructura

- `leetcode/`: soluciones de LeetCode y ejecutables locales de prueba.
- `exercism/`: archivos de implementación, cabeceras y pruebas locales.
- `informe/`: informe de la entrega en PDF.
- `run_tests.sh`: compila y ejecuta todas las pruebas locales.

## Requisitos

- Compilador compatible con C++17, por ejemplo `g++`.
- Git para control de versiones.
- Bash para ejecutar el archivo de pruebas conjunto.

## Ejecutar todas las pruebas

Desde la raíz del repositorio:

```bash
chmod +x run_tests.sh
./run_tests.sh
```

Los ejecutables se generan dentro de `build/`, carpeta ignorada por Git.

## Subir a GitHub

```bash
git init
git checkout -b lcgc
git add .
git commit -m "Entrega 2: soluciones LeetCode y Exercism"
git remote add origin URL_DEL_REPOSITORIO
git push -u origin lcgc
```

Si el repositorio institucional ya existe, debe clonarse primero y luego copiar en él el contenido de esta entrega.
