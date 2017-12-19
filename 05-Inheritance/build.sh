set -x


if [[ "$OSTYPE" == "linux-gnu" || "$OSTYPE" == "linux" ]]; then
    cmake -DCMAKE_BUILD_TYPE=DEBUG  && make && make test
fi
