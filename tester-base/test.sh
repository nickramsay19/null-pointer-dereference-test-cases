#!/bin/bash

# benchmark 50 runs of each
#ANALYSIS="scan-build -no-failure-reports --status-bugs --use-analyzer=/usr/bin/clang -enable-checker core.NullDereference --status-bugs clang -Xanalyzer -analyzer-checker=core.NullDereference -w"
hyperfine -L VAR $(echo /home/tests/*.c | tr ' ' ',') --export-csv="/home/results/out.csv" --style=none -i -N -w 2 -r 50 "$ANALYSIS {VAR}"
#hyperfine --show-output -L VAR $(echo /tests/*.c | tr ' ' ',') --export-csv="/results/out.csv" -N -w 2 -r 50 "$CMD "'{VAR}'

for file in /home/tests/*.c; do
    basename="$(basename "$file")"
    $ANALYSIS $file >&2 '/dev/null'
    echo "$?" > "/home/results/$basename.out"
done



