#!/bin/bash

# build the base image
sudo docker build -t 'tester-base' .

tests='clang-analyze cppcheck'
for test in $tests; do
    sudo docker build -t "$test" "$test"

    mkdir -p "./results/$test"
    sudo docker run -v ./tests:/home/tests -v ./results/$test:/home/results "$test"
done