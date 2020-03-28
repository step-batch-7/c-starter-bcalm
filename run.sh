#! /bin/bash

rm -rf bin
mkdir -p bin
for i in `ls src/*.c`; do
  executable=`echo ${i} | sed 's/src\///' | sed "s/.c$//"`
  echo ${executable}
  gcc -o bin/${executable} ${i} && ./bin/${executable}
done

