#!/usr/bin/env bash
set -e
mkdir -p build

g++ -std=c++17 -Wall -Wextra -pedantic leetcode/two-sum/main.cpp -o build/two_sum
./build/two_sum

g++ -std=c++17 -Wall -Wextra -pedantic leetcode/excel-sheet-column-number/main.cpp -o build/excel_column
./build/excel_column

g++ -std=c++17 -Wall -Wextra -pedantic leetcode/best-time-to-buy-and-sell-stock/main.cpp -o build/best_stock
./build/best_stock

g++ -std=c++17 -Wall -Wextra -pedantic exercism/armstrong-numbers/armstrong_numbers.cpp exercism/armstrong-numbers/test.cpp -o build/armstrong
./build/armstrong

g++ -std=c++17 -Wall -Wextra -pedantic exercism/hamming/hamming.cpp exercism/hamming/test.cpp -o build/hamming
./build/hamming

echo "Todas las pruebas finalizaron correctamente."
